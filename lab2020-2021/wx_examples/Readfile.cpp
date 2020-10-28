#include <wx/wx.h>
#include <wx/textfile.h>

int main(int argc, char **argv)
{

  wxTextFile file(wxT("Readfile.cpp"));

  file.Open();

  wxPrintf(wxT("Number of lines: %d\n"), file.GetLineCount());
  wxPrintf(wxT("First line: %s\n"), file.GetFirstLine().c_str());
  wxPrintf(wxT("Last line: %s\n"), file.GetLastLine().c_str());

  wxPuts(wxT("-------------------------------------"));

  wxString s;

  for ( s = file.GetFirstLine(); !file.Eof(); 
      s = file.GetNextLine() )
  {
       wxPuts(s);
  }

  file.Close();
}