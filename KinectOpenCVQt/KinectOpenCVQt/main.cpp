#include "kinectopencvqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	KinectOpenCVQt w;
	w.show();
	return a.exec();
}
