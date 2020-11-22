#include <wx/wx.h>
#include "Complex.hpp"

class BaseFrame : public wxFrame
{
public:
    BaseFrame(const wxString &title);

    wxStaticText *co1_lbl;
    wxTextCtrl *co1_real;
    wxTextCtrl *co1_imag;

    wxStaticText *co2_lbl;
    wxTextCtrl *co2_real;
    wxTextCtrl *co2_imag;

    wxButton *addBtn;
    wxButton *subtractBtn;
    wxButton *multiplyBtn;
    wxButton *divideBtn;
    wxButton *powerBtn;
    wxTextCtrl *exponent;

    wxStaticText *co3_lbl;
    wxTextCtrl *co3_real;
    wxTextCtrl *co3_imag;

    bool getComplexNumberInput(wxString real, wxString imag, Complex &co);
    void OnAddClick(wxCommandEvent &WXUNUSED(event));
    void OnSubtractClick(wxCommandEvent &WXUNUSED(event));
    void OnMultiplyClick(wxCommandEvent &WXUNUSED(event));
    void OnDivideClick(wxCommandEvent &WXUNUSED(event));
    void OnPowerClick(wxCommandEvent &WXUNUSED(event));
};