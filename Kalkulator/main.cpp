#include "Kalkulator.h"
#include "Expression.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Kalkulator w;
	Expression e;
	int temp = 0;
	w.show();
	return a.exec();
}
