#include <wx/wx.h>

class Simple : public wxFrame
{
public:
    Simple(const wxString& title);

    void OnQuit(wxCommandEvent& event);

};