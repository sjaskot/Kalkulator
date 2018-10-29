#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Kalkulator.h"

class Kalkulator : public QMainWindow
{
	Q_OBJECT

public:
	Kalkulator(QWidget *parent = Q_NULLPTR);

private:
	Ui::KalkulatorClass ui;
	void Kalkulator::ChangeDisplay(QString key);

public	slots:
	void Button0Clicked();
	void Button1Clicked();
	void Button2Clicked();
	void Button3Clicked();
	void Button4Clicked();
	void Button5Clicked();
	void Button6Clicked();
	void Button7Clicked();
	void Button8Clicked();
	void Button9Clicked();
	void ButtonComClicked();
	void ButtonBscClicked();
	void ButtonClrAllClicked();
	void ButtonAddClicked();
	void ButtonSubtractClicked();
	void ButtonMultiplyClicked();
	void ButtonDivisionClicked();
	void ButtonSquareClicked();
};
