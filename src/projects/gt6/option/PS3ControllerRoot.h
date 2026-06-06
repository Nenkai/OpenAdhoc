














static sActionList_StickY = [
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x800 | main::gtengine::AnalogCode["INVALID"],
];



static sActionList_StickX = [
    0x800 | main::gtengine::AnalogCode["STEER"],
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"],
    0x800 | main::gtengine::AnalogCode["INVALID"],
];




static sActionList_L2_R2 = [
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["NOS"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],
    0x800 | main::gtengine::AnalogCode["ANALOG_HEAD_LEFT"],
    0x800 | main::gtengine::AnalogCode["ANALOG_HEAD_RIGHT"],
    0x400 | main::gtengine::ButtonCode["HORN"],
    0x400 | main::gtengine::ButtonCode["PASSING"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE_AND_PASSING"],



    0x400 | main::gtengine::ButtonCode["WIPER"],

    0x400 | main::gtengine::ButtonCode["RTA_OPEN"],
    0x400 | main::gtengine::ButtonCode["RTA_PLUS"],
    0x400 | main::gtengine::ButtonCode["RTA_MINUS"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_INC"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_DEC"],

    0x800 | main::gtengine::AnalogCode["INVALID"],
];




static sActionList_OnlyButton = [
    0x400 | main::gtengine::ButtonCode["ACCEL"],
    0x400 | main::gtengine::ButtonCode["BRAKE"],
    0x400 | main::gtengine::ButtonCode["SHIFT_UP"],
    0x400 | main::gtengine::ButtonCode["SHIFT_DOWN"],
    0x400 | main::gtengine::ButtonCode["BACK"],
    0x400 | main::gtengine::ButtonCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["NOS"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],
    0x400 | main::gtengine::ButtonCode["HEAD_LEFT"],
    0x400 | main::gtengine::ButtonCode["HEAD_RIGHT"],
    0x400 | main::gtengine::ButtonCode["HORN"],
    0x400 | main::gtengine::ButtonCode["PASSING"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE_AND_PASSING"],



    0x400 | main::gtengine::ButtonCode["WIPER"],

    0x400 | main::gtengine::ButtonCode["RTA_OPEN"],
    0x400 | main::gtengine::ButtonCode["RTA_PLUS"],
    0x400 | main::gtengine::ButtonCode["RTA_MINUS"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_INC"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_DEC"],

    0x400 | main::gtengine::ButtonCode["INVALID"],
];




static sActionList_Standard = [
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["NOS"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],
    0x400 | main::gtengine::ButtonCode["HEAD_LEFT"],
    0x400 | main::gtengine::ButtonCode["HEAD_RIGHT"],
    0x400 | main::gtengine::ButtonCode["HORN"],
    0x400 | main::gtengine::ButtonCode["PASSING"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE_AND_PASSING"],



    0x400 | main::gtengine::ButtonCode["WIPER"],

    0x400 | main::gtengine::ButtonCode["RTA_OPEN"],
    0x400 | main::gtengine::ButtonCode["RTA_PLUS"],
    0x400 | main::gtengine::ButtonCode["RTA_MINUS"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_INC"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_DEC"],

    0x800 | main::gtengine::AnalogCode["INVALID"],
];



static sActionList_UpDownKey = [
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["NOS"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],
    0x400 | main::gtengine::ButtonCode["HEAD_LEFT"],
    0x400 | main::gtengine::ButtonCode["HEAD_RIGHT"],
    0x400 | main::gtengine::ButtonCode["HORN"],
    0x400 | main::gtengine::ButtonCode["PASSING"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE_AND_PASSING"],



    0x400 | main::gtengine::ButtonCode["WIPER"],

    0x400 | main::gtengine::ButtonCode["RTA_OPEN"],
    0x400 | main::gtengine::ButtonCode["RTA_PLUS"],
    0x400 | main::gtengine::ButtonCode["RTA_MINUS"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_INC"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_DEC"],

    0x800 | main::gtengine::AnalogCode["INVALID"],
];



static sActionList_RightKey = [
    0x800 | main::gtengine::AnalogCode["STEER_RIGHT"],
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["NOS"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],
    0x400 | main::gtengine::ButtonCode["HEAD_LEFT"],
    0x400 | main::gtengine::ButtonCode["HEAD_RIGHT"],
    0x400 | main::gtengine::ButtonCode["HORN"],
    0x400 | main::gtengine::ButtonCode["PASSING"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE_AND_PASSING"],



    0x400 | main::gtengine::ButtonCode["WIPER"],

    0x400 | main::gtengine::ButtonCode["RTA_OPEN"],
    0x400 | main::gtengine::ButtonCode["RTA_PLUS"],
    0x400 | main::gtengine::ButtonCode["RTA_MINUS"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_INC"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_DEC"],

    0x800 | main::gtengine::AnalogCode["INVALID"],
];



static sActionList_LeftKey = [
    0x800 | main::gtengine::AnalogCode["STEER_LEFT"],
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["NOS"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],
    0x400 | main::gtengine::ButtonCode["HEAD_LEFT"],
    0x400 | main::gtengine::ButtonCode["HEAD_RIGHT"],
    0x400 | main::gtengine::ButtonCode["HORN"],
    0x400 | main::gtengine::ButtonCode["PASSING"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE_AND_PASSING"],



    0x400 | main::gtengine::ButtonCode["WIPER"],

    0x400 | main::gtengine::ButtonCode["RTA_OPEN"],
    0x400 | main::gtengine::ButtonCode["RTA_PLUS"],
    0x400 | main::gtengine::ButtonCode["RTA_MINUS"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_INC"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_DEC"],

    0x800 | main::gtengine::AnalogCode["INVALID"],
];



static sActionList_Start = [
    0x400 | main::gtengine::ButtonCode["PAUSE"],
]



static sActionList_WithSteerR = [
    0x800 | main::gtengine::AnalogCode["STEER_RIGHT"],
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["NOS"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],
    0x400 | main::gtengine::ButtonCode["HEAD_LEFT"],
    0x400 | main::gtengine::ButtonCode["HEAD_RIGHT"],
    0x400 | main::gtengine::ButtonCode["HORN"],
    0x400 | main::gtengine::ButtonCode["PASSING"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE_AND_PASSING"],



    0x400 | main::gtengine::ButtonCode["WIPER"],

    0x400 | main::gtengine::ButtonCode["RTA_OPEN"],
    0x400 | main::gtengine::ButtonCode["RTA_PLUS"],
    0x400 | main::gtengine::ButtonCode["RTA_MINUS"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_INC"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_DEC"],

    0x800 | main::gtengine::AnalogCode["INVALID"],
];



static sActionList_WithSteerL = [
    0x800 | main::gtengine::AnalogCode["STEER_LEFT"],
    0x800 | main::gtengine::AnalogCode["ACCEL"],
    0x800 | main::gtengine::AnalogCode["BRAKE"],
    0x800 | main::gtengine::AnalogCode["SHIFT_UP"],
    0x800 | main::gtengine::AnalogCode["SHIFT_DOWN"],
    0x800 | main::gtengine::AnalogCode["BACK"],
    0x800 | main::gtengine::AnalogCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["NOS"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],
    0x400 | main::gtengine::ButtonCode["HEAD_LEFT"],
    0x400 | main::gtengine::ButtonCode["HEAD_RIGHT"],
    0x400 | main::gtengine::ButtonCode["HORN"],
    0x400 | main::gtengine::ButtonCode["PASSING"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE"],
    0x400 | main::gtengine::ButtonCode["LIGHT_TYPE_AND_PASSING"],



    0x400 | main::gtengine::ButtonCode["WIPER"],

    0x400 | main::gtengine::ButtonCode["RTA_OPEN"],
    0x400 | main::gtengine::ButtonCode["RTA_PLUS"],
    0x400 | main::gtengine::ButtonCode["RTA_MINUS"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_INC"],
    0x400 | main::gtengine::ButtonCode["RTA_DIAL_DEC"],

    0x800 | main::gtengine::AnalogCode["INVALID"],
];










static sLinkList_LEFT = [
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["STEER_LEFT"], nil, "right_button", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["STEER_LEFT"], "right_button", 0x800 | main::gtengine::AnalogCode["STEER_RIGHT"]),
];


static sLinkList_RIGHT = [
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["STEER_RIGHT"], nil, "left_button", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["STEER_RIGHT"], "left_button", 0x800 | main::gtengine::AnalogCode["STEER_LEFT"]),
];






static sLinkList_SQUARE = [
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["STEER_LEFT"], nil, "circle_button", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    
    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["STEER_LEFT"], "circle_button", 0x800 | main::gtengine::AnalogCode["STEER_RIGHT"]),
];



static sLinkList_CIRCLE = [
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["STEER_RIGHT"], nil, "square_button", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    
    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["STEER_RIGHT"], "square_button", 0x800 | main::gtengine::AnalogCode["STEER_LEFT"]),
];






static sLinkList_BX1F = [
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["STEER"], nil, "Lstick_right", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"], nil, "Lstick_right", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["RTA_DIAL"], nil, "Lstick_right", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["STEER"], "Lstick_right", 0x800 | main::gtengine::AnalogCode["STEER"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"], "Lstick_right", 0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["RTA_DIAL"], "Lstick_right", 0x800 | main::gtengine::AnalogCode["RTA_DIAL"]),

];


static sLinkList_BX1L = [
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["STEER"], nil, "Lstick_left", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"], nil, "Lstick_left", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["RTA_DIAL"], nil, "Lstick_left", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["STEER"], "Lstick_left", 0x800 | main::gtengine::AnalogCode["STEER"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"], "Lstick_left", 0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["RTA_DIAL"], "Lstick_left", 0x800 | main::gtengine::AnalogCode["RTA_DIAL"]),

];





static sLinkList_BX2F = [
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["STEER"], nil, "Rstick_right", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"], nil, "Rstick_right", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["RTA_DIAL"], nil, "Rstick_right", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["STEER"], "Rstick_right", 0x800 | main::gtengine::AnalogCode["STEER"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"], "Rstick_right", 0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["RTA_DIAL"], "Rstick_right", 0x800 | main::gtengine::AnalogCode["RTA_DIAL"]),

];


