#include <wx/wx.h>
#include <wx/menu.h>

class Absolute : public wxFrame
{

public:
    Absolute(const wxString &title);

    wxMenuBar *menubar;
    wxMenu *file;
    wxMenu *edit;
    wxMenu *help;
    wxTextCtrl *textctrl;
};