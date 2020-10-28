#include "toolbar.h"

Toolbar::Toolbar(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title,
              wxDefaultPosition, wxSize(300, 250))
{

    wxImage::AddHandler(new wxPNGHandler);

    wxBitmap exit(wxT("exit.png"), wxBITMAP_TYPE_PNG);

    wxToolBar *toolbar = CreateToolBar();
    toolbar->AddTool(wxID_EXIT, wxT("Exit application"), exit);
    toolbar->Realize();

    Connect(wxID_EXIT, wxEVT_COMMAND_TOOL_CLICKED,
            wxCommandEventHandler(Toolbar::OnQuit));
}

void Toolbar::OnQuit(wxCommandEvent &WXUNUSED(event))
{
    Close(true);
}