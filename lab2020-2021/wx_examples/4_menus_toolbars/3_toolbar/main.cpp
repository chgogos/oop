#include <wx/wx.h>
#include "toolbar.h"

class MyApp : public wxApp
{

public:
    virtual bool OnInit();
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Toolbar *toolbar = new Toolbar(wxT("Toolbar"));
    toolbar->Show(true);

    return true;
}