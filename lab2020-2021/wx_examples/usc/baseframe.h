#include <wx/wx.h>

class BaseFrame : public wxFrame
{
public:
  BaseFrame(const wxString &title);

  wxTextCtrl *tc1; // input A
  wxTextCtrl *tc2; // input B
  wxButton *button1; // plus button
  wxButton *button2; // minus button
  wxStaticText *st;
  wxTextCtrl *tc3; // result

  void OnAddClick(wxCommandEvent &WXUNUSED(event));
  void OnSubtractClick(wxCommandEvent &WXUNUSED(event));
};