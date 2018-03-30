#ifndef DISPENSER_H
#define DISPENSER_H
#include <QtWidgets/QMainWindow>
#include "ui_dispenser.h"
#include "src/dllmain.h"
#using <System.dll>

using namespace System;
using namespace System::IO::Ports;
using namespace System::ComponentModel;
using namespace System::Threading;
using namespace std;
class Dispenser : public QMainWindow
{
	Q_OBJECT

public:
	Dispenser(QWidget *parent = 0);
	~Dispenser();

	//Rs232MotionData *md = new Rs232MotionData;

	void MtInit();
	void MtReflashWait();
	void on_btnXPlus_clicked();
	void on_btnXMinus_clicked();
	void on_btnYPlus_clicked();
	void on_btnYMinus_clicked();
	void on_btnZPlus_clicked();
	void on_btnZMinus_clicked();
	void on_btnUPlus_clicked();
	void on_btnUMinus_clicked();
	void on_btnVPlus_clicked();
	void on_btnVMinus_clicked();
	bool on_btnHome_clicked();
	
private:
	Ui::DispenserClass ui;
};

#endif // DISPENSER_H
