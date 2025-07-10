
# OpenAdhoc
OpenAdhoc is an open-source re-implementation of Gran Turismo Scripts based on the proprietary Adhoc scripting language to allow logic-based modding as seen on the [GT6 Spec II Mod](https://www.gtplanet.net/forum/threads/beta6-gt6-spec-ii-mod.399796/) and [GT4 Randomizer/Spec II](https://twitter.com/TheAdmiester/status/1658179881186779144). 

This repository contains compilable game scripts re-created from originally compiled scripts. The goal is to allow source-code level editing for GT4, GT5, GT6 (and potentially others). Scripts operate nearly as the whole of game logic, while the executable mostly serves as the engine and exposes libraries to the script interface.

> [!NOTE]  
**This code is licensed under GPL-v3. You are required to disclose source/changes including for mods.**
>
> GT6 Spec II & GT5 Master Mod are included in separate branches.

## Games & Progress

<details>
  <summary>GT6 (1.22)</summary>
  26 of 49 projects are completed and can be compiled
  
|          Name          | Completed |                                     Purpose                                      | 
|------------------------|-----------|----------------------------------------------------------------------------------|
| main                   |    ✔️    | Initial Bootstrap & Utils before `boot`                                          |
| arcade                 |    ✔️    | Arcade Mode                                                                      |
| boot                   |    ✔️    | Boot Process handling (Game Start to main project i.e `gtmode` or `dev_runviewer`|
| config                 |    ✔️    | Game Save Nodes Creation                                                         |
| community              |    ✔️    | Community/Online Features Menu (Clubs, TimeLine, Bbs, etc)                       |
| cursor                 |    ✔️    | Cursor handling & Top Menu                                                       |
| datalogger             |    ❌    | Car Data Logger Menu                                                             |
| dev_design_work        |    ✔️    | UI Showcasing (1.00)                                                             |
| dev_runviewer          |    ✔️    | Developer Tools                                                                  |
| dev_sound              |    ✔️    | Sound Engineering Develop Tools                                                  |
| dev_test_sequence      |    ❌    | Unknown Dev Tools                                                                |
| develop                |    ✔️    | Cheat/QA Menu for `gtmode`                                                       |
| dialog                 |    ❌    | UI Components for Dialogs                                                        |
| event_setting          |    ❌    | Settings Menu for Editing Lobby Options                                          |
| garage                 |    ✔️    | Garage Manager                                                                   |
| gps_replay             |    ❌    | GPS Replay                                                                       |
| gtmode                 |    ✔️    | GT Mode. Everything before loading into an event/race.                           |
| gtauto                 |    ✔️    | GT Auto                                                                          |
| gttv                   |    ❌    | Stub Leftover from GT5                                                           |
| leavedemo              |    ✔️    | Idle demonstration project                                                       |
| manual                 |    ✔️    | Manual Menu & Credits                                                            |
| multimonitor           |    ✔️    | Multimonitor Handler Project                                                     |
| option                 |    ✔️    | Game Settings Menu                                                               |
| photo                  |    ✔️    | Photo Mode Handler                                                               |
| play_movie             |    ✔️    | Intro Movie Player Project                                                       |
| race                   |    ✔️    | Main Race Project & Base                                                         |
| race_arcade_style      |    ❌    | Sierra Time Rally game mode plugin                                               |
| race_course_edit       |    ❌    | Custom Track Test & Uploader game mode plugin                                    |
| race_drag              |    ❌    | Left-over Drag game mode plugin                                                  |
| race_drift             |    ❌    | Drift game mode plugin                                                           |
| race_freerun           |    ✔️    | Free-Run game mode plugin                                                        |
| race_license           |    ✔️    | License game mode plugin                                                         |
| race_mission           |    ✔️    | Mission game mode plugin                                                         |
| race_online_drift      |    ❌    | Seasonal Drift Event game mode plugin                                            |
| race_online_event      |    ❌    | Online Quickmatch Event game mode plugin                                         |
| race_online_room       |    ✔️    | Online Lobby game mode plugin                                                    |
| race_online_single     |    ❌    | Seasonal Event game mode plugin                                                  |
| race_online_timeattack |    ❌    | Seasonal Time Trial game mode plugin                                             |
| race_single            |    ❌    | Event game mode plugin                                                           |
| race_split             |    ❌    | Split-Screen game mode plugin                                                    |
| race_tutorial          |    ❌    | Tutorial game mode plugin                                                        |
| race_timeattack        |    ✔️    | Time Trial game mode plugin                                                      |
| ranking                |    ❌    | Rankings/Leaderboard Handler Project                                             |
| setting                |    ❌    | Car Parameters/Tuning Menu                                                       |
| ui_kit                 |    ✔️    | Generic UI Components Project                                                    |
| ui_kit_sub             |    ❌    | Unknown                                                                          |
| vision_gt              |    ❌    | Vision GT Menu                                                                   |
</details>

<details>
  <summary>GT5 (2.11)</summary>
  
  
|          Name          | Completed |                                     Purpose                                      | 
|------------------------|-----------|----------------------------------------------------------------------------------|
| main                   |    ✔️    | Initial Bootstrap & Utils before `boot`                                          |
| arcade                 |    ✔️    | Arcade Mode                                                                      |
| academy                |    ❌    | N/A                                                                              |
| boot                   |    ✔️    | Boot Project (logic is in bootstrap scripts)                                     |
| concept                |    ❌    | N/A                                                                              |
| config                 |    ❌    | N/A                                                                              |
| cursor                 |    ❌    | N/A                                                                              |
| demo_movie             |    ❌    | N/A                                                                              |
| dialog                 |    ❌    | N/A                                                                              |
| gps_replay             |    ❌    | N/A                                                                              |
| gtauto                 |    ❌    | N/A                                                                              |
| gtmode                 |    ❌    | N/A                                                                              |
| gttop                  |    ✔️    | Main Menu                                                                        |
| gttv                   |    ❌    | N/A                                                                              |
| gttv2                  |    ❌    | N/A                                                                              |
| leavedemo              |    ❌    | N/A                                                                              |
| manual                 |    ❌    | N/A                                                                              |
| multimonitor           |    ❌    | N/A                                                                              |
| museum                 |    ❌    | N/A                                                                              |
| news                   |    ❌    | N/A                                                                              |
| online                 |    ❌    | N/A                                                                              |
| online_bspec           |    ❌    | N/A                                                                              |
| option                 |    ❌    | N/A                                                                              |
| photo                  |    ❌    | N/A                                                                              |
| play_movie             |    ❌    | N/A                                                                              |
| race                   |    ❌    | N/A                                                                              |
| race_*                 |    ❌    | N/A                                                                              |
| ranking                |    ❌    | N/A                                                                              |
| rcvtst                 |    ❌    | N/A                                                                              |
| setting                |    ❌    | N/A                                                                              |
| ui_kit                 |    ❌    | N/A                                                                              |
| user_profile           |    ❌    | N/A                                                                              |
| user_profile_driver    |    ❌    | N/A                                                                              |

</details>

<details>
  <summary>GT4 Online (US)</summary>

|          Name          | Completed |                                     Purpose                                      | 
|------------------------|-----------|----------------------------------------------------------------------------------|
| arcade                 |    ❌️    | Arcade mode and all of its sub-menus                                             |
| boot                   |    ✔️    | Bootup, new game setup, initial intro movie                                      |
| cursor                 |    ✔️    | Sets up cursor and dialog boxes                                                  |
| demo_movie             |    ✔️    | Intro when idle at main menu, and any movie that plays after completing event    |
| event                  |    ❌️    | LAN mode                                                                         |
| eyetoy                 |    ❌️    | Handles unlocking Nike Car when scanning GT Shirt with the Eyetoy accessory      |
| gtmode                 |    ✔️    | Gran Turismo Mode and all of its sub-menus                                       |
| labomode               |    ❌️    | Photo lab, Replay Theater, Load & Save Replay, Delete Replay/Film/Photo          |
| language               |    ❌️    | Language selection screen at bootup                                              |
| list_box               |    ❌️    |                                                                                  |
| logger                 |    ❌️    | Replay Analyzer menu, accessed from various Pre-Race menus                       |
| memcard                |    ❌️    | Save data                                                                        |
| message                |    ❌️    | Online mode message menu                                                         |
| network                |    ❌️    | Network Connection setup mode                                                    |
| online                 |    ❌️    | Online mode                                                                      |
| option                 |    ✔️    | Game Options                                                                     |
| option2                |    ❌️    | GT4P leftover                                                                    |
| option3                |    ❌️    | GT4P leftover                                                                    |
| photo_save             |    ❌️    | Photo preview and save for Photo Drive                                           |
| photo_shoot            |    ❌️    | Photo mode camera menu, photo preview and save for Photo Travel                  |
| print                  |    ❌️    | Print menu, accessed from Photo Lab                                              |
| quick                  |    ❌️    | GT4P leftover                                                                    |
| quick-arcade           |    ✔️    | Arcade mode Single Race Pre-Race menu                                            |
| quick-championship     |    ❌️    | GT Mode Championship Pre-Race menu                                               |
| quick-event            |    ❌️    | GT Mode Single Race, Practice, and Family Cup Pre-Race menu                      |
| quick-freerun          |    ❌️    | GT Mode Photo Drive Pre-Race menu                                                |
| quick-license          |    ❌️    | GT Mode License test Pre-Race menu                                               |
| quick-mission          |    ❌️    | GT Mode Mission Pre-Race menu                                                    |
| quick-mt               |    ❌️    | GT Mode Power & Speed Pre-Race menu                                              |
| quick-online           |    ❌️    | Online Mode Pre-Race menu                                                        |
| quick-practice         |    ❌️    | GT Mode Track Meet Pre-Race menu                                                 |
| quick-tt               |    ❌️    | Arcade Mode Time Trial Pre-Race menu                                             |
| ranking                |    ❌️    | Rankings menu, accessed from various Pre-Race menus                              |
| setting                |    ❌️    | Car Setting menu and all of its sub-menus (Change parts and tuning sliders)      |
| slide                  |    ❌️    | Slideshow mode                                                                   |

</details>

<details>
  <summary>GT PSP (gt5m)</summary>
  All projects and scripts fully reversed by pez2k. Adhoc code is identical for all regions and revisions.
</details>

<details>
  <summary>Tourist Trophy</summary>
  Nothing at the moment.
</details>

<details>
  <summary>GT Sport (gt7sp)</summary>
  Only the boot project (1.00) reversed.
</details>

<details>
  <summary>GT7</summary>
  Out of scope. GT7 no longer uses Adhoc language and instead uses Swift (custom parser & compiler) which is then compiled to adhoc bytecode.
</details>

> [!NOTE]
> Original bugs are left as is. You can find a few of them with the `BUG` comments.

## ⚙️ Compilation

The [Adhoc toolchain](https://github.com/Nenkai/GTAdhocToolchain) is required to compile game scripts. It is also recommended to install the VS Code Extension. Binaries/Artifacts can be acquired from the Actions tab.

> [!TIP]  
It is also recommended to add the path to the toolchain (i.e `adhoc.exe`) to your **PATH**.

Compilation process
* `adhoc build -i <.ad source file or .yaml project file>`

or 
* "Run Build Task (CTRL+SHIFT+B)" with the VS Code Adhoc Extension on any source file or project file.

For more details refer to the [Adhoc Page](https://nenkai.github.io/gt-modding-hub/concepts/adhoc/adhoc/) on the Modding Hub.

## 🔧Contributing & Notes

The Adhoc toolchain allows dissasembling scripts into an assembly-like text form. Most scripts contain symbols which are mandatory and thus allows reconstructing code back into source. Sometimes syntax had to be made up for certain specific features, the documentation is the code.

### Things that are okay to discard
* Following line numbers - While the custom toolchain does not currently support defines/macros, it is something that was used therefore can leave holes into the code, same goes for missing comments. It is therefore prefered not to follow line numbers for better readability.
* Logic order - It is common that scripts were written using such pattern: `nil != myObject` or `"Dog" == myString`. For readability, literals should always be on the right-hand side such as `myObject != nil`.

### Things that should be preserved, or recommended to have
* All code of any kind should be present in the scripts.
* Comments are not needed but appreciated.

## 📖 History
* August 2020 - Initial breakthrough in Adhoc, dissasembler built based on reverse-engineering
* September 2020 - [Master Mod release for GT5](https://www.gtplanet.net/forum/threads/1-8-0-gt5-master-mod.395844/) with hex-edited script code edits
* July 2021 - [GT6 Spec II Mod release for GT6](https://www.gtplanet.net/forum/threads/beta6-gt6-spec-ii-mod.399796/)
* December 2021 - Breakthrough. GT Sport Closed Beta build dump, contained a few scripts in source and compiled formats which allowed to figure most of the syntax to be similar to Javascript and Python. Stack understanding later came thanks to a random thought by ddm999 and the first custom "hello world" script compilation within the GT6 Web Server successfully ran to completion.
* January 2022 - First fully recompiled project (`boot`).
* February 2022 <-> December 2022 - Dozens of projects successfully recreated.
* December 2022 - Source release.

## Licensing
This project uses the GNU GENERAL PUBLIC LICENSE.

This project is not affiliated with "Polyphony Digital Inc." , "Gran Turismo", "GT", or any other projects by the aforementioned entities.
