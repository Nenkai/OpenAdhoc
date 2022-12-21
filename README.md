
# OpenSpec
This is an open-source re-implementation of Gran Turismo Scripts based on the proprietary Adhoc scripting language to allow logic-based modding as seen on the [GT6 Spec II Mod](https://www.gtplanet.net/forum/threads/beta6-gt6-spec-ii-mod.399796/). 

This repository contains compilable game scripts re-created from originally compiled scripts. The goal is to allow source-code level editing for GT4, GT5, GT6 (and potentially others).

* Unaltered code is located on the `master` branch
* Code for the GT6 Spec II Mod is located on the `spec` branch.

## Games & Progress

### GT6 Completion Progress
**Most of the main projects are completed (`gtmode`, `race`, `main`, etc) and most of the game logic can already be altered.**

<details>
  <summary>Table (26 of 49 projects are completed and can be compiled)</summary>
  
  
|          Name          | Completed |                                     Purpose                                      | 
|------------------------|-----------|----------------------------------------------------------------------------------|
| main                   |    Yes    | Initial Bootstrap & Utils before `boot`                                          |
| arcade                 |    Yes    | Arcade Mode                                                                      |
| boot                   |    Yes    | Boot Process handling (Game Start to main project i.e `gtmode` or `dev_runviewer`|
| config                 |    Yes    | Game Save Nodes Creation                                                         |
| community              |    Yes    | Community/Online Features Menu (Clubs, TimeLine, Bbs, etc)                       |
| cursor                 |    Yes    | Cursor handling & Top Menu                                                       |
| datalogger             |    No     | Car Data Logger Menu                                                             |
| dev_design_work        |    Yes    | UI Showcasing (1.00)                                                             |
| dev_runviewer          |    Yes    | Developer Tools                                                                  |
| dev_sound              |    Yes    | Sound Engineering Develop Tools                                                  |
| dev_test_sequence      |    No     | Unknown Dev Tools                                                                |
| develop                |    Yes    | Cheat/QA Menu for `gtmode`                                                       |
| dialog                 |    No     | UI Components for Dialogs                                                        |
| event_setting          |    No     | Settings Menu for Editing Lobby Options                                          |
| garage                 |    Yes    | Garage Manager                                                                   |
| gps_replay             |    No     | GPS Replay                                                                       |
| gtmode                 |    Yes    | GT Mode. Everything before loading into an event/race.                           |
| gtauto                 |    Yes    | GT Auto                                                                          |
| gttv                   |    No     | Stub Leftover from GT5                                                           |
| leavedemo              |    Yes    | Idle demonstration project                                                       |
| manual                 |    Yes    | Manual Menu & Credits                                                            |
| multimonitor           |    Yes    | Multimonitor Handler Project                                                     |
| option                 |    Yes    | Game Settings Menu                                                               |
| photo                  |    Yes    | Photo Mode Handler                                                               |
| play_movie             |    Yes    | Intro Movie Player Project                                                       |
| race                   |    Yes    | Main Race Project & Base                                                         |
| race_arcade_style      |    No     | Sierra Time Rally game mode plugin                                               |
| race_course_edit       |    No     | Custom Track Test & Uploader game mode plugin                                    |
| race_drag              |    No     | Left-over Drag game mode plugin                                                  |
| race_drift             |    No     | Drift game mode plugin                                                           |
| race_freerun           |    Yes    | Free-Run game mode plugin                                                        |
| race_license           |    Yes    | License game mode plugin                                                         |
| race_mission           |    Yes    | Mission game mode plugin                                                         |
| race_online_drift      |    No     | Seasonal Drift Event game mode plugin                                            |
| race_online_event      |    No     | Online Quickmatch Event game mode plugin                                         |
| race_online_room       |    Yes    | Online Lobby game mode plugin                                                    |
| race_online_single     |    No     | Seasonal Event game mode plugin                                                  |
| race_online_timeattack |    No     | Seasonal Time Trial game mode plugin                                             |
| race_single            |    No     | Event game mode plugin                                                           |
| race_split             |    No     | Split-Screen game mode plugin                                                    |
| race_tutorial          |    No     | Tutorial game mode plugin                                                        |
| race_timeattack        |    Yes    | Time Trial game mode plugin                                                      |
| ranking                |    No     | Rankings/Leaderboard Handler Project                                             |
| setting                |    No     | Car Parameters/Tuning Menu                                                       |
| ui_kit                 |    Yes    | Generic UI Components Project                                                    |
| ui_kit_sub             |    No     | Unknown                                                                          |
| vision_gt              |    No     | Vision GT Menu                                                                   |
</details>

### GT5 Completion Progress
Only `arcade` is currently available.

### GT4
Nothing at the moment.

## Compilation

The [Adhoc toolchain](https://github.com/Nenkai/GTAdhocToolchain) is required to compile game scripts. It is also recommended to install the VS Code Extension. Binaries/Artifacts can be acquired from the Actions tab.

It is also recommended to add the path to the toolchain (i.e `adhoc.exe`) to your **PATH**.

Compilation process
* `adhoc build -i <.ad source file or .xaml project file>`

or 
* "Run Build Task (CTRL+SHIFT+B)" with the VS Code Adhoc Extension on any source file or project file.

## Contributing & Notes

The Adhoc toolchain allows dissasembling scripts into an assembly-like text form. Most scripts contain symbols which are mandatory and thus allows reconstructing code back into source. Sometimes syntax had to be made up for certain specific features, the documentation is the code.

### Things that are okay to discard
* Following line numbers - While the custom toolchain does not currently support defines/macros, it is something that was used therefore can leave holes into the code, same goes for missing comments. It is therefore prefered not to follow line numbers for better readability.
* Logic order - It is common that scripts were written using such pattern: `nil != myObject` or `"Dog" == myString`. For readability, literals and other variables should always appear on the left-hand side as such: `myObject != nil`.

### Things that should be preserved, or recommended to have
* All code of any kind should be present in the scripts.
* Comments are not needed but appreciated.

## History
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
