#include "menu.h"

SimpleMenu::SimpleMenu(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(280, 180))
{

  menubar = new wxMenuBar;
  file = new wxMenu;
  file->Append(wxID_EXIT, wxT("&Quit"));
  menubar->Append(file, wxT("&File"));
  SetMenuBar(menubar);

  Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
      wxCommandEventHandler(SimpleMenu::OnQuit));
  Centre();

}

void SimpleMenu::OnQuit(wxCommandEvent& WXUNUSED(event))
{
  Close(true);
}