static sLinkList_BX2L = [
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["STEER"], nil, "Rstick_left", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    
    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"], nil, "Rstick_left", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(0x800 | main::gtengine::AnalogCode["RTA_DIAL"], nil, "Rstick_left", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["STEER"], "Rstick_left", 0x800 | main::gtengine::AnalogCode["STEER"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"], "Rstick_left", 0x800 | main::gtengine::AnalogCode["ANALOG_HEAD"]),

    KeyLinkPattern(nil, 0x800 | main::gtengine::AnalogCode["RTA_DIAL"], "Rstick_left", 0x800 | main::gtengine::AnalogCode["RTA_DIAL"]),

];



static sKey_L1 = KeyInfo("L1_button", "L1", "PRESS_L1", sActionList_Standard, nil);
static sKey_L2 = KeyInfo("L2_button", "L2", "PRESS_L2", sActionList_L2_R2, nil);
static sKey_L3 = KeyInfo("L3_button", "L3", nil, sActionList_OnlyButton, nil);
static sKey_UP = KeyInfo("up_button", "UP", "PRESS_UP", sActionList_UpDownKey, nil);
static sKey_DOWN = KeyInfo("down_button", "DOWN", "PRESS_DOWN", sActionList_UpDownKey, nil);
static sKey_LEFT = KeyInfo("left_button", "LEFT", "PRESS_LEFT", sActionList_LeftKey, sLinkList_LEFT);
static sKey_RIGHT = KeyInfo("right_button", "RIGHT", "PRESS_RIGHT", sActionList_RightKey, sLinkList_RIGHT);
static sKey_SELECT = KeyInfo("select_button", "SELECT", nil, sActionList_OnlyButton, nil);
static sKey_BY1F = KeyInfo("Lstick_up", nil, "STICK_BY1F", sActionList_StickY, nil);
static sKey_BY1L = KeyInfo("Lstick_down", nil, "STICK_BY1L", sActionList_StickY, nil);
static sKey_BX1F = KeyInfo("Lstick_left", nil, "STICK_BX1F", sActionList_StickX, sLinkList_BX1F);
static sKey_BX1L = KeyInfo("Lstick_right", nil, "STICK_BX1L", sActionList_StickX, sLinkList_BX1L);

