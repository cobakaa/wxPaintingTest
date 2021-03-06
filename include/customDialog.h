#ifndef __CUSTOM_DIALOG__
#define __CUSTOM_DIALOG__

#include <wx/wx.h>
#include "tools.h"

class CustomDialog : public wxDialog
{
public:
  CustomDialog(const wxString& title);

  void OnOkClicked(wxCommandEvent & event);
  void OnDir(wxCommandEvent & event);
  void OnUndir(wxCommandEvent & event);


  GraphMode GetGraphMode();

  ~CustomDialog();

private:
    GraphMode gmode = directed;

protected:
  wxRadioButton *rb;
  wxRadioButton *rb1;
  wxButton *okButton;

};

#endif