#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
private:
	wxButton* btnPlus = nullptr;
	wxButton* btnSub = nullptr;
	wxButton* btnMuilt = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn0 = nullptr;
	wxButton* btnNeg = nullptr;
	wxButton* btnDec = nullptr;
	wxButton* btnBin = nullptr;
	wxButton* btnHex = nullptr;
	wxButton* btnMod = nullptr;
	wxButton* btnEqual = nullptr;
	wxButton*  btnBack = nullptr;

	wxTextCtrl* text = nullptr;
public:
	Main();
	void OnButtonClick(wxCommandEvent& evt);
	void OK(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

