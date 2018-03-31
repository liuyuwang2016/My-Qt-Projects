/********************************************************************************
** Form generated from reading UI file 'DlgSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSELECT_H
#define UI_DLGSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DlgSelect
{
public:
    QToolButton *m_btnStart;
    QListWidget *m_lstResult;
    QLabel *m_ctlDisplay;

    void setupUi(QDialog *DlgSelect)
    {
        if (DlgSelect->objectName().isEmpty())
            DlgSelect->setObjectName(QStringLiteral("DlgSelect"));
        DlgSelect->setWindowModality(Qt::NonModal);
        DlgSelect->setEnabled(true);
        DlgSelect->resize(575, 162);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DlgSelect->sizePolicy().hasHeightForWidth());
        DlgSelect->setSizePolicy(sizePolicy);
        DlgSelect->setMinimumSize(QSize(300, 0));
        DlgSelect->setMouseTracking(false);
        DlgSelect->setSizeGripEnabled(false);
        m_btnStart = new QToolButton(DlgSelect);
        m_btnStart->setObjectName(QStringLiteral("m_btnStart"));
        m_btnStart->setGeometry(QRect(350, 10, 41, 131));
        sizePolicy.setHeightForWidth(m_btnStart->sizePolicy().hasHeightForWidth());
        m_btnStart->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Demo004/Resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_btnStart->setIcon(icon);
        m_btnStart->setIconSize(QSize(24, 24));
        m_lstResult = new QListWidget(DlgSelect);
        m_lstResult->setObjectName(QStringLiteral("m_lstResult"));
        m_lstResult->setGeometry(QRect(400, 10, 151, 131));
        m_ctlDisplay = new QLabel(DlgSelect);
        m_ctlDisplay->setObjectName(QStringLiteral("m_ctlDisplay"));
        m_ctlDisplay->setGeometry(QRect(20, 10, 311, 131));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_ctlDisplay->sizePolicy().hasHeightForWidth());
        m_ctlDisplay->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("PMingLiU"));
        font.setPointSize(28);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        m_ctlDisplay->setFont(font);
        m_ctlDisplay->setStyleSheet(QLatin1String("font: 28pt \"PMingLiU\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 0);"));

        retranslateUi(DlgSelect);

        QMetaObject::connectSlotsByName(DlgSelect);
    } // setupUi

    void retranslateUi(QDialog *DlgSelect)
    {
        DlgSelect->setWindowTitle(QApplication::translate("DlgSelect", "DlgSelect", 0));
        m_btnStart->setText(QApplication::translate("DlgSelect", "\345\274\200\345\247\213", 0));
        m_ctlDisplay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DlgSelect: public Ui_DlgSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSELECT_H
