#include <wx/wx.h>
#include <wx/dir.h>
#include <wx/filefn.h>

int main(int argc, char **argv)
{

  wxDir dir(wxGetCwd());

  wxString file;

  bool cont = dir.GetFirst(&file, wxEmptyString,
      wxDIR_FILES | wxDIR_DIRS);

  while (cont) {
      wxPuts(file);
      cont = dir.GetNext(&file);
  }
}