#include "simple.h"

Simple::Simple(const wxString &title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
    // δημιουργία ενός panel που θα τοποθετηθεί στο widget
    wxPanel *panel = new wxPanel(this, wxID_ANY);

    // δημιουργία ενός button που θα τοποθετηθεί στο panel 
    // στη θέση 20,20 από την πάνω αριστερή γωνία με ετικέτα "Quit" 
    wxButton *button = new wxButton(panel, wxID_EXIT, wxT("Quit"),
                                    wxPoint(20, 20));

    // Όταν θα γίνεται κλικ στο button θα δημιουργείται το event
    // wxEVT_COMMAND_BUTTON_CLICKED που συνδέεται με την εκτέλεση της
    // μεθόδου OnQuit στην κλάση Simple
    Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED,
            wxCommandEventHandler(Simple::OnQuit));

    // Τίθεται η εστίαση στο button έτσι ώστε αν πατηθεί enter να γίνει
    // κλικ το button
    button->SetFocus();

    Centre();
}

void Simple::OnQuit(wxCommandEvent &WXUNUSED(event))
{
    // τερματισμός εφαρμογής
    Close(true);
}