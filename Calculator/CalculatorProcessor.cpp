#include "CalculatorProcessor.h"
#include "Main.h"

CalculatorProcessor::CalculatorProcessor()
{

}

void CalculatorProcessor::CreateTextWindow(Main* main)
{
	wxFont font(24, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	text = new wxTextCtrl(main, wxID_ANY, "", wxPoint(30, 10), wxSize(315, 55), wxTE_RIGHT);
	text->SetBackgroundColour(wxColour(0, 0, 0));
	text->SetForegroundColour(wxColour(255, 255, 255));
	text->SetFont(font);
}
void CalculatorProcessor::ButtonClick(wxCommandEvent& evt)
{
	if (evt.GetId() == 100)
	{
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 1;
		text->SetValue("+");
	}
	else if (evt.GetId() == 200) {
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 2;
		text->SetValue("-");
	}
	else if (evt.GetId() == 300) {
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 3;
		text->SetValue("*");
	}
	else if (evt.GetId() == 1600) {
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 4;
		text->SetValue("%");
	}
	else if (evt.GetId() == 1801)
	{
		fast = text->GetValue();
		Operand1 = wxAtof(fast);
		Operators = 5;
		text->SetValue("/");
	}

	else if (evt.GetId() == 400) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("7");
		}
		else
		{
			text->AppendText("7");
		}
	}
	else if (evt.GetId() == 500) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("8");
		}
		else
		{
			text->AppendText("8");
		}

	}
	else if (evt.GetId() == 600) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("9");
		}
		else
		{
			text->AppendText("9");
		}
	}
	else if (evt.GetId() == 700) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("4");
		}
		else
		{
			text->AppendText("4");
		}
	}
	else if (evt.GetId() == 800) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("5");
		}
		else
		{
			text->AppendText("5");
		}
	}
	else if (evt.GetId() == 1000) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("1");
		}
		else
		{
			text->AppendText("1");
		}

	}
	else if (evt.GetId() == 1100) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("2");
		}
		else
		{
			text->AppendText("2");
		}
	}
	else if (evt.GetId() == 1200) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("3");
		}
		else
		{
			text->AppendText("3");
		}
	}
	else if (evt.GetId() == 1400) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("0");
		}
		else
		{
			text->AppendText("0");
		}
	}
	else if (evt.GetId() == 900) {
		if (text->GetValue() == "+" || text->GetValue() == "-" || text->GetValue() == "%" || text->GetValue() == "*" || text->GetValue() == "/")
		{
			text->SetValue("6");
		}
		else
		{
			text->AppendText("6");
		}
	}
	else if (evt.GetId() == 1300) {
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
		Res = wxString::Format(wxT("%f"), (float)binary);
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
			Res = wxString::Format(wxT("%f"), answer);
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
			answer = fmod(float(Operand1), float(Operand2));
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
