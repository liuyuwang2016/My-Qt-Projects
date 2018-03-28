#include "SendTask.h"
#include <string.h>
#include <QDebug>
SendTask::SendTask(QObject *parent)
	: QThread(parent)
{

}

SendTask::~SendTask()
{

}

int SendTask::BeginTask(const char* filename)
{
	strcpy(m_filepath, filename);
	m_filesize = 0;
	m_bytesread = 0;
	m_status = 0;
	start();//运行线程
	return 0;
}

void SendTask::DestroyTask()
{
	wait();	
}

int SendTask::GetStatus()
{
	return m_status;
}

int SendTask::GetProgress()
{
	if (m_filesize <= 0)
		return 0;
	return m_bytesread * 100 / m_filesize;
}

void SendTask::run() //线程的主函数
{
	FILE* fp = fopen(m_filepath, "rb");
	if (!fp)
	{
		m_status = -1;
		return;
	}
	fseek(fp, 0, SEEK_END);
	m_filesize = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	char buf[256];
	while (1)
	{
		int n = fread(buf, 1, 256, fp);
		if (n <= 0)
		{
			break;
		}
		m_bytesread += n;
		qDebug() << "Read:" << m_bytesread;
		QThread::msleep(1000);//模拟一下
	}

	fclose(fp);
	m_status = 1;//状态完成
	qDebug() << "Complete............";
}
