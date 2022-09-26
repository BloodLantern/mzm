#define AREA_BRINSTAR 0x0
#define AREA_KRAID 0x1
#define AREA_NORFAIR 0x2
#define AREA_RIDLEY 0x3
#define AREA_TOURIAN 0x4
#define AREA_CRATERIA 0x5
#define AREA_CHOZODIA 0x6
#define AREA_INVALID 0x7
#define AREA_NONE 0xFF

#define DOOR_TYPE_NONE 0x0
#define DOOR_TYPE_AREA_CONNECTION 0x1
#define DOOR_TYPE_NO_HATCH 0x2
#define DOOR_TYPE_OPEN_HATCH 0x3
#define DOOR_TYPE_CLOSED_HATCH 0x4
#define DOOR_TYPE_REMOVE_MOTHER_SHIP 0x5
#define DOOR_TYPE_SET_MOTHER_SHIP 0x6
#define DOOR_TYPE_NO_FLAGS 0xF
#define DOOR_TYPE_EXISTS 0x10
#define DOOR_TYPE_LOAD_EVENT_BASED_ROOM 0x20
#define DOOR_TYPE_DISPLAYS_ROOM_LOCATION 0x40

#define HATCH_NONE 0x0
#define HATCH_UNUSED 0x1
#define HATCH_NORMAL 0x2
#define HATCH_MISSILE 0x3
#define HATCH_SUPER_MISSILE 0x4
#define HATCH_POWER_BOMB 0x5
#define HATCH_LOCKED 0x6
#define HATCH_LOCKED_AND_LOCK_DESTINATION 0x7

#define HATCH_ACTION_CHECKING_OPENED 0x0
#define HATCH_ACTION_SETTING_SOURCE_AND_DESTINATION 0x1
#define HATCH_ACTION_SETTING_SOURCE 0x2

#define HATCH_OPENING_ACTION_NOT_OPENING 0x0
#define HATCH_OPENING_ACTION_OPENING 0x1
#define HATCH_OPENING_ACTION_LOCKED 0x2

#define HATCH_VERTICAL_SIZE 4

#define ELEVATOR_ROUTE_NONE 0x0
#define ELEVATOR_ROUTE_CRATERIA_TO_BRINSTAR 0x1
#define ELEVATOR_ROUTE_BRINSTAR_TO_NORFAIR 0x2
#define ELEVATOR_ROUTE_BRINSTAR_TO_KRAID 0x3
#define ELEVATOR_ROUTE_NORFAIR_TO_RIDLEY 0x4
#define ELEVATOR_ROUTE_BRINSTAR_TO_TOURIAN 0x5
#define ELEVATOR_ROUTE_CRATERIA_TO_TOURIAN 0x6
#define ELEVATOR_ROUTE_CRATERIA_TO_NORFAIR 0x7

#define ELEVATOR_DIRECTION_DOWN 0x1
#define ELEVATOR_DIRECTION_UP -0x1