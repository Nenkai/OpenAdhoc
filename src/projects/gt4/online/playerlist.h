static sCurrentPlayerList = nil;
static sCurrentBARESACount = nil;
static sCurrentBAREQCount = nil;
static sIsOnOpen = nil;

function initialize(context)
{
    PlayerListPane.actor.out = true;
    PlayerListPane.actor.warp();
    PlayerListPane.visible = false;

    sCurrentPlayerList = nil;
    sCurrentBARESACount = sBARESACount;
    sCurrentBAREQCount = sBAREQCount;
    sIsOnOpen = false;

    ScrollBox::ListBox::initialize(context);
}

function finalize(context)
{
    sCurrentPlayerList = nil;
    sCurrentBARESACount = nil;
    sCurrentBAREQCount = nil;
    sIsOnOpen = nil;
}

function open(context)
{
    ScrollBox::ListBox::updateList(context, 1);
}

function close(context)
{
}

function setFocusPane()
{
    ScrollBox::ListBox.focus_active = true;
    ScrollBox::ListBox.focus_callback = ScrollBox::ListBox::focus_callback;
    ROOT.setFocus(ScrollBox::ListBox);
}