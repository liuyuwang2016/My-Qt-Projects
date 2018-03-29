#ifndef KINECTOPENCVQT_H
#define KINECTOPENCVQT_H

#include <QtWidgets/QMainWindow>
#include "ui_kinectopencvqt.h"

class KinectOpenCVQt : public QMainWindow
{
	Q_OBJECT

public:
	KinectOpenCVQt(QWidget *parent = 0);
	~KinectOpenCVQt();

private:
	Ui::KinectOpenCVQtClass ui;
};

#endif // KINECTOPENCVQT_H
