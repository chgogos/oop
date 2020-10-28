#include <wx/wx.h>
#include <wx/datetime.h>

int main(int argc, char **argv)
{
  wxDateTime now = wxDateTime::Now();

  wxPrintf(wxT("   Tokyo: %s\n"), now.Format(wxT("%a %T"), 
      wxDateTime::GMT9).c_str());
  wxPrintf(wxT("  Moscow: %s\n"), now.Format(wxT("%a %T"), 
      wxDateTime::MSD).c_str());
  wxPrintf(wxT("Budapest: %s\n"), now.Format(wxT("%a %T"), 
      wxDateTime::CEST).c_str());
  wxPrintf(wxT("  London: %s\n"), now.Format(wxT("%a %T"), 
      wxDateTime::WEST).c_str());
  wxPrintf(wxT("New York: %s\n"), now.Format(wxT("%a %T"), 
      wxDateTime::EDT).c_str());
}