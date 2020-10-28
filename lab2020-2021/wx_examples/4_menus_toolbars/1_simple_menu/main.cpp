#include "menu.h"

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        SimpleMenu *menu = new SimpleMenu(wxT("Simple Menu"));
        menu->Show(true);

        return true;
    }
};

IMPLEMENT_APP(MyApp)
