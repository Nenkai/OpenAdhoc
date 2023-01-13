













static default_library_playlist = [];
static default_race_playlist = [];
static default_slide_playlist = [];

function make_range(start, end)
{
    var list = [];
    for (var i = start; i < end; i++)
    {
        list.push(i);
    }

    return i;
}

function make_range_not_repeat(list, start, end)
{
    var map = [];
    for (var i = start; i < end; i++)
        map.push(0);

    for (var i = 0; i < list.size; i++)
    {
        var n = list[i];
        map[n - start] = 1;
    }

    for (var i = start; i < end; i++)
    {
        var n = i - start;
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
    init_baseplaylist();
    init_raceplaylist();
    init_slideplaylist();
}

function init_baseplaylist()
{
    var slide_list = [
        8,
        10,
        12,
        9,
        6, 
        5,
        2, 
        11,
        0, 
        3, 
        1, 
        4, 
        7, 
        14,
        13,
    ];

    var race_list = [];

    var RACE_END = main::game.getAllMusicList().size;
    var region = main::menu::MSystem::GetMusicRegionCode();

    switch (region)
    {
        case "us":
            race_list = [
                64,
                36,
                47,
                23,
                26,
                34,
                20,
                45,
                25,
                38,
                24,
                42,
                46,
                19,
                41,
                63,
            ];
            break;

        case "uk":
            race_list = [
                96, 
                62, 
                73, 
                49, 
                36, 
                52, 
                39, 
                60, 
                46, 
                71, 
                51, 
                64, 
                50, 
                68, 
                72, 
                45, 
                25, 
                19, 
                23, 
                21, 
                67, 
                89, 
            ];
            break;

        case "cn":
        case "kr":
            race_list = [
                15,
                16,
                17,
                18,
                19,
                20,
                21,
                71,
                43,
                54,
                30,
                33,
                41,
                27,
                52,
                32,
                45,
                31,
                49,
                53,
                26,
                48,
                70,
            ];
            break;

        case "jp":
        case "tw":
            race_list = [
                15,
                16,
                17,
                18,
                19,
                20,
                21,
                99,
                69,
                80,
                56,
                43,
                59,
                46,
                67,
                53,
                78,
                58,
                71,
                57,
                75,
                79,
                52,
                32,
                26,
                30,
                28,
                74,
                96,
            ];
            break;
    }

    if (race_list.size)
    {
        race_list = make_range_not_repeat(race_list, 15, RACE_END);
        for (var i = 0; i < race_list.size; i++)
            default_library_playlist.push(race_list[i]);

        slide_list = make_range_not_repeat(slide_list, 0, 14 + 1);
        for (var i = 0; i < slide_list.size; i++)
            default_library_playlist.push(slide_list[i]); 
    }
    else
    {
        default_library_playlist = make_range_not_repeat(default_library_playlist, 0, RACE_END);
    }
}

function init_raceplaylist()
{
    var shuffle = false;
    var playlist = main::game.option.bgm_playlist;
    var region = main::menu::MSystem::GetMusicRegionCode();

    var list;
    switch (region)
    {
        case "us":
            list = [
                15,
                16,
                47,
                17,
                18,
                19,
                30,
                20,
                21,
                22,
                23,
                24,
                25,
                26,
                27,
                28,
                29,
                31,
                32,
                33,
                35,
                34,
                63,
                36,
                37,
                38,
                39,
                40,
                41,
                42,
                43,
                44,
                45,
                46,
                48,
                49,
            ];
            break;

        case "uk":
            list = [
                32,
                31,
                37,
                18,
                19,
                29,
                90,
                20,
                34,
                16,
                40,
                38,
                28,
                35,
                33,
                27,
                91,
                26,
                21,
                92,
                30,
                15,
                22,
                93,
                39,
                94,
                36,
                25,
                95,
                17,
                23,
                24,
                
            ];
            break;

        case "cn":
        case "kr":
            list = [
                18,
                19,
                15,
                16,
                17,
                20,
                21,
                43,
                47,
                53,
                48,
                29,
                51,
                58,
                59,
                60,
                57,
                66,
                67,
                68,                
            ];
            break;

        case "jp":
        case "tw":
            list = [
                18,
                19,
                15,
                16,
                17,
                20,
                21,
                69,
                73,
                43,
                79,
                74,
                36,
                55,
                77,
                84,
                85,
                86,
                83,
                92,
                93,
                94,
                
            ];
            break;

        default:
            var RACE_END = main::game.getAllMusicList().size;
            list = [];
            list = make_range_not_repeat(list, 0, RACE_END);
            shuffle = true;
            break;
    }

    playlist.shuffle = shuffle;
    default_race_playlist = list;
    apply(playlist, default_race_playlist);

    if (shuffle)
        playlist.initShuffle();
}

function init_slideplaylist()
{
    var playlist = main::game.option.slide_playlist;
    var list;
    switch (main::menu::MSystem::GetMusicRegionCode())
    {
        case "jp":
        case "us":
        case "uk":
        case "tw":
        case "kr":
        case "cn":
            list = [
                8,
                10,
                12,
                9,
                6,
                5,
                2,
                11,
                0,
                3,
                1,
                4,
                7,
                14,
                13,
            ];

            default_slide_playlist = make_range_not_repeat(list, 0, 14 + 1);
            apply(playlist, default_slide_playlist);
            break;

        default:
            playlist.initShuffle();
            break;
    }
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