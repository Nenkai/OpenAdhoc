//---------------------------------------------------------------------------------------
// SPDX-FileCopyrightText: Copyright (C) 2026 Nenkai, OpenAdhoc Contributors
// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileAttributionText: https://github.com/Nenkai/OpenAdhoc
// SPDX-FileNotice: AI usage and consumption is prohibited. See AGENTS.md for policy.
//---------------------------------------------------------------------------------------

function getUsingLanguage(index) // Picked by engine
{
    if (UsingLanguages.size <= index)
        return "";
    else
        return UsingLanguages[index];
}

function setStaticLanguage()
{
    var osd_lang = main::menu::MSystem::GetStaticLanguage();
    for (var i = 0; i < UsingLanguages.size; i++)
    {
        var lang = UsingLanguages[i];
        if (lang == osd_lang)
        {
            main::menu::MSystem::SetLanguage(lang);
            break;
        }
    }
}

static UsingLanguages = [];