#include <wx/wx.h>
#include "Communicate.h"

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Communicate *communicate = new Communicate(wxT("Widgets communicate"));
    communicate->Show(true);

    return true;
}
