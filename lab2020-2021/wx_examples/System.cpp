#include <wx/wx.h>
#include <wx/string.h>
#include <wx/utils.h>

int main(int argc, char **argv)
{
  wxPuts(wxGetHomeDir());
  wxPuts(wxGetOsDescription());
  wxPuts(wxGetUserName());
  wxPuts(wxGetFullHostName());

  long mem = wxGetFreeMemory().ToLong();

  wxPrintf(wxT("Memory: %ld\n"), mem);
}