static sKey_R1 = KeyInfo("R1_button", "R1", "PRESS_R1", sActionList_Standard, nil);
static sKey_R2 = KeyInfo("R2_button", "R2", "PRESS_R2", sActionList_L2_R2, nil);
static sKey_R3 = KeyInfo("R3_button", "R3", nil, sActionList_OnlyButton, nil);
static sKey_TRIANGLE = KeyInfo("triangle_button", "TRIANGLE", "PRESS_TRIANGLE", sActionList_Standard, nil);
static sKey_CROSS = KeyInfo("cross_button", "CROSS", "PRESS_CROSS", sActionList_Standard, nil);
static sKey_SQUARE = KeyInfo("square_button", "SQUARE", "PRESS_SQUARE", sActionList_WithSteerL, sLinkList_SQUARE);
static sKey_CIRCLE = KeyInfo("circle_button", "CIRCLE", "PRESS_CIRCLE", sActionList_WithSteerR, sLinkList_CIRCLE);
static sKey_START = KeyInfo("start_button", "START", nil, sActionList_Start, nil);
static sKey_BY2F = KeyInfo("Rstick_up", nil, "STICK_BY2F", sActionList_StickY, nil);
static sKey_BY2L = KeyInfo("Rstick_down", nil, "STICK_BY2L", sActionList_StickY, nil);
static sKey_BX2F = KeyInfo("Rstick_left", nil, "STICK_BX2F", sActionList_StickX, sLinkList_BX2F);
static sKey_BX2L = KeyInfo("Rstick_right", nil, "STICK_BX2L", sActionList_StickX, sLinkList_BX2L);
