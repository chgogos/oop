#include <wx/wx.h>
#include "BaseFrame.hpp"

class MyApp : public wxApp
{
public:
    bool OnInit()
    {
        if (!wxApp::OnInit())
        {
            return false;
        }

        BaseFrame *base_frame = new BaseFrame(wxT("Αριθμομηχανή μιγαδικών"));

        base_frame->Show(true);

        return true;
    }
};

IMPLEMENT_APP(MyApp)