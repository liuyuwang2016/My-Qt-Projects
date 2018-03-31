#include <QtGui>
#include <QMessageBox>
#include "DlgSelect.h"
#include "src/GBK.h"

DlgSelect::DlgSelect(QStringList* numbers, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_numbers = numbers;
	m_working = false;
	m_iconStart = QIcon("/Resourcers/play.png");
	m_iconStop = QIcon("/Resources/stop.png");

	//��ʼ����ʶλ��
	m_selected = 0;
	m_total = numbers->length();//����ܵĵ绰�������Ŀ
	m_flags = new int[m_total];//��ÿһ������ĵ绰����һ��flag
	for (int i = 0; i < m_total; i++)
	{
		m_flags[i] = 0;
	}
	connect(ui.m_btnStart, SIGNAL(clicked()), this, SLOT(onSelectNext));
}

DlgSelect::~DlgSelect()
{
	delete[] m_flags;
}

void DlgSelect::timerEvent(QTimerEvent* event)
{
	//������һ���绰����
	int next = m_now;
	while (1)
	{
		//��ͷ
		next++;
		if (next >= m_total)
			next = 0;
		//ȷ�����ظ�
		if (!m_flags[next])
			break;
	}
	m_now = next;
	//��ʾ
	ui.m_ctlDisplay->setText(m_numbers->at(m_now));
}

void DlgSelect::closeEvent(QCloseEvent* event)
{
	if (saveResults() < 0)
	{
		//event->ignore();
		return;
	}
	QDialog::closeEvent(event);
}

int DlgSelect::onSelectNext()
{
	if (m_selected >= m_total)
		return 0;
	if (!m_working)
	{
		//�����齱
		m_now = 0;
		m_timerId = startTimer(100);
		ui.m_btnStart->setIcon(m_iconStop);
		m_working = true;
	}
	else
	{
		//ֹͣ�齱
		killTimer(m_timerId);
		m_working = false;
		ui.m_btnStart->setIcon(m_iconStart);

		//
		m_flags[m_now] = 1;
		QString number = m_numbers->at(m_now);
		ui.m_lstResult->addItem(new QListWidgetItem(number));
	}
	return 0;
}


int DlgSelect::saveResults()
{
	// ��������浽�ļ�, append��ʽ
	FILE* fp = fopen("results.txt", "ab");
	if (!fp)
	{
		QMessageBox::critical(this,
			GBK::ToUnicode("���ش���"), "�޷�������!");
		return -1;
	}

	fprintf(fp, "----------- result ---------\n");

	// �ӽ���б���ȡ��������Ŀ�����浽�ļ���
	for (int i = 0; i < ui.m_lstResult->count(); i++)
	{
		QListWidgetItem* item = ui.m_lstResult->item(i);
		QString qValue = item->text();
		string number = GBK::FromUnicode(qValue);

		fprintf(fp, "%s\n", number.c_str());
	}
	fclose(fp);

	return 0;
}
