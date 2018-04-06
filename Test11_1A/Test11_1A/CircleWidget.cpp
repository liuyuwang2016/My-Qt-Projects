#include "CircleWidget.h"
#include <QPainter>

CircleWidget::CircleWidget(QWidget *parent)
	: QFrame(parent)
{

}

CircleWidget::~CircleWidget()
{

}

void CircleWidget::paintEvent ( QPaintEvent * event )
{
	QPainter painter(this);

	int width = this->width();
	int height = this->height();

	painter.setBrush(QBrush(QColor(0x00,0xFF, 0x00)));
	//painter.drawEllipse(QPoint(100,100), 100,100);
	painter.drawEllipse(0,0,width, height);
}
