/********************************************************************************
** Form generated from reading UI file 'demo004.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO004_H
#define UI_DEMO004_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Demo004Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QListWidget *m_lstNumbers;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *m_btnEnter;

    void setupUi(QMainWindow *Demo004Class)
    {
        if (Demo004Class->objectName().isEmpty())
            Demo004Class->setObjectName(QStringLiteral("Demo004Class"));
        Demo004Class->resize(415, 250);
        centralWidget = new QWidget(Demo004Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 30, 75, 23));
        m_lstNumbers = new QListWidget(centralWidget);
        m_lstNumbers->setObjectName(QStringLiteral("m_lstNumbers"));
        m_lstNumbers->setGeometry(QRect(20, 50, 381, 192));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 383, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(label);

        m_btnEnter = new QPushButton(widget);
        m_btnEnter->setObjectName(QStringLiteral("m_btnEnter"));

        horizontalLayout->addWidget(m_btnEnter);

        Demo004Class->setCentralWidget(centralWidget);
        m_lstNumbers->raise();
        pushButton->raise();

        retranslateUi(Demo004Class);

        QMetaObject::connectSlotsByName(Demo004Class);
    } // setupUi

    void retranslateUi(QMainWindow *Demo004Class)
    {
        Demo004Class->setWindowTitle(QApplication::translate("Demo004Class", "Demo004", 0));
        pushButton->setText(QApplication::translate("Demo004Class", "PushButton", 0));
        label->setText(QApplication::translate("Demo004Class", "\346\211\213\346\234\272\345\217\267\345\210\227\350\241\250", 0));
        m_btnEnter->setText(QApplication::translate("Demo004Class", "\350\277\233\345\205\245\346\212\275\345\245\226", 0));
    } // retranslateUi

};

namespace Ui {
    class Demo004Class: public Ui_Demo004Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO004_H
