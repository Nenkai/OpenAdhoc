






























static sAnalogCodeMap_forLocalizeKey = 
[
	main::gtengine::AnalogCode::INVALID : "NONE",
	
	main::gtengine::AnalogCode::STEER : "ANALOG_STEER",
	main::gtengine::AnalogCode::STEER_LEFT : "ANALOG_STEER",
	main::gtengine::AnalogCode::STEER_RIGHT : "ANALOG_STEER",
	main::gtengine::AnalogCode::ACCEL : "ANALOG_ACCEL",
	main::gtengine::AnalogCode::BRAKE : "ANALOG_BRAKE",
	main::gtengine::AnalogCode::SIDEBRAKE : "ANALOG_SIDEBRAKE",
	main::gtengine::AnalogCode::BACK : "ANALOG_REVERSEGEAR",
	main::gtengine::AnalogCode::SHIFT_UP : "ANALOG_SHIFTUP",
	main::gtengine::AnalogCode::SHIFT_DOWN : "ANALOG_SHIFTDOWN",
	main::gtengine::AnalogCode::RIDER_FORE : "ANALOG_RIDER_FORE",
	main::gtengine::AnalogCode::RIDER_BACK : "ANALOG_RIDER_BACK",
	main::gtengine::AnalogCode::ANALOG_HEAD : "ANALOG_ANALOG_HEAD",
	main::gtengine::AnalogCode::ANALOG_HEAD_LEFT : "ANALOG_ANALOG_HEAD_LEFT",
	main::gtengine::AnalogCode::ANALOG_HEAD_RIGHT : "ANALOG_ANALOG_HEAD_RIGHT",
	main::gtengine::AnalogCode::RTA_DIAL : "ANALOG_RTA_DIAL",
];




static sButtonCodeMap_forLocalizeKey = 
[
	main::gtengine::ButtonCode::INVALID : "NONE",
	
	main::gtengine::ButtonCode::STEER_LEFT : "BUTTON_LSTEER",
	main::gtengine::ButtonCode::STEER_RIGHT : "BUTTON_RSTEER",
	main::gtengine::ButtonCode::ACCEL : "BUTTON_ACCEL",
	main::gtengine::ButtonCode::BOOST : "BUTTON_BOOST",
	main::gtengine::ButtonCode::BRAKE : "BUTTON_BRAKE",
	main::gtengine::ButtonCode::SIDEBRAKE : "BUTTON_SIDEBRAKE",
	main::gtengine::ButtonCode::BACK : "BUTTON_REVERSEGEAR",
	main::gtengine::ButtonCode::SHIFT_UP : "BUTTON_SHIFTUP",
	main::gtengine::ButtonCode::SHIFT_DOWN : "BUTTON_SHIFTDOWN",
	main::gtengine::ButtonCode::RIDER_FORE : "BUTTON_RIDER_FORE",
	main::gtengine::ButtonCode::RIDER_AFT : "BUTTON_RIDER_AFT",
	main::gtengine::ButtonCode::RIDER_LOOPBACK : "BUTTON_RIDER_LOOPBACK",
	main::gtengine::ButtonCode::NOS : "NOS",
	
	main::gtengine::ButtonCode::PLAYVIEW : "BUTTON_PLAYVIEW",
	main::gtengine::ButtonCode::BACKVIEW : "BUTTON_BACKVIEW",
	main::gtengine::ButtonCode::HEAD_FRONT : "BUTTON_HEAD_FRONT",
	main::gtengine::ButtonCode::HEAD_REAR : "BUTTON_HEAD_REAR",
	main::gtengine::ButtonCode::HEAD_LEFT : "BUTTON_LEFTVIEW",
	main::gtengine::ButtonCode::HEAD_RIGHT : "BUTTON_RIGHTVIEW",
	
	main::gtengine::ButtonCode::GHOST : "BUTTON_GHOST",
	main::gtengine::ButtonCode::BEST_LINE : "BUTTON_BEST_LINE",
	main::gtengine::ButtonCode::PANEL : "BUTTON_PANEL",
	
	main::gtengine::ButtonCode::PAUSE : "BUTTON_PAUSE",
	main::gtengine::ButtonCode::HORN : "BUTTON_HORN",
	
	
	main::gtengine::ButtonCode::PASSING : "PASSING",
	main::gtengine::ButtonCode::WIPER : "WIPER",
	main::gtengine::ButtonCode::LIGHT_TYPE : "LIGHT_TYPE",
	main::gtengine::ButtonCode::LIGHT_TYPE_AND_PASSING : "LIGHT_TYPE_AND_PASSING",
	
	main::gtengine::ButtonCode::RTA_PLUS : "BUTTON_RTA_PLUS",
	main::gtengine::ButtonCode::RTA_MINUS : "BUTTON_RTA_MINUS",
	main::gtengine::ButtonCode::RTA_OPEN : "BUTTON_RTA_OPEN",
	
	main::gtengine::ButtonCode::RTA_DIAL_INC : "BUTTON_RTA_DIAL_INC",
	main::gtengine::ButtonCode::RTA_DIAL_DEC : "BUTTON_RTA_DIAL_DEC",
	
	main::gtengine::ButtonCode::EVENT00 : "BUTTON_EVENT00",
	main::gtengine::ButtonCode::EVENT01 : "BUTTON_EVENT01",
	main::gtengine::ButtonCode::EVENT02 : "BUTTON_EVENT02",
	main::gtengine::ButtonCode::EVENT03 : "BUTTON_EVENT03"
];


class KeyInfo
{
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