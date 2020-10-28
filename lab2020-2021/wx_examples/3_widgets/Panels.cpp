#include <wx/stattext.h>
#include "Communicate.h"

LeftPanel::LeftPanel(wxPanel *parent)
    : wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
    count = 0;

    // αποθήκευση του γονέα widget του left panel widget
    m_parent = parent;

    m_plus = new wxButton(this, ID_PLUS, wxT("+"),
                          wxPoint(10, 10));
    m_minus = new wxButton(this, ID_MINUS, wxT("-"),
                           wxPoint(10, 60));
    Connect(ID_PLUS, wxEVT_COMMAND_BUTTON_CLICKED,
            wxCommandEventHandler(LeftPanel::OnPlus));
    Connect(ID_MINUS, wxEVT_COMMAND_BUTTON_CLICKED,
            wxCommandEventHandler(LeftPanel::OnMinus));
}

void LeftPanel::OnPlus(wxCommandEvent &WXUNUSED(event))
{
    count++;

    // Λήψη ενός pointer προς το parent widget του left panel
    Communicate *comm = (Communicate *)m_parent->GetParent();
    // Μέσω των pointers "φτάνουμε" στο static text widget που
    // βρίσκεται στο right panel
    comm->m_rp->m_text->SetLabel(wxString::Format(wxT("%d"), count));
}

void LeftPanel::OnMinus(wxCommandEvent &WXUNUSED(event))
{
    count--;

    Communicate *comm = (Communicate *)m_parent->GetParent();
    comm->m_rp->m_text->SetLabel(wxString::Format(wxT("%d"), count));
}

RightPanel::RightPanel(wxPanel *parent)
    : wxPanel(parent, wxID_ANY, wxDefaultPosition,
              wxSize(270, 150), wxBORDER_SUNKEN)
{
    m_text = new wxStaticText(this, -1, wxT("0"), wxPoint(40, 60));
}