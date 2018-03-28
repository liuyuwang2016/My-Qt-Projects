#ifndef SENDDLG_H
#define SENDDLG_H

#include <QDialog>
#include "ui_SendDlg.h"
#include "SendTask.h"
class SendDlg : public QDialog
{
	Q_OBJECT

public:
	SendDlg(const QString& filepath, QWidget *parent = 0);
	~SendDlg();
	virtual void timerEvent(QTimerEvent* event) override;
private:
	Ui::SendDlg ui;

	SendTask* m_task;//工作线程
	int m_timerId;
};

#endif // SENDDLG_H
