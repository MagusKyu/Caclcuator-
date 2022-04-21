#include "Main.h"
#include <sstream>
#include <string>
#include <iomanip>  
#include "Factory.h"


wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(100, OnButtonClick)
EVT_BUTTON(200, OnButtonClick)
EVT_BUTTON(300, OnButtonClick)
EVT_BUTTON(400, OnButtonClick)
EVT_BUTTON(500, OnButtonClick)
EVT_BUTTON(600, OnButtonClick)
EVT_BUTTON(700, OnButtonClick)
EVT_BUTTON(800, OnButtonClick)
EVT_BUTTON(900, OnButtonClick)
EVT_BUTTON(1000, OnButtonClick)
EVT_BUTTON(1100, OnButtonClick)
EVT_BUTTON(1200, OnButtonClick)
EVT_BUTTON(1300, OnButtonClick)
EVT_BUTTON(1400, OnButtonClick)
EVT_BUTTON(1500, OnButtonClick)
EVT_BUTTON(1600, OnButtonClick)
EVT_BUTTON(1700, OnButtonClick)
EVT_BUTTON(1800, OnButtonClick)
EVT_BUTTON(1900, OnButtonClick)
EVT_BUTTON(1801, OnButtonClick)
EVT_BUTTON(1901, OnButtonClick)


wxEND_EVENT_TABLE()
Main::Main() : wxFrame(nullptr, wxID_ANY, "Main", wxPoint(200, 200), wxSize(400, 400))
{

	Factory factory(this);
	btnPlus = factory.MakeAddButton();
	btnSub = factory.MakeSubtractButton();
	btnDiv = factory.MakeDivideButton();
	btnMod = factory.MakeModButton();
	btnBin = factory.MakeBinaryButton();
	btnHex = factory.MakeHexButton();
	btnMuilt = factory.MakeMuiltButton();
	btnNeg = factory.MakeNegButton();
	btnDec = factory.MakeDecButton();
	btnEqual = factory.MakeEqualButton();
	btnClear = factory.MakeClearButton();
	btn9 = factory.Make9Button();
	btn8 = factory.Make8Button();
	btn7 = factory.Make7Button();
	btn6 = factory.Make6Button();
	btn5 = factory.Make5Button();
	btn4 = factory.Make4Button();
	btn3 = factory.Make3Button();
	btn2 = factory.Make2Button();
	btn1 = factory.Make1Button();
	btn0 = factory.Make0Button();
	
}

void Main::OnButtonClick(wxCommandEvent& ext)
{
	processor->ButtonClick(ext);
}
