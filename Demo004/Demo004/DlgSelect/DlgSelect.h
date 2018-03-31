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
	//��ʱ��
	virtual void timerEvent(QTimerEvent* event);
	//���ڱ��ر�
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
	bool m_working;//���ڳ齱
	int m_now;//��ǰ��ʾ

	int* m_flags;//���ظ���ȡ
	int m_total;//�ܹ�����ȡ���ܸ���
	int m_selected;//�Ѿ�����ȡ�ĸ���
};

#endif // DLGSELECT_H
