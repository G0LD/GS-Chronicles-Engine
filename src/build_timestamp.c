#include "../include/global.h"

extern const u8 gBuildTimestampText[];
extern bool8 ShowFieldMessage(const u8 *str);

void sp14E_ShowBuildTimestamp(void)
{
    ShowFieldMessage(gBuildTimestampText);
}
//yeah. eso es todo. Que esperabas we? It does what it's supposed to do.
