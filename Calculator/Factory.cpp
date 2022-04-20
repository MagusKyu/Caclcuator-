#include "Factory.h"
#include "wx/wx.h"



wxFont btnfont(20, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
Factory::Factory(Main* temp_)
{
	temp = temp_;
}
wxButton* Factory::MakeAddButton() 
{

	btnAdd = new wxButton(temp, 100, "+", wxPoint(30, 75), wxSize(75, 40));
	btnAdd->SetBackgroundColour(wxColour(240, 214, 215));
	btnAdd->SetForegroundColour(wxColour(255, 255, 255));
	btnAdd->SetFont(btnfont);
	return btnAdd;
}

wxButton* Factory::MakeSubtractButton()
{
	btnSub = new wxButton(temp, 200, "-", wxPoint(110, 75), wxSize(75, 40));
	btnSub->SetBackgroundColour(wxColour(240, 214, 215));
	btnSub->SetForegroundColour(wxColour(255, 255, 255));
	btnSub->SetFont(btnfont);
	return btnSub;
}
wxButton* Factory::MakeDivideButton()
{
	btnDiv = new wxButton(temp, 1801, "/", wxPoint(270, 75), wxSize(75, 40));
	btnDiv->SetBackgroundColour(wxColour(240, 214, 215));
	btnDiv->SetForegroundColour(wxColour(255, 255, 255));
	btnDiv->SetFont(btnfont);
	return btnDiv;
}
wxButton* Factory::MakeModButton()
{
	btnMod = new wxButton(temp, 1600, "%", wxPoint(270, 120), wxSize(75, 40));
	btnMod->SetBackgroundColour(wxColour(240, 214, 215));
	btnMod->SetForegroundColour(wxColour(255, 255, 255));
	btnMod->SetFont(btnfont);
	return btnMod;
}
wxButton* Factory::MakeBinaryButton()
{
	btnBin = new wxButton(temp, 1700, "Bin", wxPoint(270, 165), wxSize(75, 40));
	btnBin->SetBackgroundColour(wxColour(240, 214, 215));
	btnBin->SetForegroundColour(wxColour(255, 255, 255));
	btnBin->SetFont(btnfont);
	return btnBin;
}
wxButton* Factory::MakeHexButton() 
{

	btnHex = new wxButton(temp, 1800, "Hex", wxPoint(270, 210), wxSize(75, 40));
	btnHex->SetBackgroundColour(wxColour(240, 214, 215));
	btnHex->SetForegroundColour(wxColour(255, 255, 255));
	btnHex->SetFont(btnfont);
	return btnHex;
}
wxButton* Factory::MakeMuiltButton()
{
	btnMuilt = new wxButton(temp, 300, "*", wxPoint(190, 75), wxSize(75, 40));
	btnMuilt->SetBackgroundColour(wxColour(240, 214, 215));
	btnMuilt->SetForegroundColour(wxColour(255, 255, 255));
	btnMuilt->SetFont(btnfont);
	return btnMuilt;

}
wxButton* Factory::MakeNegButton()
{
	btnNeg = new wxButton(temp, 1300, "+/-", wxPoint(30, 255), wxSize(75, 40));
	btnNeg->SetBackgroundColour(wxColour(240, 214, 215));
	btnNeg->SetForegroundColour(wxColour(255, 255, 255));
	btnNeg->SetFont(btnfont);
	return btnNeg;
	
}
wxButton* Factory::MakeDecButton()
{
	btnDec = new wxButton(temp, 1500, ".", wxPoint(190, 255), wxSize(75, 40));
	btnDec->SetBackgroundColour(wxColour(240, 214, 215));
	btnDec->SetForegroundColour(wxColour(255, 255, 255));
	btnDec->SetFont(btnfont);
	return btnDec;
}

wxButton* Factory::MakeEqualButton()
{
	btnEqual = new wxButton(temp, 1900, "=", wxPoint(270, 255), wxSize(75, 40));
	btnEqual->SetBackgroundColour(wxColour(240, 214, 215));
	btnEqual->SetForegroundColour(wxColour(255, 255, 255));
	btnEqual->SetFont(btnfont);
	return btnEqual;

}
wxButton* Factory::MakeClearButton()
{
	btnClear = new wxButton(temp, 1901, "Clear", wxPoint(30, 300), wxSize(315, 50));
	btnClear->SetBackgroundColour(wxColour(240, 214, 215));
	btnClear->SetForegroundColour(wxColour(255, 255, 255));
	btnClear->SetFont(btnfont);
	return btnClear;

}
wxButton*Factory::Make0Button()
{
	btn0 = new wxButton(temp, 1400, "0", wxPoint(110, 255), wxSize(75, 40));
	btn0->SetBackgroundColour(wxColour(240, 214, 215));
	btn0->SetForegroundColour(wxColour(255, 255, 255));
	btn0->SetFont(btnfont);
	return btn0;
}
wxButton* Factory::Make1Button() 
{
	btn1 = new wxButton(temp, 1000, "1", wxPoint(30, 210), wxSize(75, 40));
	btn1->SetBackgroundColour(wxColour(240, 214, 215));
	btn1->SetForegroundColour(wxColour(255, 255, 255));
	btn1->SetFont(btnfont);	
	return btn1;
}
wxButton* Factory::Make2Button() 
{
	btn2 = new wxButton(temp, 1100, "2", wxPoint(110, 210), wxSize(75, 40));
	btn2->SetBackgroundColour(wxColour(240, 214, 215));
	btn2->SetForegroundColour(wxColour(255, 255, 255));
	btn2->SetFont(btnfont);
	return btn2;
}
wxButton* Factory::Make3Button() 
{
	btn3 = new wxButton(temp, 1200, "3", wxPoint(190, 210), wxSize(75, 40));
	btn3->SetBackgroundColour(wxColour(240, 214, 215));	
	btn3->SetForegroundColour(wxColour(255, 255, 255));
	btn3->SetFont(btnfont);
	return btn3;
}
wxButton* Factory::Make4Button() 
{
	btn4 = new wxButton(temp, 700, "4", wxPoint(30, 165), wxSize(75, 40));		
	btn4->SetBackgroundColour(wxColour(240, 214, 215));
	btn4->SetForegroundColour(wxColour(255, 255, 255));	
	btn4->SetFont(btnfont);
	return btn4;
	
}
wxButton* Factory::Make5Button() 
{
	btn5 = new wxButton(temp, 800, "5", wxPoint(110, 165), wxSize(75, 40));
	btn5->SetBackgroundColour(wxColour(240, 214, 215));
	btn5->SetForegroundColour(wxColour(255, 255, 255));
	btn5->SetFont(btnfont);
	return btn5;
}
wxButton* Factory::Make6Button() 
{
	btn6 = new wxButton(temp, 900, "6", wxPoint(190, 165), wxSize(75, 40));
	btn6->SetBackgroundColour(wxColour(240, 214, 215));
	btn6->SetForegroundColour(wxColour(255, 255, 255));
	btn6->SetFont(btnfont);
	return btn6;
}
wxButton* Factory::Make7Button() 
{
	btn7 = new wxButton(temp, 400, "7", wxPoint(30, 120), wxSize(75, 40));
	btn7->SetBackgroundColour(wxColour(240, 214, 215));	
	btn7->SetForegroundColour(wxColour(255, 255, 255));
	btn7->SetFont(btnfont);
	return btn7;
}
wxButton* Factory::Make8Button() 
{
	btn8 = new wxButton(temp, 500, "8", wxPoint(110, 120), wxSize(75, 40));
	btn8->SetBackgroundColour(wxColour(240, 214, 215));
	btn8->SetForegroundColour(wxColour(255, 255, 255));
	btn8->SetFont(btnfont);
	return btn8;
}
wxButton* Factory::Make9Button() 
{
	btn9 = new wxButton(temp, 600, "9", wxPoint(190, 120), wxSize(75, 40));
	btn9->SetBackgroundColour(wxColour(240, 214, 215));
	btn9->SetForegroundColour(wxColour(255, 255, 255));
	btn9->SetFont(btnfont);
	return btn9;
}





