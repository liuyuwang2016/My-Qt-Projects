#include "SendDlg.h"
#include "GBK.h"
SendDlg::SendDlg(const QString& filepath, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//������ת��һ��
	string gbk_filepath = GBK::FromUnicode(filepath);
	m_task = new SendTask(NULL);
	m_task->BeginTask(gbk_filepath.c_str());
	m_timerId = startTimer(500);
}

SendDlg::~SendDlg()
{

}

void SendDlg::timerEvent(QTimerEvent* event)
{
	if (event->timerId() == m_timerId)
	{
		//��ȡ�����̵߳�ǰ��״̬�ͽ��Ȳ���ʾ
		int status = m_task->GetStatus();
		int progress = m_task->GetProgress();
		ui.progressBar->setValue(progress);
		if (status == 1)
		{
			//���ٶ�ʱ��
			m_task->DestroyTask();
			delete m_task; //�����������߳�
			killTimer(m_timerId);
			this->accept();
		}
	}
}
