#include <wx/wx.h>
#include "baseframe.h"

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    if (!wxApp::OnInit())
    {
        return false;
    }

    BaseFrame *base_frame = new BaseFrame(wxT("Ultimate Simple Calculator"));

    base_frame->Show(true);

    return true;
}
