#ifndef TEST9_1A_H
#define TEST9_1A_H

#include <QtWidgets/QMainWindow>
#include "ui_test9_1a.h"

class Test9_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test9_1A(QWidget *parent = 0);
	~Test9_1A();

private:
	Ui::Test9_1AClass ui;
};

#endif // TEST9_1A_H
