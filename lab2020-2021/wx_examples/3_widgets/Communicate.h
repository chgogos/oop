#include "Panels.h"
#include <wx/wxprec.h>


class Communicate : public wxFrame
{
public:
    Communicate(const wxString& title);


    LeftPanel *m_lp;
    RightPanel *m_rp;
    wxPanel *m_parent;

};