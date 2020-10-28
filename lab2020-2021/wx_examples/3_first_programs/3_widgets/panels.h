#include <wx/wx.h>
#include <wx/panel.h>

class LeftPanel : public wxPanel
{
public:
    LeftPanel(wxPanel *parent);

    void OnPlus(wxCommandEvent &event);
    void OnMinus(wxCommandEvent &event);

    wxButton *m_plus;
    wxButton *m_minus;
    wxPanel *m_parent;
    int count;
};

class RightPanel : public wxPanel
{
public:
    RightPanel(wxPanel *parent);

    void OnSetText(wxCommandEvent &event);

    wxStaticText *m_text;
};

const int ID_PLUS = 101;
const int ID_MINUS = 102;