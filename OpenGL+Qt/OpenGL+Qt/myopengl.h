#ifndef MYOPENGL_H
#define MYOPENGL_H

#include <QtWidgets/QMainWindow>
#include "ui_myopengl.h"

class myOpenGL : public QMainWindow
{
	Q_OBJECT

public:
	myOpenGL(QWidget *parent = 0);
	~myOpenGL();

private:
	Ui::myOpenGLClass ui;
};

#endif // MYOPENGL_H
