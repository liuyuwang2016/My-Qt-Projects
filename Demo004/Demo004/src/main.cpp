#include "demo004.h"
#include <QtWidgets/QApplication>
#include "AfCd.h"
#include "DlgSelect.h"

int main(int argc, char *argv[])
{
	AfCd::cd();
	QApplication a(argc, argv);
	Demo004 w;
	w.show();
	return a.exec();
}
