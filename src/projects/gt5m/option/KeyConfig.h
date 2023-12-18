


























static sAnalogCodeMap_forLocalizeKey =
[
    main::gtengine::AnalogCode::INVALID : "NONE",

    main::gtengine::AnalogCode::STEER : "ANALOG_STEER"

    // Probably the rest of the GT5 definitions commented out here?













];



static sButtonCodeMap_forLocalizeKey =
[
	main::gtengine::ButtonCode::INVALID : "NONE",
	
	main::gtengine::ButtonCode::STEER_LEFT : "BUTTON_LSTEER",
	main::gtengine::ButtonCode::STEER_RIGHT : "BUTTON_RSTEER",
	main::gtengine::ButtonCode::ACCEL : "BUTTON_ACCEL",
	//main::gtengine::ButtonCode::BOOST : "BUTTON_BOOST",
	main::gtengine::ButtonCode::BRAKE : "BUTTON_BRAKE",
	main::gtengine::ButtonCode::SIDEBRAKE : "BUTTON_SIDEBRAKE",
	main::gtengine::ButtonCode::BACK : "BUTTON_REVERSEGEAR",
	main::gtengine::ButtonCode::SHIFT_UP : "BUTTON_SHIFTUP",
	main::gtengine::ButtonCode::SHIFT_DOWN : "BUTTON_SHIFTDOWN",
	//main::gtengine::ButtonCode::RIDER_FORE : "BUTTON_RIDER_FORE",
	//main::gtengine::ButtonCode::RIDER_AFT : "BUTTON_RIDER_AFT",
	//main::gtengine::ButtonCode::RIDER_LOOPBACK : "BUTTON_RIDER_LOOPBACK",
	
	main::gtengine::ButtonCode::PLAYVIEW : "BUTTON_PLAYVIEW",
	main::gtengine::ButtonCode::BACKVIEW : "BUTTON_BACKVIEW",
	//main::gtengine::ButtonCode::HEAD_FRONT : "BUTTON_HEAD_FRONT",
	//main::gtengine::ButtonCode::HEAD_REAR : "BUTTON_HEAD_REAR",
	//main::gtengine::ButtonCode::HEAD_LEFT : "BUTTON_LEFTVIEW",
	//main::gtengine::ButtonCode::HEAD_RIGHT : "BUTTON_RIGHTVIEW",
	
	main::gtengine::ButtonCode::GHOST : "BUTTON_GHOST",
	//main::gtengine::ButtonCode::BEST_LINE : "BUTTON_BEST_LINE",
	//main::gtengine::ButtonCode::PANEL : "BUTTON_PANEL",
	
	main::gtengine::ButtonCode::PAUSE : "BUTTON_PAUSE",

    // Probably more of the GT5 definitions commented out here?












];



class KeyInfo {
    attribute name;
    attribute button_channel;
    attribute analog_channel;
    attribute key_action_list;
    attribute key_link_list;

    method __init__(_name, _button_channel, _analog_channel, _key_action_list, _key_link_list)
    {
        self.name = _name;
        self.button_channel = _button_channel;
        self.analog_channel = _analog_channel;
        self.key_action_list = _key_action_list;
        self.key_link_list = _key_link_list;
    }




    method findKeyLinkPattern(_src_action, _dst_action)
    {
        var link_list = self.key_link_list;
        for (var i = 0; i < link_list.size; i++)
        {
            if (link_list[i].src_action == _src_action &&
                link_list[i].dst_action == _dst_action)
            {
                return [link_list[i].target_name, link_list[i].target_action];
            }
        }
        return nil;
    }







    method findKeyLinkTarget(_src_action, _dst_action)
    {
        var res = findKeyLinkPattern(_src_action, _dst_action);
        if (res == nil)
        {
            res = findKeyLinkPattern(nil, _dst_action);
            if (res == nil)
            {
                res = findKeyLinkPattern(_src_action, nil);
            }
        }
        return res;
    }
}




class KeyLinkPattern
{
    attribute src_action;
    attribute dst_action;
    attribute target_name;
    attribute target_action;

    method __init__(_src_action, _dst_action, _target_name, _target_action)
    {
        self.src_action = _src_action;
        self.dst_action = _dst_action;
        self.target_name = _target_name;
        self.target_action = _target_action;
    }
}