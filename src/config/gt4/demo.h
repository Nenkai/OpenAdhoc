


















class Demo
{
    attribute type;
    attribute name;
    attribute arg;

    method __init__(tp, nm, ag)
    {
        type = tp;
        name = nm;
        arg = ag;
    }

    method getType()
    {
        switch (type)
        {
            case 0:
                return "autodemo"
                break;

            case 1:
                return "menu";
                break;

            case 2:
                return "replay";
                break;
        }
    }
}

function setNextDemo(index)
{
    var num = DemoList.size;
    if (num == 0)
        return false;
        
    if (index < 0 || num <= index)
        index = 0;

    var demo = DemoList[index];
    var demonstration = main::game.demonstration;
    demonstration.type = demo.getType();
    demonstration.name = demo.name;

    if (demo.arg != nil)
        demonstration.arg = demo.arg;

    return true;
}