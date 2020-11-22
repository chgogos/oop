// http://zetcode.com/gui/wxwidgets/layoutmanagement/

#include "BaseFrame.hpp"

enum
{
    ADD_BTN_CLICKED = 100,
    SUBTRACT_BTN_CLICKED = 101,
    MULTIPLY_BTN_CLICKED = 102,
    DIVIDE_BTN_CLICKED = 103,
    POWER_BTN_CLICKED = 104
};

BaseFrame::BaseFrame(const wxString &title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(500, 300))
{
    wxPanel *panel = new wxPanel(this, wxID_ANY);
    wxPanel *panel1 = new wxPanel(panel, wxID_ANY);
    wxPanel *panel2 = new wxPanel(panel, wxID_ANY);
    wxPanel *panel3 = new wxPanel(panel, wxID_ANY);
    wxPanel *panel4 = new wxPanel(panel, wxID_ANY);

    co1_lbl = new wxStaticText(panel1, wxID_ANY, wxT("Μιγαδικός Αριθμός 1"));
    co1_real = new wxTextCtrl(panel1, wxID_ANY, wxT(""));
    co1_imag = new wxTextCtrl(panel1, wxID_ANY, wxT(""));
    wxBoxSizer *hbox1 = new wxBoxSizer(wxHORIZONTAL);
    hbox1->Add(co1_lbl, wxEXPAND | wxALL, 10);
    hbox1->Add(co1_real);
    hbox1->Add(co1_imag);
    panel1->SetSizer(hbox1);

    co2_lbl = new wxStaticText(panel2, wxID_ANY, wxT("Μιγαδικός Αριθμός 2"));
    co2_real = new wxTextCtrl(panel2, wxID_ANY, wxT(""));
    co2_imag = new wxTextCtrl(panel2, wxID_ANY, wxT(""));
    wxBoxSizer *hbox2 = new wxBoxSizer(wxHORIZONTAL);
    hbox2->Add(co2_lbl, wxEXPAND);
    hbox2->Add(co2_real);
    hbox2->Add(co2_imag);
    panel2->SetSizer(hbox2);

    addBtn = new wxButton(panel3, ADD_BTN_CLICKED, wxT("+"));
    subtractBtn = new wxButton(panel3, SUBTRACT_BTN_CLICKED, wxT("-"));
    multiplyBtn = new wxButton(panel3, MULTIPLY_BTN_CLICKED, wxT("*"));
    divideBtn = new wxButton(panel3, DIVIDE_BTN_CLICKED, wxT("/"));
    powerBtn = new wxButton(panel3, POWER_BTN_CLICKED, wxT("^"));
    exponent = new wxTextCtrl(panel3, wxID_ANY, wxT("1"));
    wxBoxSizer *hbox3 = new wxBoxSizer(wxHORIZONTAL);
    hbox3->Add(addBtn);
    hbox3->Add(subtractBtn);
    hbox3->Add(multiplyBtn);
    hbox3->Add(divideBtn);
    hbox3->Add(powerBtn);
    hbox3->Add(exponent);
    panel3->SetSizer(hbox3);

    co3_lbl = new wxStaticText(panel4, wxID_ANY, wxT("Αποτέλεσμα"));
    co3_real = new wxTextCtrl(panel4, wxID_ANY, wxT(""));
    co3_real->SetEditable(false);
    co3_imag = new wxTextCtrl(panel4, wxID_ANY, wxT(""));
    co3_imag->SetEditable(false);
    wxBoxSizer *hbox4 = new wxBoxSizer(wxHORIZONTAL);
    hbox4->Add(co3_lbl, wxEXPAND);
    hbox4->Add(co3_real);
    hbox4->Add(co3_imag);
    panel4->SetSizer(hbox4);

    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    vbox->Add(panel1, 1, wxEXPAND | wxALL, 10);
    vbox->Add(panel2, 1, wxEXPAND | wxALL, 10);
    vbox->Add(panel3, 1, wxEXPAND | wxALL, 10);
    vbox->Add(panel4, 1, wxEXPAND | wxALL, 10);
    panel->SetSizer(vbox);

    Centre();

    Connect(ADD_BTN_CLICKED, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseFrame::OnAddClick));
    Connect(SUBTRACT_BTN_CLICKED, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseFrame::OnSubtractClick));
    Connect(MULTIPLY_BTN_CLICKED, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseFrame::OnMultiplyClick));
    Connect(DIVIDE_BTN_CLICKED, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseFrame::OnDivideClick));
    Connect(POWER_BTN_CLICKED, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseFrame::OnPowerClick));
}

