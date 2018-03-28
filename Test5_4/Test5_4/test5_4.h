#ifndef TEST5_4_H
#define TEST5_4_H

#include <QtWidgets/QMainWindow>
#include "ui_test5_4.h"

class Test5_4 : public QMainWindow
{
	Q_OBJECT

public:
	Test5_4(QWidget *parent = 0);
	~Test5_4();
private slots:
	int OnBtnSelect();
	int OnSend();
private:
	Ui::Test5_4Class ui;
	
};

#endif // TEST5_4_H
