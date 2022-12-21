
static sActionList = [
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

static sActionList_OnlyPAUSE = [
    0x400 | main::gtengine::ButtonCode["PAUSE"],
];

static sKey_UP = KeyInfo("up_button", "UP", nil, sActionList, nil);
static sKey_DOWN = KeyInfo("down_button", "DOWN", nil, sActionList, nil);
static sKey_LEFT = KeyInfo("left_button", "LEFT", nil, sActionList, nil);
static sKey_RIGHT = KeyInfo("right_button", "RIGHT", nil, sActionList, nil);
static sKey_L1 = KeyInfo("L1_button", "L1", nil, sActionList, nil);
static sKey_L2 = KeyInfo("L2_button", "L2", nil, sActionList, nil);
static sKey_L3 = KeyInfo("L3_button", "L3", nil, sActionList, nil);
static sKey_L4 = KeyInfo("L4_button", "L4", nil, sActionList, nil);
static sKey_L5 = KeyInfo("L5_button", "L5", nil, sActionList, nil);
static sKey_SELECT = KeyInfo("select_button", "SELECT", nil, sActionList, nil);
static sKey_TRIANGLE = KeyInfo("triangle_button", "TRIANGLE", nil, sActionList, nil);
static sKey_CROSS = KeyInfo("cross_button", "CROSS", nil, sActionList, nil);
static sKey_SQUARE = KeyInfo("square_button", "SQUARE", nil, sActionList, nil);
static sKey_CIRCLE = KeyInfo("circle_button", "CIRCLE", nil, sActionList, nil);
static sKey_R1 = KeyInfo("R1_button", "R1", nil, sActionList, nil);
static sKey_R2 = KeyInfo("R2_button", "R2", nil, sActionList, nil);
static sKey_R3 = KeyInfo("R3_button", "R3", nil, sActionList, nil);
static sKey_R4 = KeyInfo("R4_button", "R4", nil, sActionList, nil);
static sKey_R5 = KeyInfo("R5_button", "R5", nil, sActionList, nil);

static sKey_START = KeyInfo("start_button", "START", nil, sActionList_OnlyPAUSE, nil);

