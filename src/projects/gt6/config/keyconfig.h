













module KeyConfig
{
    
    class KeyAssign
    {

        attribute device;
        attribute button_port;
        attribute analog_port;
        attribute port_type;
        attribute set_action;

        method __init__(_device, _button_port, _analog_port, _port_type, _set_action)
        {
            self.device = _device;
            self.button_port = _button_port;
            self.analog_port = _analog_port;
            self.port_type = _port_type;
            self.set_action = _set_action;
        }

        method setKeyAssign(device_map)
        {
            var device_config = device_map[self.device];
            var analog_config = device_config["analog"];
            var button_config = device_config["button"];
            if (self.analog_port != nil)
            {
                var analog_channel = main::pdistd::SuperPortAnalogChannel[self.analog_port];

                if (self.port_type == "analog")
                    analog_config[analog_channel] = main::gtengine::AnalogCode[self.set_action];
                else
                    analog_config[analog_channel] = main::gtengine::AnalogCode::INVALID;
            }

            if (self.button_port != nil)
            {
                var button_bit = main::pdistd::SuperPortButtonBit[self.button_port];

                if (self.port_type == "button")
                    button_config[button_bit] = main::gtengine::ButtonCode[self.set_action]
                else
                    button_config[button_bit] = main::gtengine::ButtonCode::INVALID;
            }
        }
    }

    class ButtonAssign : KeyAssign
    {
        method __init__(_device, _button_port, _set_action)
        {
            __super__::__init__(_device, _button_port, nil, "button", _set_action);
        }
    }

    class AnalogAssign : KeyAssign
    {
        method __init__(_device, _analog_port, _set_action)
        {
            __super__::__init__(_device, nil, _analog_port, "analog", _set_action);
        }
    }


    function SetPlayNormal(assign_list)
    {
        var port_max = 2;


        var option = main::GAME_STATUS.user_profile.option;

        for (var port = 0; port < port_max; port++)
        {
            var config = option.key_config.getConfig(port);
            
            var play_config = config[main::gtengine::InputMode::PLAY_NORMAL];

            for (var i = 0; i < assign_list.size; i++)
            {
                assign_list[i].setKeyAssign(play_config);
            }

            option.key_config.setConfig(config, port);
        }


        var default_config = option.key_config.getConfig(0);
        var play_default_config = default_config[main::gtengine::InputMode::PLAY_NORMAL];


        option.default_sixaxis = play_default_config["SIXAXIS"];
        option.default_leopard = play_default_config["LEOPARD"];
        option.default_tigar = play_default_config["TIGAR"];
        option.default_jaguar = play_default_config["JAGUAR"];
        option.default_cheetah = play_default_config["CHEETAH"];
        option.default_cougar = play_default_config["COUGAR"];
    }
}