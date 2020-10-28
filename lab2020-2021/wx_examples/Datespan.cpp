#include <wx/wx.h>
#include <wx/datetime.h>

int main(int argc, char **argv)
{
  wxDateTime now = wxDateTime::Now();
  wxString date1 = now.Format(wxT("%B %d %Y"));
  wxPuts(date1);

  wxDateSpan span(0, 1);
  wxDateTime then = now.Add(span);

  wxString date2 = then.Format(wxT("%B %d %Y"));
  wxPuts(date2);

}