#include <wx/wx.h>
#include "absolute.h"

class MyApp : public wxApp
{

public:
    virtual bool OnInit();
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Absolute *absolute = new Absolute(wxT("Absolute"));
    absolute->Show(true);

    return true;
}