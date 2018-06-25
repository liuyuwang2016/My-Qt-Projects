/********************************************************************************
** Form generated from reading UI file 'qtstylesheet.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSTYLESHEET_H
#define UI_QTSTYLESHEET_H

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

class Ui_QtStyleSheetClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtStyleSheetClass)
    {
        if (QtStyleSheetClass->objectName().isEmpty())
            QtStyleSheetClass->setObjectName(QStringLiteral("QtStyleSheetClass"));
        QtStyleSheetClass->resize(600, 400);
        menuBar = new QMenuBar(QtStyleSheetClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtStyleSheetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtStyleSheetClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtStyleSheetClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtStyleSheetClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtStyleSheetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtStyleSheetClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtStyleSheetClass->setStatusBar(statusBar);

        retranslateUi(QtStyleSheetClass);

        QMetaObject::connectSlotsByName(QtStyleSheetClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtStyleSheetClass)
    {
        QtStyleSheetClass->setWindowTitle(QApplication::translate("QtStyleSheetClass", "QtStyleSheet", 0));
    } // retranslateUi

};

namespace Ui {
    class QtStyleSheetClass: public Ui_QtStyleSheetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSTYLESHEET_H
