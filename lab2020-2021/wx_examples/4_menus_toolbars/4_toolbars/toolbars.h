#include <wx/wx.h>

class Toolbar : public wxFrame
{

public:
    Toolbar(const wxString &title);

    void OnQuit(wxCommandEvent &event);

    wxToolBar *toolbar1;
    wxToolBar *toolbar2;
};