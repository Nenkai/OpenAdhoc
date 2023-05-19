













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