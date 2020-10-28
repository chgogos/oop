#include <wx/wx.h>

int main(int argc, char **argv)
{
  wxString str = wxT("The history of my life");
  wxPrintf(wxT("The string has %d characters\n"), str.Len());
}
