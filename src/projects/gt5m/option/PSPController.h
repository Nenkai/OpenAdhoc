













static sActionList_StickX = [
    0x800 | main::gtengine::AnalogCode["STEER"],

    // Probably the rest of the GT5 definitions commented out here?





];



static sActionList_OnlyButton = [
    0x400 | main::gtengine::ButtonCode["ACCEL"],
    0x400 | main::gtengine::ButtonCode["BRAKE"],
    0x400 | main::gtengine::ButtonCode["SHIFT_UP"],
    0x400 | main::gtengine::ButtonCode["SHIFT_DOWN"],
    0x400 | main::gtengine::ButtonCode["BACK"],
    0x400 | main::gtengine::ButtonCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],


    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x400 | main::gtengine::ButtonCode["INVALID"]
];



static sActionList_RightKey = [
    0x400 | main::gtengine::ButtonCode["STEER_RIGHT"],
    0x400 | main::gtengine::ButtonCode["ACCEL"],
    0x400 | main::gtengine::ButtonCode["BRAKE"],
    0x400 | main::gtengine::ButtonCode["SHIFT_UP"],
    0x400 | main::gtengine::ButtonCode["SHIFT_DOWN"],
    0x400 | main::gtengine::ButtonCode["BACK"],
    0x400 | main::gtengine::ButtonCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],


    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x800 | main::gtengine::AnalogCode["INVALID"]
];



static sActionList_LeftKey = [
    0x400 | main::gtengine::ButtonCode["STEER_LEFT"],
    0x400 | main::gtengine::ButtonCode["ACCEL"],
    0x400 | main::gtengine::ButtonCode["BRAKE"],
    0x400 | main::gtengine::ButtonCode["SHIFT_UP"],
    0x400 | main::gtengine::ButtonCode["SHIFT_DOWN"],
    0x400 | main::gtengine::ButtonCode["BACK"],
    0x400 | main::gtengine::ButtonCode["SIDEBRAKE"],
    0x400 | main::gtengine::ButtonCode["PLAYVIEW"],
    0x400 | main::gtengine::ButtonCode["BACKVIEW"],


    0x400 | main::gtengine::ButtonCode["GHOST"],
    0x800 | main::gtengine::AnalogCode["INVALID"]
];



static sActionList_Start = [
    0x400 | main::gtengine::ButtonCode["PAUSE"],
];











static sLinkList_LEFT = [
    KeyLinkPattern(0x400 | main::gtengine::ButtonCode["STEER_LEFT"], nil, "right_button", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    KeyLinkPattern(nil, 0x400 | main::gtengine::ButtonCode["STEER_LEFT"], "right_button", 0x400 | main::gtengine::ButtonCode["STEER_RIGHT"])
];



static sLinkList_RIGHT = [
    KeyLinkPattern(0x400 | main::gtengine::ButtonCode["STEER_RIGHT"], nil, "left_button", 0x800 | main::gtengine::AnalogCode["INVALID"]),
    KeyLinkPattern(nil, 0x400 | main::gtengine::ButtonCode["STEER_RIGHT"], "left_button", 0x400 | main::gtengine::ButtonCode["STEER_LEFT"])
];







static sLinkList_SQUARE = [
    KeyLinkPattern(0x400 | main::gtengine::ButtonCode["STEER_LEFT"], nil, "circle_button", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(nil, 0x400 | main::gtengine::ButtonCode["STEER_LEFT"], "circle_button", 0x400 | main::gtengine::ButtonCode["STEER_RIGHT"])
];




static sLinkList_CIRCLE = [
    KeyLinkPattern(0x400 | main::gtengine::ButtonCode["STEER_RIGHT"], nil, "square_button", 0x800 | main::gtengine::AnalogCode["INVALID"]),

    KeyLinkPattern(nil, 0x400 | main::gtengine::ButtonCode["STEER_RIGHT"], "square_button", 0x400 | main::gtengine::ButtonCode["STEER_LEFT"])
];




static sKey_L = KeyInfo("L_button", "L", nil, sActionList_OnlyButton, nil);
static sKey_UP = KeyInfo("up_button", "UP", nil, sActionList_OnlyButton, nil);
static sKey_DOWN = KeyInfo("down_button", "DOWN", nil, sActionList_OnlyButton, nil);
static sKey_LEFT = KeyInfo("left_button", "LEFT", nil, sActionList_LeftKey, sLinkList_LEFT);
static sKey_RIGHT = KeyInfo("right_button", "RIGHT", nil, sActionList_RightKey, sLinkList_RIGHT);
static sKey_SELECT = KeyInfo("select_button", "SELECT", nil, sActionList_OnlyButton, nil);
static sKey_BX1 = KeyInfo("Lstick", nil, "STICK_BX1", sActionList_StickX, nil);

static sKey_R = KeyInfo("R_button", "R", nil, sActionList_OnlyButton, nil);
static sKey_TRIANGLE = KeyInfo("triangle_button", "TRIANGLE", nil, sActionList_OnlyButton, nil);
static sKey_CROSS = KeyInfo("cross_button", "CROSS", nil, sActionList_OnlyButton, nil);
static sKey_SQUARE = KeyInfo("square_button", "SQUARE", nil, sActionList_LeftKey, sLinkList_SQUARE);
static sKey_CIRCLE = KeyInfo("circle_button", "CIRCLE", nil, sActionList_RightKey, sLinkList_CIRCLE);
static sKey_START = KeyInfo("start_button", "START", nil, sActionList_Start, nil);

static sKey_Dummy = KeyInfo("dummy", "dummy", nil, [], nil);