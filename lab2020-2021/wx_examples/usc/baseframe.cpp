#include "baseframe.h"

enum
{
    PLUS_BTN_CLICKED = 100,
    MINUS_BTN_CLICKED = 101
};

BaseFrame::BaseFrame(const wxString &title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(500, 200))
{
    wxPanel *panel = new wxPanel(this, wxID_ANY);
    wxBoxSizer *hbox1 = new wxBoxSizer(wxHORIZONTAL);
    hbox1->Add(panel, 1, wxEXPAND | wxALL, 5);

    tc1 = new wxTextCtrl(panel, wxID_ANY, wxT("20")); // default text value = 20, user can change this
    button1 = new wxButton(panel, PLUS_BTN_CLICKED, wxT("+"));
    button2 = new wxButton(panel, MINUS_BTN_CLICKED, wxT("-"));
    tc2 = new wxTextCtrl(panel, wxID_ANY, wxT("22")); // default text value = 22, user can change this
    st = new wxStaticText(panel, wxID_ANY, wxT("="));
    tc3 = new wxTextCtrl(panel, wxID_ANY, wxT("0"));
    tc3->SetEditable(false);

    wxBoxSizer *hbox2 = new wxBoxSizer(wxHORIZONTAL);
    hbox2->Add(tc1);
    hbox2->Add(button1);
    hbox2->Add(button2);
    hbox2->Add(tc2);
    hbox2->Add(st, wxEXPAND | wxHORIZONTAL);
    hbox2->Add(tc3);

    panel->SetSizer(hbox2);
    Centre();

    Connect(PLUS_BTN_CLICKED, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseFrame::OnAddClick));
    Connect(MINUS_BTN_CLICKED, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseFrame::OnSubtractClick));
}

void BaseFrame::OnAddClick(wxCommandEvent &WXUNUSED(event))
{
    int a = wxAtoi(tc1->GetValue());
    int b = wxAtoi(tc2->GetValue());
    tc3->SetValue(wxString::Format(wxT("%i"), a + b));
    wxPuts(wxT("Plus button clicked"));
}

void BaseFrame::OnSubtractClick(wxCommandEvent &WXUNUSED(event))
{
    int a = wxAtoi(tc1->GetValue());
    int b = wxAtoi(tc2->GetValue());
    tc3->SetValue(wxString::Format(wxT("%i"), a - b));
    wxPuts(wxT("Minus button clicked"));
}
