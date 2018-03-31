#ifndef DLGSELECT_H
#define DLGSELECT_H

#include <QDialog>
#include "ui_DlgSelect.h"

class DlgSelect : public QDialog
{
	Q_OBJECT

public:
	DlgSelect(QStringList* numbers, QWidget *parent = 0);
	~DlgSelect();
	//定时器
	virtual void timerEvent(QTimerEvent* event);
	//窗口被关闭
	virtual void closeEvent(QCloseEvent* event);

private slots:
	int onSelectNext();	

private:
	int saveResults();

private:
	Ui::DlgSelect ui;
	QIcon m_iconStart, m_iconStop;

	QStringList* m_numbers;
	int m_timerId;
	bool m_working;//正在抽奖
	int m_now;//当前显示

	int* m_flags;//不重复抽取
	int m_total;//能够被抽取的总个数
	int m_selected;//已经被抽取的个数
};

#endif // DLGSELECT_H
