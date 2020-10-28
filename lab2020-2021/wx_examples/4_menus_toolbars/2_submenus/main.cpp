#include "menu.h"

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {

        SubMenu *smenu = new SubMenu(wxT("Submenu"));
        smenu->Show(true);

        return true;
    }

}

IMPLEMENT_APP(MyApp)
