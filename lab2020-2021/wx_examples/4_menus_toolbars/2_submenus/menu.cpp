#include "menu.h"

SubMenu::SubMenu(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(280, 180))
{

  menubar = new wxMenuBar;
  file = new wxMenu;

  file->Append(wxID_ANY, wxT("&New"));
  file->Append(wxID_ANY, wxT("&Open"));
  file->Append(wxID_ANY, wxT("&Save"));
  file->AppendSeparator();

  imp = new wxMenu;
  imp->Append(wxID_ANY, wxT("Import newsfeed list..."));
  imp->Append(wxID_ANY, wxT("Import bookmarks..."));
  imp->Append(wxID_ANY, wxT("Import mail..."));

  file->AppendSubMenu(imp, wxT("I&mport"));

  quit = new wxMenuItem(file, wxID_EXIT, wxT("&Quit\tCtrl+W"));
  file->Append(quit);

  menubar->Append(file, wxT("&File"));
  SetMenuBar(menubar);

  Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
          wxCommandEventHandler(SubMenu::OnQuit));
  Centre();
}

void SubMenu::OnQuit(wxCommandEvent &WXUNUSED(event))
{
  Close(true);
}