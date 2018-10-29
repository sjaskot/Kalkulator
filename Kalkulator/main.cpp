#include "Kalkulator.h"
#include "Expression.h"
#include "StateMachine.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Kalkulator w;
    StateMachine CalculatorState(StateMachine States StateFirstNumber);
	Expression e;
	int temp = 0;
	w.show();
	return a.exec();
}
