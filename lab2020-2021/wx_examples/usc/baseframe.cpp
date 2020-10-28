#include "baseframe.h"

BaseFrame::BaseFrame(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(500, 200))
{
    wxPanel *panel = new wxPanel(this, wxID_ANY);
    wxBoxSizer *hbox1 = new wxBoxSizer(wxHORIZONTAL);
    hbox1->Add(panel, 1, wxEXPAND | wxALL, 5);

    tc1 = new wxTextCtrl(panel, wxID_ANY, wxT("0"));
    button = new wxButton(panel, 12345, wxT("+"));
    tc2 = new wxTextCtrl(panel, wxID_ANY, wxT("0"));
    st = new wxStaticText(panel, wxID_ANY, wxT("="));
    tc3 = new wxTextCtrl(panel, wxID_ANY, wxT("0"));
    tc3->SetEditable(false);
    tc3->SetEditable(false);

    wxBoxSizer *hbox2 = new wxBoxSizer(wxHORIZONTAL);
    hbox2->Add(tc1);
    hbox2->Add(button);
    hbox2->Add(tc2);
    hbox2->Add(st, wxEXPAND | wxHORIZONTAL);
    hbox2->Add(tc3);

    panel->SetSizer(hbox2);
    Centre();

    Connect(12345, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseFrame::OnAddClick));
}

void BaseFrame::OnAddClick(wxCommandEvent &WXUNUSED(event))
{
    int a = wxAtoi(tc1->GetValue());
    int b = wxAtoi(tc2->GetValue());
    tc3->SetValue(wxString::Format(wxT("%i"), a + b));
    wxPuts(wxT("Button clicked"));
}
