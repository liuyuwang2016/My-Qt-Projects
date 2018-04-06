#ifndef TEST11_1A_H
#define TEST11_1A_H

#include <QtGui/QMainWindow>
#include "ui_test11_1a.h"

class Test11_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_1A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_1A();

private:
	Ui::Test11_1AClass ui;
};

#endif // TEST11_1A_H
