/********************************************************************************
** Form generated from reading UI file 'myopengl.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYOPENGL_H
#define UI_MYOPENGL_H

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

class Ui_myOpenGLClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *myOpenGLClass)
    {
        if (myOpenGLClass->objectName().isEmpty())
            myOpenGLClass->setObjectName(QStringLiteral("myOpenGLClass"));
        myOpenGLClass->resize(600, 400);
        menuBar = new QMenuBar(myOpenGLClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        myOpenGLClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myOpenGLClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        myOpenGLClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(myOpenGLClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        myOpenGLClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(myOpenGLClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        myOpenGLClass->setStatusBar(statusBar);

        retranslateUi(myOpenGLClass);

        QMetaObject::connectSlotsByName(myOpenGLClass);
    } // setupUi

    void retranslateUi(QMainWindow *myOpenGLClass)
    {
        myOpenGLClass->setWindowTitle(QApplication::translate("myOpenGLClass", "myOpenGL", 0));
    } // retranslateUi

};

namespace Ui {
    class myOpenGLClass: public Ui_myOpenGLClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYOPENGL_H
