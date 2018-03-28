#include "SendDlg.h"
#include "GBK.h"
SendDlg::SendDlg(const QString& filepath, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//把中文转换一下
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
		//获取工作线程当前的状态和进度并显示
		int status = m_task->GetStatus();
		int progress = m_task->GetProgress();
		ui.progressBar->setValue(progress);
		if (status == 1)
		{
			//销毁定时器
			m_task->DestroyTask();
			delete m_task; //在这里销毁线程
			killTimer(m_timerId);
			this->accept();
		}
	}
}
