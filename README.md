
# OpenAdhoc
OpenAdhoc is an open-source re-implementation of the proprietary "Adhoc" scripting language used in Gran Turismo games. OpenAdhoc allows logic-based modding as seen on the [GT6 Spec II Mod](https://www.gtplanet.net/forum/threads/beta6-gt6-spec-ii-mod.399796/) and [GT4 Randomizer/Spec II](https://twitter.com/TheAdmiester/status/1658179881186779144), among other fan projects currently in development.

This repository contains compilable game scripts re-created from originally compiled ones. This allows source-code level editing for scripts that have been successfully reverse-engineered in Adhoc-based GT games.<br>
GT4 Prologue, GT4, Tourist Trophy, GT HD, GT5 Prologue, GTPSP, GT5, GT6, GT Sport, and all games in between them are in the scope of OpenAdhoc.<br>

Scripts operate nearly as the whole of game logic, while the executable mostly serves as the engine and exposes libraries to the script interface.
The games use a system of "projects" to divide the major menu types. Each game mode is made out of a project folder containing the Adhoc logic script(s) (.adc), the UI definition script (.mproject), and assets: localization files, textures, models, and animations packaged into container files (.gpb).

> [!NOTE]  
**This code is licensed under GPL-v3. You are required to disclose source/changes including for mods.**
>
> Modified versions of OpenAdhoc for fan projects such as GT6 Spec II & GT5 Master Mod are required to be uploaded to a separate fork.

## 🎮 Games & Progress

<details>
  <summary>GT4 Prologue</summary>

### GT4 Prologue
Adhoc Version: 5<br>
GT4 Prologue scripts have PS2ZIP compression applied to them, creating a roadblock for modding purposes.<br>
Regardless, it is posslble to decompress them with [PDTools.Compression](https://github.com/Nenkai/PDTools/tree/master/PDTools.Compression) and dissassemble for reverse-engineering.<br>
There are 11 projects.<br>
No progress has been made currently.
  
|          Name          | Completed |                                     Purpose                                      | 
|------------------------|-----------|----------------------------------------------------------------------------------|
| language               |    ❌️     |                                                                                  |
| memcard                |    ❌️     |                                                                                  |
| option                 |    ❌️     |                                                                                  |
| option2                |    ❌️     |                                                                                  |
| prize                  |    ❌️     |                                                                                  |
| prologue               |    ❌️     |                                                                                  |
| prologue_arcade        |    ❌️     |                                                                                  |
| prologue_opening       |    ❌️     |                                                                                  |
| quick                  |    ❌️     |                                                                                  |
| quick-arcade           |    ❌️     |                                                                                  |
| GT4Application         |    ❌️    | Initializer and Config Script loader / re-loader                                  |

</details>

<details>
  <summary>GT4 Online (US)</summary>

### GT4 Online (US)
Adhoc Version: 7 (v5-7 compatible)<br>
15 of 30 projects are completed and can be compiled.<br>
There are 2 collections of shared scripts (share and quick-share) that multiple projects use.<br>
There are 6 leftover projects from GT4P that are not relevant to completion
  
|          Name          | Completed |                                     Purpose                                      | 
|------------------------|-----------|----------------------------------------------------------------------------------|
| arcade                 |    ✔️    | Arcade mode and all of its sub-menus                                             |
| boot                   |    ✔️    | Bootup, Language select, new game setup, initial intro movie                     |
| cursor                 |    ✔️    | Sets up cursor and dialog boxes                                                  |
| demo_movie             |    ✔️    | Intro when idle at main menu, and any movie that plays after completing event    |
| event                  |    ❌️    | LAN mode                                                                         |
| eyetoy                 |    ✔️    | Handles unlocking Nike Car when scanning GT Shirt with the Eyetoy accessory      |
| gtmode                 |    ✔️    | Gran Turismo Mode and all of its sub-menus                                       |
| labomode               |    ❌️    | Photo lab, Replay Theater, Load & Save Replay, Delete Replay/Film/Photo          |
| logger                 |    ❌️    | Replay Analyzer menu, accessed from various Pre-Race menus                       |
| message                |    ❌️    | Online mode message menu                                                         |
| network                |    ❌️    | Network Connection and Online mode login                                         |
| online                 |    ❌️    | Online mode                                                                      |
| option                 |    ✔️    | Game Options                                                                     |
| photo_save             |    ❌️    | Photo preview and save for Photo Drive                                           |
| photo_shoot            |    ❌️    | Photo mode camera menu, photo preview and save for Photo Travel                  |
| print                  |    ❌️    | Print menu, accessed from Photo Lab                                              |
| quick-arcade           |    ✔️    | Arcade mode Single Race Pre-Race menu                                            |
| quick-championship     |    ❌️    | GT Mode Championship Pre-Race menu                                               |
| quick-event            |    ❌️    | GT Mode Single Race, Practice, and Family Cup Pre-Race menu                      |
| quick-freerun          |    ❌️    | GT Mode Photo Drive Pre-Race menu                                                |
| quick-license          |    ✔️    | GT Mode License test Pre-Race menu                                               |
| quick-mission          |    ❌️    | GT Mode Mission Pre-Race menu                                                    |
| quick-mt               |    ✔️    | GT Mode Power & Speed Pre-Race menu                                              |
| quick-online           |    ✔️    | Online Mode Pre-Race menu                                                        |
| quick-practice         |    ✔️    | GT Mode Track Meet Pre-Race menu                                                 |
| quick-tt               |    ✔️    | Arcade Mode Time Trial Pre-Race menu                                             |
| ranking                |    ❌️    | Online leaderboards, accessed from Event project                                 |
| setting                |    ✔️    | Car Setting menu and all of its sub-menus (Change parts and tuning sliders)      |
| slide                  |    ❌️    | Slideshow mode                                                                   |
| GT4Application         |    ✔️    | Initializer and Config Script loader / re-loader                                 |
| --------               | ----     | ---- Stub projects: ----                                                         |
| language               |    ✔️    | Leftover from GT4P's language select. Contains more language options, appears to be a dev version |
| list_box               |    ❌️    | Leftover from GT4P's Save/Delete Replay menu. Possibly contains framework for an unused save icon customizer |
| memcard                |    ✔️    | GT4P leftover                                                                    |
| option2                |    ❌️    | GT4P leftover                                                                    |
| option3                |    ❌️    | GT4P leftover                                                                    |
| quick                  |    ❌️    | GT4P leftover                                                                    |

</details>

<details>
  <summary>Tourist Trophy</summary>

### Tourist Trophy
Adhoc Version: 7<br>
  There are 22 projects.<br>
  There are 2 collections of shared scripts (share and quick-share) that multiple projects use.<br>
  No progress has been made currently.

|          Name          | Completed |                                     Purpose                                      | 
|------------------------|-----------|----------------------------------------------------------------------------------|
| arcade                 |    ❌️    | Arcade mode and all of its sub-menus                                             |
| bestshot               |    ❌️    |                                                                                  |
| boot                   |    ❌️    | Bootup, new game setup, initial intro movie                                      |
| cursor                 |    ❌️    | Sets up cursor and dialog boxes                                                  |
| demo_movie             |    ❌️    | Intro when idle at main menu, and any movie that plays after completing event    |
| labomode               |    ❌️    | Photo lab, Replay Theater, Load & Save Replay, Delete Replay/Film/Photo          |
| option                 |    ❌️    | Game Options                                                                     |
| photo_save             |    ❌️    | Photo mode                                                                       |
| print                  |    ❌️    |                                                                                  |
| quick-arcade           |    ❌️    |                                                                                  |
| quick-challenge        |    ❌️    |                                                                                  |
| quick-championship     |    ❌️    |                                                                                  |
| quick-event            |    ❌️    |                                                                                  |
| quick-freerun          |    ❌️    |                                                                                  |
| quick-license          |    ❌️    |                                                                                  |
| quick-photo            |    ❌️    |                                                                                  |
| quick-practice         |    ❌️    |                                                                                  |
| quick-tt               |    ❌️    |                                                                                  |
| setting                |    ❌️    | Bike Setting menu and all of its sub-menus (Change parts and tuning sliders)     |
| slide                  |    ❌️    | Slideshow mode                                                                   |
| ttmode                 |    ❌️    | Tourist Trophy mode and all of its sub-menus                                     |
| GT4Application         |    ❌️    | Initializer and Config Script loader / re-loader                                 |
</details>

<details>
  <summary>GT HD</summary>

### GT HD
  Adhoc Version: 10 (v8-10 compatible)<br>
  No progress has been made currently.
</details>

<details>
  <summary>GT5 Prologue</summary>

### GT5 Prologue
  Adhoc Version: 10<br>
  No progress has been made currently.
</details>

<details>
  <summary>GT PSP (gt5m)</summary>

### GT PSP (gt5m)
  Adhoc Version: 12<br>
  All projects and scripts fully reversed by pez2k ✔️<br>
  Adhoc code is identical for all regions and revisions.
</details>

<details>
  <summary>GT5 (2.11)</summary>
  
### GT5
Adhoc Version: 12<br>
GT5 2.11 is prefered over 2.17 due to 2.12<->2.17 having no extra content, and mainly patches exploits/server use and minor other things.

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

---

</details>

<details>
  <summary>GT6 (1.22)</summary>
  
### GT6
  Adhoc Version: 12<br>
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
  <summary>GT Sport (gt7sp)</summary>

### GT Sport (gt7sp)
  Adhoc Version: 12<br>
  Only the boot project (1.00) reversed.
</details>

<details>
  <summary>GT7</summary>

### GT7

  Out of scope. GT7 no longer uses Adhoc language and instead uses Swift (custom parser & compiler) which is then compiled to adhoc bytecode.
  <br>

> [!NOTE]
> Original bugs are left as is. You can find any the have been identified with the `// BUG` comments.
</details>

## ⚙️ Compilation

The [Adhoc Toolchain](https://github.com/Nenkai/GTAdhocToolchain) is required to compile game scripts. 
The tool itself is command line-based without a native GUI, however it does have a VS Code Extension, and a Python GUI wrapper for streamlined usage / workflow.
> [!TIP]
Adhoc Toolchain (i.e `adhoc.exe`) can be added to your **PATH** (Optional)

### 🔧 Compilation process:
* adhoc build -i `path:\to\.yaml\project\file` -o `path:\to\output\.adc\file`<br>
or<br>
* adhoc build -i `path:\to\.ad\source\file` -o `path:\to\output\.adc\file` -v `Adhoc Version (5,7,10,12, etc.)`<br>
or<br>
* "Run Build Task (CTRL+SHIFT+B)" with the VS Code Adhoc Extension on any source file or project file.<br>
or<br>
* Use the Python wrapper script for a straightforward GUI to send commands to the program.

For more details refer to the [Adhoc Page](https://nenkai.github.io/gt-modding-hub/concepts/adhoc/adhoc/) on the Modding Hub.

## 📋Contributing & Notes

### 1. Disassembly
* To contribute to OpenAdhoc, the 1st step is to disassemble an original adhoc script (.adc), arriving at an intermediate translation of the bytecode that is understandable enough to convert into full source code.
* The Adhoc toolchain allows disassembling scripts into an assembly-like text form. Most scripts contain symbols which are mandatory and thus allows reconstructing code back into source. Very rarely did syntax have to be made up to support specific adhoc features due to no original source reference, so the documentation is the code.
* To disassemble a script, run the following command: adhoc `path:\to\.adc\file`<br>

### 2. Decompilation
**Translation**<br>
* Understanding how to read the disassembly can be challenging at first. Compare reversed scripts against their corresponding disassembly code to learn.
* Translating by hand is very time-consuming. If you have the patience, you can train an AI model to translate the disassembly for you by having it help you edit code that's already translated,
and attempt to have it decompile disassembly every so often.
* The key to training it is providing a lot of adhoc source code, and over many separate chats over time. It needs to learn the format of adhoc much moreso than the disassembly.
* This can take a very long time before it gets any good, but if it does it can make short work of even the largest scripts.<br>
<details>
  <summary> 📝 Translation example (Expand to view)</summary>

  Disassembly:<br>
  
1A4E| 118| 30| `FUNCTION_DEFINE - onActivate(context)`<br>
// *FUNCTION_DEFINE means we are beginning a new function. we write function onActivate(context) {*<br>
`> Instruction Count: 43 (1A7F)`<br>
`> Stack Size: 6 - Variable Heap Size: 7 - Variable Heap Size Static: =Variable Heap Size`<br>
1A87| 109|  0| VARIABLE_PUSH: Slide,slide,`Slide::slide`, Static:2<br>
// *The 1st piece of relevant code is Slide::slide*<br>
// *making this the start of the 1st line of code inside this function.*<br>
1AB0| 109|  1| EVAL<br>
1AB5| 109|  2| ATTRIBUTE_PUSH: `isPlaying`<br>
// *attributes are represented by period `.` so now we have Slide::slide.isPlaying*<br>
1AC5| 109|  3| EVAL<br>
1ACA| 109|  4| `CALL: ArgCount=0`<br>
// *we now know there's arguments with CALL: ArgCount. In this case it's 0 so we will now have Slide::slide.isPlaying()*<br>
1AD3| 109|  5| EVAL<br>
1AD8| 109|  6| UNARY_OPERATOR: ! (`!`)<br>
// *We don't know how this is used quite yet, for now we hold onto that*<br>
1AE0| 109|  7| `JUMP_IF_FALSE: Jump To Func Ins 39`<br>
// *Now we know. Jump if false is a standard if() statement. So now our 1st line of code is complete: if (!Slide::slide.isPlaying()) {*<br>
  1AE9| 110|  8| NOP<br>
  1AEE| 111|  9| VARIABLE_PUSH: main,sound,`main::sound`, Static:3<br>
  // *Now inside the if statement, our 2nd line of code begins. So far we have main::sound*<br>
  1B15| 111| 10| EVAL<br>
  1B1A| 111| 11| `ATTRIBUTE_PUSH: play`<br>
  // *attribute for main::sound, now we have main::sound.play*<br>
  1B25| 111| 12| EVAL<br>
  1B2A| 111| 13| STRING_CONST: `ok`<br>
  // *A string! these are represented by quotes `""`. For now we don't know how this is used. Save for later.*<br>
  1B33| 111| 14| `CALL: ArgCount=1`<br>
  // *With the argument here we now know: main::sound.play("ok")*<br>
  1B3C| 111| 15| EVAL<br>
  1B41| 111| 16| POP_OLD<br>
  // *POP_OLDs incidcate the end for a line of code, so the 2nd line is done<br>
  // *and since it isn't an if or a switch case, we finish it off with semicolon: main::sound.play("ok");*<br>
  1B46| 112| 17| VARIABLE_PUSH: Slide,slide,`Slide::slide`, Static:2<br>
  // *Now on the 3rd line starting with Slide::slide*<br>
  1B6F| 112| 18| EVAL<br>
  1B74| 112| 19| `ATTRIBUTE_PUSH: doPlay`<br>
  // *Now we have Slide::slide.doPlay*<br>
  1B81| 112| 20| EVAL<br>
  1B86| 112| 21| `CALL: ArgCount=0`<br>
  // *Now we have Slide::slide.doPlay()<br>
  1B8F| 112| 22| EVAL<br>
  1B94| 112| 23| POP_OLD<br>
  // *Cap it off with semicolon: Slide::slide.doPlay();*<br>
  1B99| 113| 24| VARIABLE_PUSH: sensitive,`sensitive`, Static:4<br>
  // *4th line: sensitive*<br>
  1BBC| 113| 25| EVAL<br>
  1BC1| 113| 26| `CALL: ArgCount=0`<br>
  // *Now we have sensitive()*<br>
  1BCA| 113| 27| EVAL<br>
  1BCF| 113| 28| POP_OLD<br>
  // *Confirms the end of line 4, cap it off with semicolon<br>
  1BD4| 114| 29| VARIABLE_PUSH: SlideRoot,`SlideRoot`, Static:5<br>
  // *5th line: SlideRoot*<br>
  1BF7| 114| 30| EVAL<br>
  1BFC| 114| 31| `ATTRIBUTE_PUSH: setFocus`<br>
  // *Now we have SlideRoot.setFocus*<br>
  1C0B| 114| 32| EVAL<br>
  1C10| 114| 33| VARIABLE_PUSH: Stop,`Stop`, Static:6<br>
  // *Don't know what to do with `Stop` just yet*<br>
  1C29| 114| 34| EVAL<br>
  1C2E| 114| 35| `CALL: ArgCount=1`<br>
  // *Now we do: SlideRoot.setFocus(Stop)<br>
  1C37| 114| 36| EVAL<br>
  1C3C| 114| 37| POP_OLD<br>
  // *Cap it off with semicolon*<br>
  1C41| 115| 38| NOP<br>
  // *As per the jump instruction from earlier, we have now exited the if statement and need to cap it off with the other end of the curly bracket }.*<br>
  `1C46| 117| 39| INT_CONST: 2 (0x02)`<br>
  `1C4F| 117| 40| POP_OLD`<br>
  `1C54| 117| 41| SET_STATE_OLD: State=RETURN (1)`<br>
  // *This particular bundle of code means we are returning something specific. In this case*<br>
  // *we are returning 2 (`return 2;`) however the correct interpretation is EVENTRESULT type 2,*<br>
  // *which is EVENTRESULT_FILTER. so the correct translation is `return EVENTRESULT_FILTER;`.*<br>
  // *This is commonly seen on functions that involve canceling things and going backward.*<br>
  `1C5A| 118| 42| SET_STATE_OLD: State=RETURN (1)`<br>
  // *The compiler automatically handles the final return on any function, so these are not written.*<br>

Translated:<br>
```
function onActivate(context)
{
    if (!Slide::slide.isPlaying())
    {
        main::sound.play("ok");
        Slide::slide.doPlay();
        sensitive();
        SlideRoot.setFocus(Stop);
    }

    return EVENTRESULT_FILTER;
}
```
--- End Translation Example ---
</details>

**Things that are okay to discard**
* Following line numbers - attempting to follow line numbers for code that may be stripped from undefined original preprocessor directives or missing comment blocks can leave holes in the source, therefore prefered not to follow line numbers for better readability.
* Logic order - It is common that scripts were written using such pattern: `nil != myObject` or `"Dog" == myString`. For readability, literals should always be on the right-hand side such as `myObject != nil`.

**Things that should be preserved, or recommended to have**
* All code of any kind should be present in the scripts; bugs should NOT be fixed but should **always** be marked with a `// BUG: <comment>` block. An example of this is usage of undeclared variables, typos.
* Comments to help understand code in general are not needed but appreciated.
* Usage of `PROJECT` and `ROOT` defines should be used everywhere besides the main module declarations.
* Usage of other defines such as `EVENTRESULT` and `PAD` defines (list [here](https://github.com/Nenkai/GTAdhocToolchain/wiki/Builtin-Macros))

### 3. Compilation, comparison, commit
* The 1st roadblock is squashing any mistakes in translating the disassembly if your translated code doesn't at least compile. You'll be on your own until you can get it to compile.
* Once you successfully compile it, the next step is to revise the translated code to get it to completely match the original compiled code. To do so, disassemble both the original .adc and your new .adc.
Use the included python compare script in the Toolchain's scripts folder to diff them. This will output an html file letting you view both disassemblies side-by-side.
Red highlights indicate missing logic, and green highlights indicate added logic. Revise your translated code until all relevant red and green highlights from the comparison are eliminated.
* Once your translated code is fully matching (or at least as close as possible), fork the repo, add your files to your fork, then make a pull request. In the Pull request conversation, add any relevant information
about your new files. If you have any mistakes that you are unable to correct, point them out for review and suggestions.

## 📜 History
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
