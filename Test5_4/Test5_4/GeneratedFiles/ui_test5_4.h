/********************************************************************************
** Form generated from reading UI file 'test5_4.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_4_H
#define UI_TEST5_4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_4Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *textFile;
    QPushButton *btnSelect;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnSend;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_4Class)
    {
        if (Test5_4Class->objectName().isEmpty())
            Test5_4Class->setObjectName(QStringLiteral("Test5_4Class"));
        Test5_4Class->resize(361, 258);
        centralWidget = new QWidget(Test5_4Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textFile = new QLineEdit(centralWidget);
        textFile->setObjectName(QStringLiteral("textFile"));

        horizontalLayout_2->addWidget(textFile);

        btnSelect = new QPushButton(centralWidget);
        btnSelect->setObjectName(QStringLiteral("btnSelect"));

        horizontalLayout_2->addWidget(btnSelect);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSend = new QToolButton(centralWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(btnSend);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        Test5_4Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_4Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 361, 23));
        Test5_4Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_4Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test5_4Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_4Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test5_4Class->setStatusBar(statusBar);

        retranslateUi(Test5_4Class);

        QMetaObject::connectSlotsByName(Test5_4Class);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_4Class)
    {
        Test5_4Class->setWindowTitle(QApplication::translate("Test5_4Class", "Test5_4", 0));
        btnSelect->setText(QApplication::translate("Test5_4Class", "\346\265\217\350\247\210", 0));
        btnSend->setText(QApplication::translate("Test5_4Class", "\344\274\240\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Test5_4Class: public Ui_Test5_4Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_4_H
