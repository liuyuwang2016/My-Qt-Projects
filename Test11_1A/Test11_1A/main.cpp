#include "test11_1a.h"
#include <QtGui/QApplication>

#include "CircleWidget.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Test11_1A w;
	w.show();

// 	CircleWidget w(NULL);
// 	w.resize(400,300);
// 	w.move(200,200);
// 	w.show();

	return a.exec();
}
