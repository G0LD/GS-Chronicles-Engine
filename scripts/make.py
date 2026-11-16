#!/usr/bin/env python3

import os
import shutil
import subprocess
import sys
import tempfile

ROM_NAME = "BPRE0.gba"
OFFSET_TO_PUT = 0x1C26A00
APPLY_CONTINUEANIM_GUARD = True
CFRU_OUTPUT_ROM = "test.gba"
SEARCH_FREE_SPACE = False

def MakeOffset0x100Aligned(offset: int) -> int:
    while offset % 16 != 0:
        offset += 1

    return offset

def FindOffsetToPut(rom, neededBytes: int, startOffset: int) -> int:
    offset = startOffset
    rom.seek(0, 2)
    maxPosition = rom.tell()
    numFoundBytes = 0

    while numFoundBytes < neededBytes:
        if offset + numFoundBytes >= maxPosition:
            print("End of file reached. Not enough free space.")
            return 0

        numFoundBytes += 1
        rom.seek(offset + numFoundBytes)
        if rom.read(1) != b'\xFF':
            offset = MakeOffset0x100Aligned(offset + numFoundBytes)
            numFoundBytes = 0

    return offset

def ChangeFileLine(filePath: str, lineToChange: int, replacement: str):
    with open(filePath, 'r') as file:
        copy = file.read()
        file.seek(0x0)
        lineNum = 1
        for line in file:
            if lineNum == lineToChange:
                copy = copy.replace(line, replacement)
                break
            lineNum += 1

    with open(filePath, 'w') as file:
        file.write(copy)

def EditLinker(offset: int):
    ChangeFileLine("linker.ld", 4, "\t\trom     : ORIGIN = (0x08000000 + " + hex(offset) + "), LENGTH = 32M\n")

def EditInsert(offset: int):
    ChangeFileLine("./scripts/insert.py", 10, "OFFSET_TO_PUT = " + hex(offset) + '\n')
    ChangeFileLine("./scripts/insert.py", 11, 'SOURCE_ROM = "' + ROM_NAME + '"\n')

def BuildCode():
    if shutil.which('python3') is not None:
        result = os.system("python3 scripts/build.py")
    else:
        result = os.system("python scripts/build.py")

    if result != 0:
        sys.exit(1)

def InsertCode():
    if shutil.which('python3') is not None:
        result = os.system("python3 scripts/insert.py")
    else:
        result = os.system("python scripts/insert.py")

    if result != 0:
        sys.exit("ERROR: CFRU insertion failed; ContinueAnim guard was not applied.")

def ApplyContinueAnimGuard():
    if not APPLY_CONTINUEANIM_GUARD:
        return

    guard_script = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                "apply_continueanim_guard.py")
    if not os.path.isfile(guard_script):
        sys.exit("ERROR: Missing apply_continueanim_guard.py next to make.py.")

    if not os.path.isfile(CFRU_OUTPUT_ROM):
        sys.exit("ERROR: CFRU output test.gba is missing; guard not applied.")
    if os.path.abspath(ROM_NAME) == os.path.abspath(CFRU_OUTPUT_ROM):
        sys.exit("ERROR: CFRU input and output must be different files.")

    rom_dir = os.path.dirname(os.path.abspath(CFRU_OUTPUT_ROM))
    fd, tmp_rom = tempfile.mkstemp(prefix="_continueanim_", suffix=".gba", dir=rom_dir)
    os.close(fd)
    try:
        print("Applying ContinueAnim guard to CFRU output: " + CFRU_OUTPUT_ROM, flush=True)
        result = subprocess.run([sys.executable, guard_script, CFRU_OUTPUT_ROM, tmp_rom])
        if result.returncode != 0:
            sys.exit("ERROR: ContinueAnim guard failed; test.gba remains unguarded.")
        os.replace(tmp_rom, CFRU_OUTPUT_ROM)
    finally:
        if os.path.exists(tmp_rom):
            os.remove(tmp_rom)

    print("[OK] Final ROM: test.gba (CFRU + ContinueAnim guard)", flush=True)

def ClearFromTo(rom, from_: int, to_: int):
    rom.seek(from_)
    for i in range(0, to_ - from_):
        rom.write(b'\xFF')

def main():
    try:
        with open(ROM_NAME, 'rb+') as rom:
            offset = OFFSET_TO_PUT
            if SEARCH_FREE_SPACE is True:
                offset = FindOffsetToPut(rom, 0x50000, MakeOffset0x100Aligned(offset))

            EditLinker(offset)
            EditInsert(offset)
            subprocess.run(
                [sys.executable, "scripts/generate_timestamp.py"],
            check=True
                          )
            BuildCode()
            InsertCode()
            rom.close()

    except FileNotFoundError:
        sys.exit('Error: Could not find source rom: "' + ROM_NAME + '".\n'
                 + 'Please make sure a rom with this name exists in the root.')

    ApplyContinueAnimGuard()

if __name__ == '__main__':
    main()
