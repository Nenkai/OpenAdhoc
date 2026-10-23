//---------------------------------------------------------------------------------------
// SPDX-FileCopyrightText: Copyright (C) 2026 Nenkai, OpenAdhoc Contributors
// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileAttributionText: https://github.com/Nenkai/OpenAdhoc
// SPDX-FileNotice: AI usage and consumption is prohibited. See AGENTS.md for policy.
//---------------------------------------------------------------------------------------

static default_library_playlist = [];
static default_race_playlist = [];
static default_slide_playlist = [];
static default_present_playlist = [];


function make_range(start, end)
{
    var list = [];
    for (var i = start; i < end; i++)
    {
        list.push(i);
    }

    return list;
}

function make_range_not_repeat(list, start, end)
{
    var map = [];
    for (var i = start; i < end; i++)
    {
        map.push(0);
    }

    for (var i = 0; i < list.size; i++)
    {
        var n = list[i];
        map[n - start] = 1;
    }

    
    for (var i = start; i < end; i++)
    {
        var n = (i - start);

        if (map[n] == 0)
        {
            list.push(i);
            map[n] = 1;
        }
    }

    return list;
}

function init_bgmplaylist()
{
    init_presentplaylist();
    init_baseplaylist();
    init_raceplaylist();
    init_slideplaylist();
}

function init_presentplaylist()
{
    var region = main::menu::MSystem::GetMusicRegionCode();
    switch(region)
    {
		case "jp":
		case "tw":
		case "uk":
		case "cn":
		case "kr":
		case "us":
			default_present_playlist = [13];
			break;
    }
}


function init_baseplaylist()
{
    var slide_list = [0, 1, 2, 3, 4, 5];
    var race_list = [];

    var RACE_END = main::game.getAllMusicList().size;

    var region = main::menu::MSystem::GetMusicRegionCode();
    switch(region)
	{
		case "ev":
			race_list = make_range_not_repeat(race_list, 0, RACE_END);
			slide_list = [];
			slide_list = make_range_not_repeat(slide_list, 0, RACE_END);
			break;
			
		case "jp":
		case "tw":
		case "cn":
		case "kr":
			race_list = [6, 7, 8, 9, 10, 11, 12];
			break;
			
		case "uk":
			race_list = [14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,6, 7, 8, 9, 10, 11, 12];
			break;
			
		case "us":
			race_list = [6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20];
			break;
	}

    if (race_list.size)
    {
        var i = 0;
        while (i < race_list.size)
        {
            default_library_playlist.push(race_list[i]);
            i++;
        }

        i = 0;
        while (i < slide_list.size)
        {
            default_library_playlist.push(slide_list[i]);
            i++;
        }
    }
    else
    {
        default_library_playlist = make_range_not_repeat(default_library_playlist, 0, RACE_END);
    }
}


function init_raceplaylist()
{
    var shuffle = 0;
    var list = [];

    var playlist = main::game.option.bgm_playlist;

    var region = main::menu::MSystem::GetMusicRegionCode();
    switch(region)
	{
		case "ev":
			list = make_range_not_repeat(race_list, 0, main::game.getAllMusicList().size);
			break;
			
		case "jp":
		case "tw":
		case "cn":
		case "kr":
			list = [6, 7, 8, 9, 10, 11, 12];
			break;
			
		case "uk":
			list = [14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 6, 7, 8, 9, 10, 11, 12];
			break;
			
		case "us":
			list = [6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20];
			break;
	}

    if (!list.size)
    {
        list = make_range_not_repeat(list, 6, main::game.getAllMusicList().size);
    }

    playlist.shuffle = shuffle;

    default_race_playlist = list;

    apply(playlist, default_race_playlist);

    if (shuffle)
    {
        playlist.initShuffle();
    }
}

function init_slideplaylist()
{
    var playlist = main::game.option.slide_playlist;
    var list = [];

    var region = main::menu::MSystem::GetMusicRegionCode();
    switch(region)
	{
		case "jp":
		case "us":
		case "uk":
		case "tw":
		case "kr":
		case "cn":
			list = [0, 1, 2, 3, 4, 5];
			break;
		default:
			playlist.initShuffle();
			break;
	}

	if (region == "ev")
	{
		list = make_range_not_repeat(race_list, 0, main::game.getAllMusicList().size);
	}

    if (!list.size)
    {
        list = make_range_not_repeat(list, 0, (5 + 1));
    }

    default_slide_playlist = list;

    apply(playlist, default_slide_playlist);
}

function apply(playlist, list)
{
    var playdatasize = playlist.play_data.size;
    var newplaydata = Array(playdatasize);

    for (var i = 0; i < playdatasize; i++)
    {
        var d = [];
        d.push(-1);
        d.push(0);
        d.push(0);
        d.push(-1);

        newplaydata[i] = d;
    }

    var playno = 0;

    for (var i = 0; i < list.size; i++)
    {
        var n = list[i];

        if (n < playdatasize)
        {
            newplaydata[n][0] = playno;
            newplaydata[n][2] = 1;
            newplaydata[n][3] = playno;
            playno++;
        }
    }

    playlist.play_data = newplaydata;
}