bool BaseFrame::getComplexNumberInput(wxString real, wxString imag, Complex &a_complex)
{
    double re, im;
    if (!real.ToDouble(&re))
    {
        wxPuts(wxT("Formatting error"));
        return false;
    }
    if (!imag.ToDouble(&im))
    {
        wxPuts(wxT("Formatting error"));
        return false;
    }
    a_complex = Complex(re, im);
    return true;
}

void BaseFrame::OnAddClick(wxCommandEvent &WXUNUSED(event))
{
    wxPuts(wxT("Add button clicked"));
    Complex co1, co2;
    if (!getComplexNumberInput(co1_real->GetValue(), co1_imag->GetValue(), co1))
        return;
    if (!getComplexNumberInput(co2_real->GetValue(), co2_imag->GetValue(), co2))
        return;

    Complex result = co1 + co2;
    co3_real->SetValue(wxString::Format(wxT("%f"), result.real()));
    co3_imag->SetValue(wxString::Format(wxT("%f"), result.imag()));
}

void BaseFrame::OnSubtractClick(wxCommandEvent &WXUNUSED(event))
{
    wxPuts(wxT("Subtract button clicked"));
    Complex co1, co2;
    if (!getComplexNumberInput(co1_real->GetValue(), co1_imag->GetValue(), co1))
        return;
    if (!getComplexNumberInput(co2_real->GetValue(), co2_imag->GetValue(), co2))
        return;

    Complex result = co1 - co2;
    co3_real->SetValue(wxString::Format(wxT("%f"), result.real()));
    co3_imag->SetValue(wxString::Format(wxT("%f"), result.imag()));
}

void BaseFrame::OnMultiplyClick(wxCommandEvent &WXUNUSED(event))
{
    Complex co1, co2;
    if (!getComplexNumberInput(co1_real->GetValue(), co1_imag->GetValue(), co1))
        return;
    if (!getComplexNumberInput(co2_real->GetValue(), co2_imag->GetValue(), co2))
        return;

    Complex result = co1 * co2;
    co3_real->SetValue(wxString::Format(wxT("%f"), result.real()));
    co3_imag->SetValue(wxString::Format(wxT("%f"), result.imag()));
    wxPuts(wxT("Multiply button clicked"));
}

void BaseFrame::OnDivideClick(wxCommandEvent &WXUNUSED(event))
{
    Complex co1, co2;
    if (!getComplexNumberInput(co1_real->GetValue(), co1_imag->GetValue(), co1))
        return;
    if (!getComplexNumberInput(co2_real->GetValue(), co2_imag->GetValue(), co2))
        return;

    Complex result = co1 / co2;
    co3_real->SetValue(wxString::Format(wxT("%f"), result.real()));
    co3_imag->SetValue(wxString::Format(wxT("%f"), result.imag()));
    wxPuts(wxT("Divide button clicked"));
}

void BaseFrame::OnPowerClick(wxCommandEvent &WXUNUSED(event))
{
    Complex co1;
    if (!getComplexNumberInput(co1_real->GetValue(), co1_imag->GetValue(), co1))
        return;

    int power = wxAtoi(exponent->GetValue());
    Complex result = co1.raiseTo(power);
    co3_real->SetValue(wxString::Format(wxT("%f"), result.real()));
    co3_imag->SetValue(wxString::Format(wxT("%f"), result.imag()));
    wxPuts(wxT("Power button clicked"));
}