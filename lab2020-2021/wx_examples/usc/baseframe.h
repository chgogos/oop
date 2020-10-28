#include <wx/wx.h>

class BaseFrame : public wxFrame
{
public:
  BaseFrame(const wxString &title);

    wxTextCtrl *tc1, *tc2, *tc3;
    wxButton *button;
    wxStaticText *st;

  void OnAddClick(wxCommandEvent &WXUNUSED(event));
};