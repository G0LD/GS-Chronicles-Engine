from datetime import datetime
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parent.parent

def git(*args):
    try:
        return subprocess.check_output(
            ["git", "-C", str(ROOT), *args],
            text=True,
            stderr=subprocess.DEVNULL
        ).strip()
    except (OSError, subprocess.CalledProcessError):
        return None

timestamp = datetime.now().strftime("%Y-%m-%d %H:%M")
commit = git("rev-parse", "--short=7", "HEAD") or "Unknown"
changes = git("status", "--porcelain", "--untracked-files=no")
status = "Unknown" if changes is None else (
    "Modified" if changes else "Clean"
)

output = ROOT / "strings" / "build_timestamp.string"

output.write_text(
    "//This is an auto generated text. Do not change!\n"
    "#org @gBuildTimestampText\n"
    f"Pok\emon GS Chronicles\\nBuild: {timestamp} GMT-6\\l"
    f"Latest commit: {commit}\n",
    encoding="utf-8"
)

print(f"Build: {timestamp} | {commit} | {status}")
