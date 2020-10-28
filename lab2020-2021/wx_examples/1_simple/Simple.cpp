#include "simple.h"

Simple::Simple(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
    SetIcon(wxIcon(wxT("web.xpm")));
    Centre();
}