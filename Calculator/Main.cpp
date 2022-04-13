#include "Main.h"
#include <sstream>
#include <string>
#include <iomanip>  
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
	btnPlus = new wxButton(this, 100, "+", wxPoint(30, 75), wxSize(75, 40)); 		 //done
	btnSub = new wxButton(this, 200, "-", wxPoint(110, 75), wxSize(75, 40));			 //done
	btnMuilt = new wxButton(this, 300, "*", wxPoint(190, 75), wxSize(75, 40));		 //done
	btn7 = new wxButton(this, 400, "7", wxPoint(30, 120), wxSize(75, 40));			 //done
	btn8 = new wxButton(this, 500, "8", wxPoint(110, 120), wxSize(75, 40));			 //done
	btn9 = new wxButton(this, 600, "9", wxPoint(190, 120), wxSize(75, 40));			 //done
	btn4 = new wxButton(this, 700, "4", wxPoint(30, 165), wxSize(75, 40));			 //done
	btn5 = new wxButton(this, 800, "5", wxPoint(110, 165), wxSize(75, 40));			 //done
	btn6 = new wxButton(this, 900, "6", wxPoint(190, 165), wxSize(75, 40));			 //done
	btn1 = new wxButton(this, 1000, "1", wxPoint(30, 210), wxSize(75, 40));			 //done
	btn2 = new wxButton(this, 1100, "2", wxPoint(110, 210), wxSize(75, 40));			 //done
	btn3 = new wxButton(this, 1200, "3", wxPoint(190, 210), wxSize(75, 40));		 //done
	btnNeg = new wxButton(this, 1300, "+/-", wxPoint(30, 255), wxSize(75, 40));      //done
	btn0 = new wxButton(this, 1400, "0", wxPoint(110, 255), wxSize(75, 40));          //done
	btnDec = new wxButton(this, 1500, ".", wxPoint(190, 255), wxSize(75, 40));       //done
	btnMod = new wxButton(this, 1600, "%", wxPoint(270, 120), wxSize(75, 40));		 //done
	btnBin = new wxButton(this, 1700, "Bin", wxPoint(270, 165), wxSize(75, 40));	 //done, unless needs deci
	btnHex = new wxButton(this, 1800, "Hex", wxPoint(270, 210), wxSize(75, 40));	 //done
	btnEqual = new wxButton(this, 1900, "=", wxPoint(270, 255), wxSize(75, 40));     //done
	btnDiv = new wxButton(this, 1801, "/", wxPoint(270, 75), wxSize(75, 40));		 //done
	btnClear = new wxButton(this, 1901, "Clear", wxPoint(30, 300), wxSize(315, 50));
	btnClear->SetForegroundColour(225);
	wxFont font(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(30, 10), wxSize(315, 55));
	text->SetFont(font);
}

void Main::OnButtonClick(wxCommandEvent& evt)
{

	if (evt.GetId() == 100)
	{
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 1;
		text->SetValue("0");

	}
	else if (evt.GetId() == 200) {
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 2;
		text->SetValue("0");
	}
	else if (evt.GetId() == 300) {
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 3;
		text->SetValue("0");
	}
	else if (evt.GetId() == 1600) {
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 4;
		text->SetValue("0");
	}
	else if (evt.GetId() == 1801)
	{
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 5;
		text->SetValue("0");
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
		if (text->GetValue() == "0")
		{
			text->SetValue("8");
		}
		else
		{
			text->AppendText("8");
		}

	}
	else if (evt.GetId() == 600) {
		if (text->GetValue() == "0")
		{
			text->SetValue("9");
		}
		else
		{
			text->AppendText("9");
		}
	}
	else if (evt.GetId() == 700) {
		if (text->GetValue() == "0")
		{
			text->SetValue("4");
		}
		else
		{
			text->AppendText("4");
		}
	}
	else if (evt.GetId() == 800) {
		if (text->GetValue() == "0")
		{
			text->SetValue("5");
		}
		else
		{
			text->AppendText("5");
		}
	}
	else if (evt.GetId() == 1000) {
		if (text->GetValue() == "0")
		{
			text->SetValue("1");
		}
		else
		{
			text->AppendText("1");
		}

	}
	else if (evt.GetId() == 1100) {
		if (text->GetValue() == "0")
		{
			text->SetValue("2");
		}
		else
		{
			text->AppendText("2");
		}
	}
	else if (evt.GetId() == 1200) {
		if (text->GetValue() == "0")
		{
			text->SetValue("3");
		}
		else
		{
			text->AppendText("3");
		}
	}
	else if (evt.GetId() == 1400) {
		if (text->GetValue() == "0")
		{
			text->SetValue("0");
		}
		else
		{
			text->AppendText("0");
		}
	}
	else if (evt.GetId() == 900) {
		if (text->GetValue() == "0")
		{
			text->SetValue("6");
		}
		else
		{
			text->AppendText("6");
		}
	}
	else if (evt.GetId() == 1300)	{

	fast = text->GetValue();
	
	text->Clear();
	int NegCheck = wxAtoi(fast);
	post = wxAtof(fast);
	if (NegCheck > 0)
	{
	text->SetValue("-");
	text->AppendText(fast);
	}
	else
	{
		answer = float(post) * -1;
		neg = wxString::Format(wxT("%g"), answer);
		text->SetValue(neg);
	}
	
	}
	else if (evt.GetId() == 1500) {
	text->AppendText(".");
	}
	else if (evt.GetId() == 1700) {
	fast = text->GetValue();
	Operand1 = wxAtof(fast);

	int binary = 0, remainder, product = 1;
	while (Operand1 != 0) 
	{
		remainder = (int)Operand1 % 2;
		binary = binary + (remainder * product);
		Operand1 = Operand1 / 2;
		product *= 10;
	}
	Res = wxString::Format(wxT("%g"),(float)binary);
	text->SetValue(Res);
}
	else if (evt.GetId() == 1800) {
	fast = text->GetValue();
	Operand1 = wxAtof(fast);
	std::stringstream ss;

	ss << std::hex << (int)Operand1; 
	std::string hexed(ss.str());
	text->SetValue("0x");
	answer = std::stof(hexed);
	 Res = wxString::Format(wxT("%g"), answer); 
	 text->AppendText(Res);
	
}
	else if (evt.GetId() == 1900) {
			last = text->GetValue();
			Operand2 = wxAtof(last);
		
			switch (Operators)
			{
			case 1:
				answer = float(Operand1) + float(Operand2);
				Res = wxString::Format(wxT("%f"),answer);
				text->SetValue(Res);
				
					break;
			
			case 2:
				answer = float(Operand1) - float(Operand2);
				Res = wxString::Format(wxT("%f"), answer);
				text->SetValue(Res);
				break;

			case 3:
				answer = float(Operand1) * float(Operand2);
				Res = wxString::Format(wxT("%f"), answer);
				text->SetValue(Res);
				break;
			case 4:
				answer = fmod(float(Operand1) , float(Operand2));
				Res = wxString::Format(wxT("%f"), answer);
				text->SetValue(Res);
				break;
			case 5: 
				answer = float(Operand1) / float(Operand2);
				Res = wxString::Format(wxT("%f"), answer);
				text->SetValue(Res);
				break;
			}
			

		
	}
	else if (evt.GetId() == 1901)
	{
	text->Clear();
	}
	evt.Skip();
}