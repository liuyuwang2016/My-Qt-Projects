#ifndef SENDTASK_H
#define SENDTASK_H

#include <QThread>

class SendTask : public QThread
{
	Q_OBJECT

public:
	SendTask(QObject *parent);
	~SendTask();
	int BeginTask(const char* filename);
	void DestroyTask();
	int GetStatus();
	int GetProgress();
	
private:
	//�̵߳���ں���
	void run();
	char m_filepath[128];
	int m_filesize;//�ļ������ֽ���
	int m_bytesread;//�Ѿ���ȡ�������˶����ֽ�
	int m_status;//�����״̬
};

#endif // SENDTASK_H
