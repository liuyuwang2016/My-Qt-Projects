/********************************************************************************
** Form generated from reading UI file 'SendDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDDLG_H
#define UI_SENDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_SendDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;

    void setupUi(QDialog *SendDlg)
    {
        if (SendDlg->objectName().isEmpty())
            SendDlg->setObjectName(QStringLiteral("SendDlg"));
        SendDlg->resize(434, 83);
        horizontalLayout = new QHBoxLayout(SendDlg);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        progressBar = new QProgressBar(SendDlg);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        retranslateUi(SendDlg);

        QMetaObject::connectSlotsByName(SendDlg);
    } // setupUi

    void retranslateUi(QDialog *SendDlg)
    {
        SendDlg->setWindowTitle(QApplication::translate("SendDlg", "\345\217\221\351\200\201\350\277\233\345\272\246", 0));
    } // retranslateUi

};

namespace Ui {
    class SendDlg: public Ui_SendDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDDLG_H
