#include "myglwidget.h"
#include "GL/freeglut.h"
#include "GL/GLU.h"
#include <QtGui>
#include <QtCore>
MyGLWidget::MyGLWidget(QWidget *parent)
	: QOpenGLWidget(parent)
{
	fullscreen = false;
}

MyGLWidget::~MyGLWidget()
{

}

void MyGLWidget::initializeGL()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_SMOOTH);
	glClearDepth(1.0);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);//����ϵͳ��͸�ӽ�������
}

void MyGLWidget::resizeGL(int w, int h)
{
	glViewport(0, 0, (GLint)w, (GLint)h);               //���õ�ǰ���ӿ�  
	glMatrixMode(GL_PROJECTION);                        //ѡ��ͶӰ����  
	glLoadIdentity();                                   //����ͶӰ����  
	//�����ӿڵĴ�С  
	gluPerspective(45.0, (GLfloat)w / (GLfloat)h, 0.1, 100.0);
	glMatrixMode(GL_MODELVIEW);                         //ѡ��ģ�͹۲����  
	glLoadIdentity();
}

void MyGLWidget::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //�����Ļ����Ȼ���  
	glLoadIdentity();
}

void MyGLWidget::keyPressEvent(QKeyEvent *event)
{
	switch (event->key())
	{
		//F1Ϊȫ������ͨ�����л���  
	case Qt::Key_F1:
		fullscreen = !fullscreen;
		if (fullscreen)
		{
			showFullScreen();
		}
		else
		{
			showNormal();
		}
		updateGL();
		break;
		//ESCΪ�˳���  
	case Qt::Key_Escape:
		close();
	}
}
