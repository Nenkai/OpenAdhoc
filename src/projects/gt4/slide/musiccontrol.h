static music_player_id_list = [];
static music_player_index_list = [];
static music_player_infinity_loop = 1;
static music_player_step = -1;
static music_player_play = 0;
static music_player_stop = 0;
static music_player_index = -1;
static music_player_code = "racing";
static music_player_volume = 1.0;

function do_shuffle(list)
{
	var rnd = main::menu::MRandom();
	var lsize = list.size;
	var i = 0;

	while (i < lsize)
	{
		var r = rnd.getValue(0, i + 1);

		if (r >= lsize)
		{
			continue;
		}

		list.move(i, r);
		i++;
	}
}


function init_music_player()
{
}

function music_player_set_volume(volume)
{
	var ret = music_player_volume;
	music_player_volume = volume;
	return ret;
}

function music_player_set_infinity_loop(loop)
{
	music_player_infinity_loop = loop;
}

function music_player_entry_list(id_list, index_list, shuffle)
{
	music_player_id_list = [];
	var i = 0;
	while (i < id_list.size)
	{
		music_player_id_list.push(id_list[i]);
		i++;
	}

	music_player_index_list = [];
	i = 0;
	while (i < index_list.size)
	{
		music_player_index_list.push(index_list[i]);
		i++;
	}

	if (shuffle)
		do_shuffle(music_player_id_list);
}


function music_player_do_play()
{
	if (music_player_id_list.size && music_player_index_list.size)
	{
		music_player_index = -1;
		music_player_step = 0;
		music_player_stop = 0;
		music_player_play = 1;
	}
}

function music_player_do_stop()
{
	main::sound.stopStream();
	music_player_play = 0;
	music_player_stop = 1;
	music_player_index = -1;
}

function music_player_do_pause()
{
	main::sound.pauseStream(1);
}


function music_player_do_resume()
{
	main::sound.pauseStream(0);
}

function music_player_tick(context)
{
	if (music_player_stop)
	{
		music_player_stop = 0;
		return 3;
	}

	if (music_player_play)
	{

		var p = main::sound.isPlayingStream();
		switch(music_player_step)
		{
			case -1:
			{
				if (p == 0)
				{
					music_player_step++;
				}
				break;
			}
			case 0:
			{
				music_player_index++;
				if (music_player_index >= music_player_id_list.size)
				{
					if (music_player_infinity_loop)
					{
						music_player_index = 0;
					}
					else
					{
						music_player_do_stop();
					}
					break;
				}
			
				var next = music_player_id_list[music_player_index];
				main::sound.startStreamEx("pcm", music_player_code, next, 0, music_player_volume);
				music_player_step++;
				break;
			}
			case 1:
			{
				if (p == 1)
				{
					music_player_step++;
					return 1;
				}
				break;
			}
			case 2:
			{
				if (p == 0)
				{
					music_player_step = -1;
				}
				return 2;
			}
			break;
		}
	}
	return 0;

}


function music_player_get_now_id()
{
	if (music_player_index < 0)
		return -1;

	return music_player_id_list[music_player_index];
}

function music_player_get_now_index()
{
	if (music_player_index < 0)
		return -1;

	return music_player_index_list[music_player_index];
}

static base_music_list = nil;

function init_base_music_list()
{
	if (base_music_list != nil)
		return;

	base_music_list = [];

	var alllist = main::game.getAllMusicList();
	var i = 0;
	while (i < alllist.size)
	{
		var l = alllist[i];
		var music = [l[0], l[1], l[2], l[3]];
		base_music_list.push(music);
		i++;
	}
}

function get_base_music_list_information(id)
{
	if (id >= base_music_list.size || id < 0)
		return [];

	return base_music_list[id];
}

function make_music_map()
{
	var list = [];
	var i = 0;

	while (i < base_music_list.size)
	{
		list.push(0);
		i++;
	}

	return list;
}

function append_music_list(list, map, index)
{
	if (map[index])
		return;

	var m = base_music_list[index];
	var music = [m[0], m[1], m[2], m[3]];
	list.push(music);
	map[index] = 1;
}

function remove_music_list(list, map, index)
{
	var id = list[index][3];
	list.erase(index);
	map[id] = 0;
}

function dump_music_list(list)
{
	var i = 0;
	while (i < list.size)
	{
		var music = list[i];
		var id = music[3];
		var title = music[0] + " / " + music[1];
		print("<%02d> [%s]".format(id, title));
		i++;
	}
}

function sortfunc_playlist_playno(a, b)
{
	return a[3] < b[3];
}

function sortfunc_playlist_dispno(a, b)
{
	return a[0] < b[0];
}


function get_shuffle_bgm_playlist()
{
	return main::game.option.bgm_playlist.shuffle;
}

function set_shuffle_bgm_playlist(shuffle)
{
	main::game.option.bgm_playlist.shuffle = shuffle;
}

function get_shuffle_slide_playlist()
{
	return main::game.option.slide_playlist.shuffle;
}

function set_shuffle_slide_playlist(shuffle)
{
	main::game.option.slide_playlist.shuffle = shuffle;
}

function load_bgm_playlist(list, map)
{
	load_playlist(main::game.option.bgm_playlist, list, map);
}

function load_slide_playlist(list, map)
{
	load_playlist(main::game.option.slide_playlist, list, map);
}

function apply_bgm_playlist(list, shuffle)
{
	apply_playlist(main::game.option.bgm_playlist, list, shuffle);
}

function apply_slide_playlist(list, shuffle)
{
	apply_playlist(main::game.option.slide_playlist, list, shuffle);
}

function load_playlist(playlist, musiclist, musicmap)
{
	var playdata = playlist.play_data;
	var list = [];
	var i = 0;

	while (i < playdata.size)
	{
		var pl = playdata[i];
		if (pl[2])
		{
			var n = [pl[0], pl[1], pl[2], pl[3], i];
			list.push(n);
		}
		i++;
	}

	list.sort(sortfunc_playlist_dispno);

	i = 0;
	while (i < list.size)
	{
		append_music_list(musiclist, musicmap, list[i][4]);
		i++;
	}
}

function apply_playlist(playlist, musiclist, shuffle)
{
	var newplaydata = [];
	var playdatasize = playlist.play_data.size;

	if (playdatasize < musiclist.size)
		playdatasize = musiclist.size;

	var i = 0;
	while (i < playdatasize)
	{
		var n = [-1, 0, 0, -1];
		newplaydata.push(n);
		i++;
	}

	var playno_list = [];
	i = 0;
	while (i < musiclist.size)
	{
		playno_list.push(i);
		i++;
	}

	if (shuffle)
	{
		do_shuffle(playno_list);
	}

	i = 0;
	while (i < musiclist.size)
	{
		var id = musiclist[i][3];
		var pl = newplaydata[id];

		pl[2] = 1;  // marked
		pl[3] = playno_list[i];  // play number
		pl[0] = i;  // display number

		i++;
	}

	i = 0;
	while (i < playdatasize)
	{
		var pl = newplaydata[i];

		var played = pl[1];
		var marked = pl[2];
		var playno = pl[3];
		var dispno = pl[0];

		//print("<%03d>marked:%d dispno:%d playno:%d name:%s".format(i, marked, dispno, playno, base_music_list[i][0]));
		i++;
	}

	playlist.play_data = newplaydata;
}