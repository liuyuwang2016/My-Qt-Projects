#include "qtstylesheet.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtStyleSheet w;
	w.show();
	return a.exec();
}
