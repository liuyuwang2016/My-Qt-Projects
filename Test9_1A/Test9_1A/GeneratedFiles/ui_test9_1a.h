/********************************************************************************
** Form generated from reading UI file 'test9_1a.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_1A_H
#define UI_TEST9_1A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test9_1AClass
{
public:
    QAction *actionNew;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *Test9_1AClass)
    {
        if (Test9_1AClass->objectName().isEmpty())
            Test9_1AClass->setObjectName(QStringLiteral("Test9_1AClass"));
        Test9_1AClass->resize(600, 400);
        actionNew = new QAction(Test9_1AClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        centralWidget = new QWidget(Test9_1AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        Test9_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test9_1AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        Test9_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test9_1AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test9_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test9_1AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test9_1AClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(Test9_1AClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        Test9_1AClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(Test9_1AClass);

        QMetaObject::connectSlotsByName(Test9_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test9_1AClass)
    {
        Test9_1AClass->setWindowTitle(QApplication::translate("Test9_1AClass", "Test9_1A", 0));
        actionNew->setText(QApplication::translate("Test9_1AClass", "\346\226\260\345\273\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Test9_1AClass: public Ui_Test9_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_1A_H
