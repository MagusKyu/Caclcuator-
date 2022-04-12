#include "Main.h"
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


wxEND_EVENT_TABLE()
Main::Main() : wxFrame(nullptr, wxID_ANY, "Main", wxPoint(200, 200), wxSize(400, 400))
{
	btnPlus = new wxButton(this, 100, "+", wxPoint(10, 50), wxSize(75, 30));
	btnSub = new wxButton(this, 200, "-", wxPoint(90, 50), wxSize(75, 30));
	btnMuilt = new wxButton(this, 300, "*", wxPoint(170, 50), wxSize(75, 30));
	btn7 = new wxButton(this, 400, "7", wxPoint(10, 90), wxSize(75, 30));
	btn8 = new wxButton(this, 500, "8", wxPoint(90, 90), wxSize(75, 30));
	btn9 = new wxButton(this, 600, "9", wxPoint(170, 90), wxSize(75, 30));
	btn4 = new wxButton(this, 700, "4", wxPoint(10, 130), wxSize(75, 30));
	btn5 = new wxButton(this, 800, "5", wxPoint(90, 130), wxSize(75, 30));
	btn6 = new wxButton(this, 900, "6", wxPoint(170, 130), wxSize(75, 30));
	btn1 = new wxButton(this, 1000, "1", wxPoint(10, 170), wxSize(75, 30));
	btn2 = new wxButton(this, 1100, "2", wxPoint(90, 170), wxSize(75, 30));
	btn3 = new wxButton(this, 1200, "3", wxPoint(170, 170), wxSize(75, 30));
	btnNeg = new wxButton(this, 1300, "+/-", wxPoint(10, 210), wxSize(75, 30));
	btn0 = new wxButton(this, 1400, "0", wxPoint(90, 210), wxSize(75, 30));
	btnDec = new wxButton(this, 1500, ".", wxPoint(170, 210), wxSize(75, 30));
	btnMod = new wxButton(this, 1600, "%", wxPoint(250, 90), wxSize(75, 30));
	btnBin = new wxButton(this, 1700, "Bin", wxPoint(250, 130), wxSize(75, 30));
	btnHex = new wxButton(this, 1800, "Hex", wxPoint(250, 170), wxSize(75, 30));
	btnEqual = new wxButton(this, 1900, "=", wxPoint(250, 210), wxSize(75, 30));
	btnBack = new wxButton(this, 1800, "Backspace", wxPoint(250, 50), wxSize(75, 30));





	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(30, 10), wxSize(320, 30));
}

void Main::OnButtonClick(wxCommandEvent& evt)
{
	int value = 0;
	int Operand1 = 0;
	int Operand2 = 0;
	int Operators = 0;
	wxString fast;
	wxString last;
	wxString Res;
	float answer;
	if (evt.GetId() == 100)
	{		
		//getid isn't working, not setting operator to 1, it works just when I press a new button it undoes it
		fast = text->GetValue();
		Operand1 = wxAtoi(fast);
		Operators = 1;
		text->SetValue("0");

	}
	else if (evt.GetId() == 200) {
		text->AppendText("-");
	}
	else if (evt.GetId() == 300) {
		text->SetValue("*");
	}
	else if (evt.GetId() == 300) {
		text->SetValue("*");
	}
	else if (evt.GetId() == 400) {
		if (text->GetValue() == "0")
		{
			text->SetValue("7");
		}
		else 
		{
		text->AppendText("7");
		}
	}
	else if (evt.GetId() == 500) {
		text->AppendText("8");
	}
	else if (evt.GetId() == 600) {
		text->AppendText("9");
	}
	else if (evt.GetId() == 700) {
		text->AppendText("4");
	}
	else if (evt.GetId() == 800) {
		text->AppendText("5");
	}
	else if (evt.GetId() == 900) {
		text->AppendText("6");
	}
	else if (evt.GetId() == 1900) {
		int equaled = 0;
		last = text->GetValue();
			Operand2 = wxAtoi(last);
		
			switch (Operators)
			{
			case 1:
				answer = float(Operand1) + float(Operand2);
				Res = wxString::Format(wxT("%g"),answer);
				text->SetValue(Res);
					break;
			}
		
	}
	evt.Skip();
}