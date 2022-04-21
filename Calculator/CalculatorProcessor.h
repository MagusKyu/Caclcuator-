#pragma once

#include "wx/wx.h"
#include <sstream>
#include <string>
#include <iomanip>  

class Main;

class CalculatorProcessor 
{
public :
	static CalculatorProcessor& GetInstance() 
	{
		static CalculatorProcessor processor;
		return processor;
	}
	void ButtonClick(wxCommandEvent& evt);
private:
	wxTextCtrl* text = nullptr;
public :
	CalculatorProcessor();
	CalculatorProcessor(CalculatorProcessor const&) = delete;
	void operator = (CalculatorProcessor const&) = delete;

	void CreateTextWindow(Main* main);
	float Operand1 = 0;
	float Operand2 = 0;
	int Operators = 0;
	wxString fast;
	wxString last;
	wxString Res;
	wxString neg;
	float post;
	float answer;
};

