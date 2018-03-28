#include "test5_4.h"
#include <QFileDialog>
#include "SendDlg.h"

Test5_4::Test5_4(QWidget *parent)
: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnSelect, SIGNAL(clicked()), this, SLOT(OnBtnSelect()));
	connect(ui.btnSend, SIGNAL(clicked()), this, SLOT(OnSend()));

}

Test5_4::~Test5_4()
{

}

int Test5_4::OnBtnSelect()
{
	QString filepath = QFileDialog::getOpenFileName(this, "Choose a file");
	if (filepath.length() > 0)
	{
		ui.textFile->setText(filepath);
	}
	return 0;
}

int Test5_4::OnSend()
{
	QString filepath = ui.textFile->text();
	SendDlg dlg(filepath, this);
	dlg.exec();
	return 0;
}
