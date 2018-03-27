#include "myopengl.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	myOpenGL w;
	w.show();
	return a.exec();
}
