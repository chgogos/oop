#include <wx/wx.h>

class BaseFrame : public wxFrame
{
public:
  BaseFrame(const wxString &title);

  wxTextCtrl *tc1; // input A
  wxTextCtrl *tc2; // input B
  wxButton *button1;
  wxButton *button2;
  wxStaticText *st;
  wxTextCtrl *tc3; // result

  void OnAddClick(wxCommandEvent &WXUNUSED(event));
  void OnSubtractClick(wxCommandEvent &WXUNUSED(event));
};