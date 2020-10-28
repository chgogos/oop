#include <wx/wx.h>
#include "simple.h"

class MyApp : public wxApp
{
  public:
    virtual bool OnInit();
};

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    Simple *simple = new Simple(wxT("Simple"));
    simple->Show(true);

    return true;
}