#include "Kalkulator.h"




Kalkulator::Kalkulator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.Button0, SIGNAL(clicked()), this, SLOT(Button0Clicked()));
	connect(ui.Button1, SIGNAL(clicked()), this, SLOT(Button1Clicked()));
	connect(ui.Button2, SIGNAL(clicked()), this, SLOT(Button2Clicked()));
	connect(ui.Button3, SIGNAL(clicked()), this, SLOT(Button3Clicked()));
	connect(ui.Button4, SIGNAL(clicked()), this, SLOT(Button4Clicked()));
	connect(ui.Button5, SIGNAL(clicked()), this, SLOT(Button5Clicked()));
	connect(ui.Button6, SIGNAL(clicked()), this, SLOT(Button6Clicked()));
	connect(ui.Button7, SIGNAL(clicked()), this, SLOT(Button7Clicked()));
	connect(ui.Button8, SIGNAL(clicked()), this, SLOT(Button8Clicked()));
	connect(ui.Button9, SIGNAL(clicked()), this, SLOT(Button9Clicked()));
	connect(ui.ButtonCom, SIGNAL(clicked()), this, SLOT(ButtonComClicked()));
	connect(ui.ButtonBsc, SIGNAL(clicked()), this, SLOT(ButtonBscClicked()));
	connect(ui.ButtonClrAll, SIGNAL(clicked()), this, SLOT(ButtonClrAllClicked()));
	connect(ui.ButtonAdd, SIGNAL(clicked()), this, SLOT(ButtonAddClicked()));
	connect(ui.ButtonSubtract, SIGNAL(clicked()), this, SLOT(ButtonSubtractClicked()));
	connect(ui.ButtonMultiply, SIGNAL(clicked()), this, SLOT(ButtonMultiplyClicked()));
	connect(ui.ButtonDivision, SIGNAL(clicked()), this, SLOT(ButtonDivisionClicked()));
	connect(ui.ButtonSquare, SIGNAL(clicked()), this, SLOT(ButtonSquareClicked()));

	ui.Display->setText("0");
}

void Kalkulator::Button0Clicked()
{
	this->ChangeDisplay("0");
}
void Kalkulator::Button1Clicked()
{
	this->ChangeDisplay("1");
}
void Kalkulator::Button2Clicked()
{
	this->ChangeDisplay("2");
}
void Kalkulator::Button3Clicked()
{
	this->ChangeDisplay("3");
}
void Kalkulator::Button4Clicked()
{
	this->ChangeDisplay("4");
}
void Kalkulator::Button5Clicked()
{
	this->ChangeDisplay("5");
}
void Kalkulator::Button6Clicked()
{
	this->ChangeDisplay("6");
}
void Kalkulator::Button7Clicked()
{
	this->ChangeDisplay("7");
}
void Kalkulator::Button8Clicked()
{
	this->ChangeDisplay("8");
}
void Kalkulator::Button9Clicked()
{
	this->ChangeDisplay("9");
}
void Kalkulator::ButtonComClicked()
{
	this->ChangeDisplay(".");
}
void Kalkulator::ButtonBscClicked()
{
	this->ChangeDisplay("Bsc");
}
void Kalkulator::ButtonClrAllClicked()
{
	this->ChangeDisplay("ClrAll");
}
void Kalkulator::ButtonAddClicked()
{
	this->ChangeDisplay("+");
}
void Kalkulator::ButtonSubtractClicked()
{
	this->ChangeDisplay("-");
}
void Kalkulator::ButtonMultiplyClicked()
{
	this->ChangeDisplay("*");
}
void Kalkulator::ButtonDivisionClicked()
{
	this->ChangeDisplay("/");
}
void Kalkulator::ButtonSquareClicked()
{
	this->ChangeDisplay("√");
}


void Kalkulator::ChangeDisplay(QString key)
{
	QString FromDisplay, ToDisplay;
	FromDisplay = ui.Display->text();
	float Number;
	char Operation;
	
	if (FromDisplay == "0")
	{
		if (FromDisplay == "0" && key == ".")
		{

		}
		else if (key == "Bsc")
		{
			return;
		}
		else if (key == "ClrAll")
		{
			return;
		}
		else
		{
			ui.Display->setText(key);
			return;
		}

	}

	if (FromDisplay.contains(".") && key == ".")
	{
		return;
	}
	

	if (key == "0" && FromDisplay== "0")
	{
		return;
	}
	
	if (FromDisplay.length() >= 10)
	{
		if (key == "Bsc")
		{
			FromDisplay.chop(1);
			ui.Display->setText(FromDisplay);
			return;
		}
		else if (key == "ClrAll")
		{
			ui.Display->setText("0");
			return;
		}
		else
		{
			return;
		}
	}
	

	if (key == "Bsc")
	{
	
		FromDisplay.chop(1);
		if (FromDisplay.length() == 0 )
		{
			ui.Display->setText("0");

		}
		else
		{
			ui.Display->setText(FromDisplay);
		}
		
		return;
	 }
	if (key == "ClrAll")
	{
		ui.Display->setText("0");
		return;
	}

	if (key != "+" && key != "-" && key != "*" && key != "/" && key != "√")
	{
		ToDisplay = FromDisplay + key;
		ui.Display->setText(ToDisplay);

	}
	 

	 if (key != "+" && key != "-" && key != "*" && key != "/" && key != "√")
	 {
		 // zamiana Qstring na char

	 }
	 else
	 {
		 Number = ToDisplay.toFloat();
	 }
	




//	if (FromDisplay == "0")
//	{
//		return;
//	}
//	else
//	{
//		ToDisplay = FromDisplay + "0";
//		ui.Display->setText(ToDisplay);
//	}
}