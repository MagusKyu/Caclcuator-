#pragma once
#include "wx/wx.h"
#include <vector>
#include "Main.h"



class Factory : public wxFrame
{
private:
	Main* temp;
public:

	Factory(Main* temp);
	wxButton* btnAdd = nullptr;
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
	wxButton* btnDiv = nullptr;
	wxButton* btnClear = nullptr;
	wxButton* MakeAddButton();
	wxButton* MakeSubtractButton();
	wxButton* MakeDivideButton();
	wxButton* MakeModButton();
	wxButton* MakeBinaryButton();
	wxButton* MakeHexButton();
	wxButton* MakeMuiltButton();
	wxButton* MakeNegButton();
	wxButton* MakeDecButton();
	wxButton* MakeEqualButton();
	wxButton* MakeClearButton();
	wxButton* Make1Button();
	wxButton* Make2Button();
	wxButton* Make3Button();
	wxButton* Make4Button();
	wxButton* Make5Button();
	wxButton* Make6Button();
	wxButton* Make7Button();
	wxButton* Make8Button();
	wxButton* Make9Button();
	wxButton* Make0Button();


};

