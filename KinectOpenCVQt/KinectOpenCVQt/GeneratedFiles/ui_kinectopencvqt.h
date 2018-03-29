/********************************************************************************
** Form generated from reading UI file 'kinectopencvqt.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KINECTOPENCVQT_H
#define UI_KINECTOPENCVQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KinectOpenCVQtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KinectOpenCVQtClass)
    {
        if (KinectOpenCVQtClass->objectName().isEmpty())
            KinectOpenCVQtClass->setObjectName(QStringLiteral("KinectOpenCVQtClass"));
        KinectOpenCVQtClass->resize(600, 400);
        menuBar = new QMenuBar(KinectOpenCVQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        KinectOpenCVQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KinectOpenCVQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        KinectOpenCVQtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(KinectOpenCVQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        KinectOpenCVQtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(KinectOpenCVQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KinectOpenCVQtClass->setStatusBar(statusBar);

        retranslateUi(KinectOpenCVQtClass);

        QMetaObject::connectSlotsByName(KinectOpenCVQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *KinectOpenCVQtClass)
    {
        KinectOpenCVQtClass->setWindowTitle(QApplication::translate("KinectOpenCVQtClass", "KinectOpenCVQt", 0));
    } // retranslateUi

};

namespace Ui {
    class KinectOpenCVQtClass: public Ui_KinectOpenCVQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KINECTOPENCVQT_H
