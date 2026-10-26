#include "../defines.h"
#include "../../include/global.h"
#include "../../include/fieldmap.h"
#include "../../include/metatile_behavior.h"
#include "../../include/overworld.h"
#include "../../include/link.h"
#include "../../include/script.h"
#include "../../include/sprite.h"
#include "../../include/event_object_movement.h"
#include "../../include/constants/event_object_movement_constants.h"
#include "../../include/constants/event_objects.h"
#include "../../include/new/follow_me.h"
#include "../../include/new/movement_action_tables.h"

#ifdef OW_SHADOWS
extern void SetEventObjectShadowVisibility(struct EventObject *eventObject, bool8 invisible);
#endif

#ifdef OW_SHADOWS 
bool8 MovementAction_SetInvisible_Step0(struct EventObject *objectEvent, struct Sprite *sprite)
{
    objectEvent->invisible = TRUE;
    sprite->data[2] = 1;
    SetEventObjectShadowVisibility(objectEvent, TRUE);
    return TRUE;
}

bool8 MovementAction_SetVisible_Step0(struct EventObject *objectEvent, struct Sprite *sprite)
{
    objectEvent->invisible = FALSE;
    sprite->data[2] = 1;
    SetEventObjectShadowVisibility(objectEvent, FALSE);
    return TRUE;
}
#endif