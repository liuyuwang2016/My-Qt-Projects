#ifndef QTSTYLESHEET_H
#define QTSTYLESHEET_H

#include <QtWidgets/QMainWindow>
#include "ui_qtstylesheet.h"

class QtStyleSheet : public QMainWindow
{
	Q_OBJECT

public:
	QtStyleSheet(QWidget *parent = 0);
	~QtStyleSheet();

private:
	Ui::QtStyleSheetClass ui;
};

#endif // QTSTYLESHEET_H
