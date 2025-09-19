static sSelectingCar = nil;
static sSelectingColor = nil;
static sLastIndex = nil;

function open(context)
{
	CommandPane::ChangeCar.active = true;
	ROOT.setFocus(ScrollBox::ListBox);
}

function close(context)
{
	ROOT.setFocus(nil);
	CommandPane::ChangeCar.active = false;
}

function onCancel(context)
{
	main::sound.play("cancel");
	popGenPane(context);
	sLastIndex = nil;
	return EVENTRESULT_FILTER;
}

function refresh(context, elems, selecting_car, title)
{
	Title::title.text = title;
	sSelectingCar = selecting_car;
	sSelectingColor = false;
	ScrollBox::ListBox::refresh(context, elems);
}

function refreshAsColor(context, car_code)
{
	Title::title.text = context.translate(ROOT, "Color");
	sSelectingCar = false;
	sSelectingColor = true;
	ScrollBox::ListBox::refreshAsColor(context, car_code);
}

function finalize()
{
	sSelectingCar = nil;
	sSelectingColor = nil;
	ScrollBox::ListBox::sElemList = nil;
	ScrollBox::ListBox::sCarGarage = nil;
	ScrollBox::ListBox::sCacheNames = nil;
}

module ScrollBox::ListBox
{
	static sElemList = nil;
	static sCarGarage = nil;
	static sCacheNames = nil;

	function refresh(context, elems)
	{
		sElemList = elems;
		sCarGarage = nil;
		var size = sElemList.size;
		ScrollBox::ListBox.setItemCount(0);
		ScrollBox::ListBox.setItemCount(size);
		sCacheNames = Array(size);
		
		for (var i = 0; i < size; i++)
		{
			var elem = sElemList[i];
			var name = elem.getAttribute("name");
			if (name == nil)
			{
				var val = elem.value;
				if (val.beginWith("#"))
					val = main::menu::MCarData::GetCarLabelByArray([0, val.substr(1).toInt()]);

				sCacheNames[i] = main::menu::MCarData::GetShortCarName(val);
				continue;
			}
			
			var t = context.translate(ROOT, "TunerName", name);
			if (name != t)
			{
				sCacheNames[i] = t;
				continue;
			}
			
			t = context.translate(ROOT, "NationName", name);
			if (name != t)
			{
				sCacheNames[i] = t;
				continue;
			}
			
			sCacheNames[i] = name;
		}
	}

	function refreshAsColor(context, car_code)
	{
		sElemList = nil;
		sCarGarage = main::menu::MCarGarage(car_code);
		ScrollBox::ListBox.setItemCount(0);
		ScrollBox::ListBox.setItemCount(sCarGarage.getColorNum());
	}

	function init(context)
	{
		hidden::GenItem::chip0.visible = false;
		ListBox.setItemTemplate(context, hidden::GenItem);
		ListBox.visible_callback = visible_callback;
		ListBox.update_callback = update_callback;
		ListBox.focus_callback = focus_callback;
		ListBox.magnify_ratio = 1.0;
		ListBox.repeat = false;
		ListBox.alignment = 0.5;
		ListBox.step_min = 1;
		ListBox.step_max = 1;
	}

	function focus_callback(context, new_index, old_index)
	{
	}

	function setup_widget(context, i, w)
	{
		if (sElemList == nil)
			return;

		var elem = nil;
		w.label.text = sCacheNames[i];
		w.chip0.visible = false;
	}

	function setup_widget_color(context, i, w)
	{
		if (sCarGarage == nil)
			return;

		w.label.text = sCarGarage.getColorName(i);
		w.chip0.visible = true;
		w.chip.setData(sCarGarage, i);
	}

	function visible_callback(context, index)
	{
		for (var i = 0; i < index.size; i++)
		{
			var visible = ListBox.getItemVisible(index[i]);
			if (visible)
			{
				var w = ListBox.getItemWidget(index[i], context);
				if (sSelectingColor)
					setup_widget_color(context, index[i], w);
				else
					setup_widget(context, index[i], w);

				ListBox.setItemUpdate(index[i], 3);
			}
		}
	}

	function update_callback(context, index)
	{
	}

	function onActivate(context)
	{
		main::sound.play("ok");
		close(context);
		sLastIndex = ListBox.focus_index;
		doNext(context, ListBox.focus_index);
		return EVENTRESULT_FILTER;
	}

	function doNext(context, index, noactivate)
	{
		if (sSelectingCar)
		{
			var current_node = sElemList[index];
			var val = current_node.value;
			if (val.beginWith("#"))
				val = main::menu::MCarData::GetCarLabelByArray([0, val.substr(1).toInt()]);

			var car_code = val;
			if (sSelectingCar)
			{
				var gcar = main::menu::MCarGarage(car_code, 0);
				set_car(context, gcar);
			}

			if (main::menu::MCarGarage(car_code).getColorNum() >= 2)
				pushColorPane(context, car_code);
			else
				flushGenPane(context);
		}
		else if (sSelectingColor)
		{
			set_color(context, index);
			sLastIndex = nil;
			flushGenPane(context);
		}
		else
		{
			var current_node = sElemList[index];
			if (current_node.isInstanceOf(main::menu::MDomNode) && current_node.hasAttribute("embedded"))
				pushGenPane(context, current_node.getAttribute("name"), sCacheNames[index], noactivate);
			else
				pushGenPane(context, current_node, sCacheNames[index], noactivate);
		}
	}

	function onKeyPress(context, event)
	{
		return event.keysym == PS2_PAD_CTRL_L2 ? EVENTRESULT_FILTER : EVENTRESULT_CONTINUE;
	}
}