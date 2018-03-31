#include "demo004.h"
#include <QListWidget>
#include "DlgSelect.h"

Demo004::Demo004(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_source.load();
	for (int i = 0; i < m_source.numbers.size(); i++)
	{
		string& number = m_source.numbers[i];

		//显示到列表控件
		QListWidgetItem* item = new QListWidgetItem();
		item->setText(number.c_str());
		ui.m_lstNumbers->addItem(item);//在第一个窗口内显示读取到的字符串
	}
	connect(ui.m_btnEnter, SIGNAL(clicked()), this, SLOT(onEnter()));
}

Demo004::~Demo004()
{

}

int Demo004::onEnter()
{
	QStringList numbers;
	for (int i = 0; i < m_source.numbers.size(); i++)
	{
		string& value = m_source.numbers[i];
		numbers.append(value.c_str());
	}
	this->hide();
	DlgSelect dlg(&numbers, this);
	dlg.exec();
	this->showNormal();
	this->activateWindow();
	return 0;
}
