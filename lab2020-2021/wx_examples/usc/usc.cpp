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

    BaseFrame *base_frame = new BaseFrame(wxT("Ultimate Simple Calculator"));

    base_frame->Show(true);

    return true;
}
