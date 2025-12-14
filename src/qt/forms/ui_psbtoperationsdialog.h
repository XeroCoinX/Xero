/********************************************************************************
** Form generated from reading UI file 'psbtoperationsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSBTOPERATIONSDIALOG_H
#define UI_PSBTOPERATIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PSBTOperationsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *mainDialogLayout;
    QLabel *statusBar;
    QTextEdit *transactionDescription;
    QHBoxLayout *buttonRowLayout;
    QPushButton *signTransactionButton;
    QPushButton *broadcastTransactionButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *copyToClipboardButton;
    QPushButton *saveButton;
    QPushButton *closeButton;

    void setupUi(QDialog *PSBTOperationsDialog)
    {
        if (PSBTOperationsDialog->objectName().isEmpty())
            PSBTOperationsDialog->setObjectName(QString::fromUtf8("PSBTOperationsDialog"));
        PSBTOperationsDialog->resize(585, 327);
        verticalLayout = new QVBoxLayout(PSBTOperationsDialog);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, -1, 12);
        mainDialogLayout = new QVBoxLayout();
        mainDialogLayout->setSpacing(5);
        mainDialogLayout->setObjectName(QString::fromUtf8("mainDialogLayout"));
        mainDialogLayout->setContentsMargins(-1, 0, -1, 0);
        statusBar = new QLabel(PSBTOperationsDialog);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        statusBar->setFont(font);
        statusBar->setAutoFillBackground(false);
        statusBar->setStyleSheet(QString::fromUtf8(""));

        mainDialogLayout->addWidget(statusBar);

        transactionDescription = new QTextEdit(PSBTOperationsDialog);
        transactionDescription->setObjectName(QString::fromUtf8("transactionDescription"));
        transactionDescription->setUndoRedoEnabled(false);
        transactionDescription->setReadOnly(true);

        mainDialogLayout->addWidget(transactionDescription);

        buttonRowLayout = new QHBoxLayout();
        buttonRowLayout->setSpacing(5);
        buttonRowLayout->setObjectName(QString::fromUtf8("buttonRowLayout"));
        signTransactionButton = new QPushButton(PSBTOperationsDialog);
        signTransactionButton->setObjectName(QString::fromUtf8("signTransactionButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(signTransactionButton->sizePolicy().hasHeightForWidth());
        signTransactionButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        signTransactionButton->setFont(font1);
        signTransactionButton->setAutoDefault(true);
        signTransactionButton->setFlat(false);

        buttonRowLayout->addWidget(signTransactionButton);

        broadcastTransactionButton = new QPushButton(PSBTOperationsDialog);
        broadcastTransactionButton->setObjectName(QString::fromUtf8("broadcastTransactionButton"));

        buttonRowLayout->addWidget(broadcastTransactionButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonRowLayout->addItem(horizontalSpacer);

        copyToClipboardButton = new QPushButton(PSBTOperationsDialog);
        copyToClipboardButton->setObjectName(QString::fromUtf8("copyToClipboardButton"));

        buttonRowLayout->addWidget(copyToClipboardButton);

        saveButton = new QPushButton(PSBTOperationsDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        buttonRowLayout->addWidget(saveButton);

        closeButton = new QPushButton(PSBTOperationsDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        buttonRowLayout->addWidget(closeButton);


        mainDialogLayout->addLayout(buttonRowLayout);


        verticalLayout->addLayout(mainDialogLayout);


        retranslateUi(PSBTOperationsDialog);

        signTransactionButton->setDefault(false);


        QMetaObject::connectSlotsByName(PSBTOperationsDialog);
    } // setupUi

    void retranslateUi(QDialog *PSBTOperationsDialog)
    {
        PSBTOperationsDialog->setWindowTitle(QCoreApplication::translate("PSBTOperationsDialog", "PSBT Operations", nullptr));
        statusBar->setText(QString());
        signTransactionButton->setText(QCoreApplication::translate("PSBTOperationsDialog", "Sign Tx", nullptr));
        broadcastTransactionButton->setText(QCoreApplication::translate("PSBTOperationsDialog", "Broadcast Tx", nullptr));
        copyToClipboardButton->setText(QCoreApplication::translate("PSBTOperationsDialog", "Copy to Clipboard", nullptr));
        saveButton->setText(QCoreApplication::translate("PSBTOperationsDialog", "Save\342\200\246", nullptr));
        closeButton->setText(QCoreApplication::translate("PSBTOperationsDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PSBTOperationsDialog: public Ui_PSBTOperationsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSBTOPERATIONSDIALOG_H
