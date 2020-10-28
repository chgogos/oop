#include "border.h"
#include <wx/wx.h>

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

    Border *border = new Border(wxT("Border"));
    border->Show(true);

    return true;
}