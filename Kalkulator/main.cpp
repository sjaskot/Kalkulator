#include "Kalkulator.h"
#include "Expression.h"
<<<<<<< HEAD
#include "StateMachine.h"
=======
>>>>>>> e0ecc22d81626a81742c95a161be26760a88a0b6
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Kalkulator w;
<<<<<<< HEAD
    StateMachine CalculatorState(StateMachine::States::StateFirstNumber);

=======
>>>>>>> e0ecc22d81626a81742c95a161be26760a88a0b6
	Expression e;
	int temp = 0;
	w.show();
	return a.exec();
}
