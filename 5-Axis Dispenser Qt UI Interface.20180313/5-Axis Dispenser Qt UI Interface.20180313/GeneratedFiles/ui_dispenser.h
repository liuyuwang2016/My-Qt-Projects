/********************************************************************************
** Form generated from reading UI file 'dispenser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPENSER_H
#define UI_DISPENSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DispenserClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btnXPlus;
    QPushButton *btnXMinus;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnYPlus;
    QPushButton *btnYMinus;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnZPlus;
    QPushButton *btnZMinus;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btnUPlus;
    QPushButton *btnUMinus;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnVPlus;
    QPushButton *btnVMinus;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btnClose;
    QPushButton *btnHome;
    QSpacerItem *horizontalSpacer_12;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DispenserClass)
    {
        if (DispenserClass->objectName().isEmpty())
            DispenserClass->setObjectName(QStringLiteral("DispenserClass"));
        DispenserClass->resize(472, 373);
        centralWidget = new QWidget(DispenserClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        btnXPlus = new QPushButton(centralWidget);
        btnXPlus->setObjectName(QStringLiteral("btnXPlus"));

        horizontalLayout_3->addWidget(btnXPlus);

        btnXMinus = new QPushButton(centralWidget);
        btnXMinus->setObjectName(QStringLiteral("btnXMinus"));

        horizontalLayout_3->addWidget(btnXMinus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btnYPlus = new QPushButton(centralWidget);
        btnYPlus->setObjectName(QStringLiteral("btnYPlus"));

        horizontalLayout_2->addWidget(btnYPlus);

        btnYMinus = new QPushButton(centralWidget);
        btnYMinus->setObjectName(QStringLiteral("btnYMinus"));

        horizontalLayout_2->addWidget(btnYMinus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btnZPlus = new QPushButton(centralWidget);
        btnZPlus->setObjectName(QStringLiteral("btnZPlus"));

        horizontalLayout->addWidget(btnZPlus);

        btnZMinus = new QPushButton(centralWidget);
        btnZMinus->setObjectName(QStringLiteral("btnZMinus"));

        horizontalLayout->addWidget(btnZMinus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        btnUPlus = new QPushButton(centralWidget);
        btnUPlus->setObjectName(QStringLiteral("btnUPlus"));

        horizontalLayout_4->addWidget(btnUPlus);

        btnUMinus = new QPushButton(centralWidget);
        btnUMinus->setObjectName(QStringLiteral("btnUMinus"));

        horizontalLayout_4->addWidget(btnUMinus);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        btnVPlus = new QPushButton(centralWidget);
        btnVPlus->setObjectName(QStringLiteral("btnVPlus"));

        horizontalLayout_5->addWidget(btnVPlus);

        btnVMinus = new QPushButton(centralWidget);
        btnVMinus->setObjectName(QStringLiteral("btnVMinus"));

        horizontalLayout_5->addWidget(btnVMinus);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        btnClose = new QPushButton(centralWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_6->addWidget(btnClose);

        btnHome = new QPushButton(centralWidget);
        btnHome->setObjectName(QStringLiteral("btnHome"));

        horizontalLayout_6->addWidget(btnHome);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_6);

        DispenserClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DispenserClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 472, 23));
        DispenserClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DispenserClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DispenserClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DispenserClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DispenserClass->setStatusBar(statusBar);

        retranslateUi(DispenserClass);
        QObject::connect(btnClose, SIGNAL(clicked()), DispenserClass, SLOT(close()));

        QMetaObject::connectSlotsByName(DispenserClass);
    } // setupUi

    void retranslateUi(QMainWindow *DispenserClass)
    {
        DispenserClass->setWindowTitle(QApplication::translate("DispenserClass", "Dispenser", 0));
        btnXPlus->setText(QApplication::translate("DispenserClass", "X++", 0));
        btnXMinus->setText(QApplication::translate("DispenserClass", "X--", 0));
        btnYPlus->setText(QApplication::translate("DispenserClass", "Y++", 0));
        btnYMinus->setText(QApplication::translate("DispenserClass", "Y--", 0));
        btnZPlus->setText(QApplication::translate("DispenserClass", "Z++", 0));
        btnZMinus->setText(QApplication::translate("DispenserClass", "Z--", 0));
        btnUPlus->setText(QApplication::translate("DispenserClass", "U++", 0));
        btnUMinus->setText(QApplication::translate("DispenserClass", "U--", 0));
        btnVPlus->setText(QApplication::translate("DispenserClass", "V++", 0));
        btnVMinus->setText(QApplication::translate("DispenserClass", "V--", 0));
        btnClose->setText(QApplication::translate("DispenserClass", "\345\205\263\351\227\255", 0));
        btnHome->setText(QApplication::translate("DispenserClass", "\345\233\236Home", 0));
    } // retranslateUi

};

namespace Ui {
    class DispenserClass: public Ui_DispenserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPENSER_H
