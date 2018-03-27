#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QOpenGLWidget>
#include <QtOpenGL>
#include <QGLWidget>
class MyGLWidget : public QOpenGLWidget
{
	Q_OBJECT

public:
	MyGLWidget(QWidget *parent);
	~MyGLWidget();
protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
	void keyPressEvent(QKeyEvent *event);
private slots:
	//updateGL();
private:
	bool fullscreen;
};

#endif // MYGLWIDGET_H
