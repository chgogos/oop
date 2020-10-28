#include <wx/wx.h>
#include <wx/datetime.h>

int main(int argc, char **argv)
{
  wxDateTime now = wxDateTime::Now();

  wxString date1 = now.Format();
  wxString date2 = now.Format(wxT("%X"));
  wxString date3 = now.Format(wxT("%x"));

  wxPuts(date1);
  wxPuts(date2);
  wxPuts(date3);
}