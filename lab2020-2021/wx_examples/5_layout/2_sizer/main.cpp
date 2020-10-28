#include "sizer.h"
#include <wx/wx.h>

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Sizer *sizer = new Sizer(wxT("Sizer"));
    sizer->Show(true);

    return true;
}