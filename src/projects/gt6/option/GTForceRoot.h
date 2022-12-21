
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

static sActionList_A = [
    0x400 | main::gtengine::ButtonCode["PAUSE"],
];

static sKey_X = KeyInfo("X_button", "X", nil, sActionList, nil);
static sKey_L = KeyInfo("L_button", "L", nil, sActionList, nil);
static sKey_A = KeyInfo("A_button", "A", nil, sActionList_A, nil);
static sKey_Y = KeyInfo("Y_button", "Y", nil, sActionList, nil);
static sKey_R = KeyInfo("R_button", "R", nil, sActionList, nil);
static sKey_B = KeyInfo("B_button", "B", nil, sActionList, nil);

