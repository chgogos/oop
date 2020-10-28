#include <wx/wx.h>

class Sizer : public wxFrame
{
public:
  Sizer(const wxString& title);

  wxMenuBar *menubar;
  wxMenu *file;
  wxMenu *edit;
  wxMenu *help;
  wxTextCtrl *textctrl;

};