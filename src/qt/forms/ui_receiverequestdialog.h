/********************************************************************************
** Form generated from reading UI file 'receiverequestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEREQUESTDIALOG_H
#define UI_RECEIVEREQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "qt/qrimagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveRequestDialog
{
public:
    QGridLayout *gridLayout;
    QRImageWidget *qr_code;
    QLabel *payment_header;
    QLabel *uri_tag;
    QLabel *uri_content;
    QLabel *address_tag;
    QLabel *address_content;
    QLabel *amount_tag;
    QLabel *amount_content;
    QLabel *label_tag;
    QLabel *label_content;
    QLabel *message_tag;
    QLabel *message_content;
    QLabel *wallet_tag;
    QLabel *wallet_content;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCopyURI;
    QPushButton *btnCopyAddress;
    QPushButton *btnVerify;
    QPushButton *btnSaveAs;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ReceiveRequestDialog)
    {
        if (ReceiveRequestDialog->objectName().isEmpty())
            ReceiveRequestDialog->setObjectName(QString::fromUtf8("ReceiveRequestDialog"));
        ReceiveRequestDialog->resize(413, 229);
        gridLayout = new QGridLayout(ReceiveRequestDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        qr_code = new QRImageWidget(ReceiveRequestDialog);
        qr_code->setObjectName(QString::fromUtf8("qr_code"));
        qr_code->setText(QString::fromUtf8("QR image"));
        qr_code->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(qr_code, 0, 0, 1, 2, Qt::AlignHCenter);

        payment_header = new QLabel(ReceiveRequestDialog);
        payment_header->setObjectName(QString::fromUtf8("payment_header"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        payment_header->setFont(font);
        payment_header->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(payment_header, 1, 0, 1, 2);

        uri_tag = new QLabel(ReceiveRequestDialog);
        uri_tag->setObjectName(QString::fromUtf8("uri_tag"));
        uri_tag->setFont(font);
        uri_tag->setText(QString::fromUtf8("URI:"));
        uri_tag->setTextFormat(Qt::PlainText);
        uri_tag->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(uri_tag, 2, 0, 1, 1, Qt::AlignRight|Qt::AlignTop);

        uri_content = new QLabel(ReceiveRequestDialog);
        uri_content->setObjectName(QString::fromUtf8("uri_content"));
        uri_content->setText(QString::fromUtf8("xero:BC1\342\200\246"));
        uri_content->setTextFormat(Qt::RichText);
        uri_content->setWordWrap(true);
        uri_content->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(uri_content, 2, 1, 1, 1, Qt::AlignTop);

        address_tag = new QLabel(ReceiveRequestDialog);
        address_tag->setObjectName(QString::fromUtf8("address_tag"));
        address_tag->setFont(font);
        address_tag->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(address_tag, 3, 0, 1, 1, Qt::AlignRight|Qt::AlignTop);

        address_content = new QLabel(ReceiveRequestDialog);
        address_content->setObjectName(QString::fromUtf8("address_content"));
        address_content->setText(QString::fromUtf8("bc1\342\200\246"));
        address_content->setTextFormat(Qt::PlainText);
        address_content->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(address_content, 3, 1, 1, 1, Qt::AlignTop);

        amount_tag = new QLabel(ReceiveRequestDialog);
        amount_tag->setObjectName(QString::fromUtf8("amount_tag"));
        amount_tag->setFont(font);
        amount_tag->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(amount_tag, 4, 0, 1, 1, Qt::AlignRight|Qt::AlignTop);

        amount_content = new QLabel(ReceiveRequestDialog);
        amount_content->setObjectName(QString::fromUtf8("amount_content"));
        amount_content->setText(QString::fromUtf8("0.00000000 XRO"));
        amount_content->setTextFormat(Qt::PlainText);
        amount_content->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(amount_content, 4, 1, 1, 1, Qt::AlignTop);

        label_tag = new QLabel(ReceiveRequestDialog);
        label_tag->setObjectName(QString::fromUtf8("label_tag"));
        label_tag->setFont(font);
        label_tag->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_tag, 5, 0, 1, 1, Qt::AlignRight|Qt::AlignTop);

        label_content = new QLabel(ReceiveRequestDialog);
        label_content->setObjectName(QString::fromUtf8("label_content"));
        label_content->setText(QString::fromUtf8("label content"));
        label_content->setTextFormat(Qt::PlainText);
        label_content->setWordWrap(true);
        label_content->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_content, 5, 1, 1, 1, Qt::AlignTop);

        message_tag = new QLabel(ReceiveRequestDialog);
        message_tag->setObjectName(QString::fromUtf8("message_tag"));
        message_tag->setFont(font);
        message_tag->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(message_tag, 6, 0, 1, 1, Qt::AlignRight|Qt::AlignTop);

        message_content = new QLabel(ReceiveRequestDialog);
        message_content->setObjectName(QString::fromUtf8("message_content"));
        message_content->setText(QString::fromUtf8("message content"));
        message_content->setTextFormat(Qt::PlainText);
        message_content->setWordWrap(true);
        message_content->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(message_content, 6, 1, 1, 1, Qt::AlignTop);

        wallet_tag = new QLabel(ReceiveRequestDialog);
        wallet_tag->setObjectName(QString::fromUtf8("wallet_tag"));
        wallet_tag->setFont(font);
        wallet_tag->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(wallet_tag, 7, 0, 1, 1, Qt::AlignRight|Qt::AlignTop);

        wallet_content = new QLabel(ReceiveRequestDialog);
        wallet_content->setObjectName(QString::fromUtf8("wallet_content"));
        wallet_content->setText(QString::fromUtf8("wallet name"));
        wallet_content->setTextFormat(Qt::PlainText);
        wallet_content->setWordWrap(true);
        wallet_content->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout->addWidget(wallet_content, 7, 1, 1, 1, Qt::AlignTop);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnCopyURI = new QPushButton(ReceiveRequestDialog);
        btnCopyURI->setObjectName(QString::fromUtf8("btnCopyURI"));
        btnCopyURI->setAutoDefault(false);

        horizontalLayout->addWidget(btnCopyURI);

        btnCopyAddress = new QPushButton(ReceiveRequestDialog);
        btnCopyAddress->setObjectName(QString::fromUtf8("btnCopyAddress"));
        btnCopyAddress->setAutoDefault(false);

        horizontalLayout->addWidget(btnCopyAddress);

        btnVerify = new QPushButton(ReceiveRequestDialog);
        btnVerify->setObjectName(QString::fromUtf8("btnVerify"));
        btnVerify->setAutoDefault(false);

        horizontalLayout->addWidget(btnVerify);

        btnSaveAs = new QPushButton(ReceiveRequestDialog);
        btnSaveAs->setObjectName(QString::fromUtf8("btnSaveAs"));
        btnSaveAs->setAutoDefault(false);

        horizontalLayout->addWidget(btnSaveAs);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(ReceiveRequestDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setFocusPolicy(Qt::StrongFocus);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 2);

        gridLayout->setColumnStretch(1, 1);
        QWidget::setTabOrder(buttonBox, btnCopyURI);
        QWidget::setTabOrder(btnCopyURI, btnCopyAddress);
        QWidget::setTabOrder(btnCopyAddress, btnSaveAs);

        retranslateUi(ReceiveRequestDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ReceiveRequestDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ReceiveRequestDialog);
    } // setupUi

    void retranslateUi(QDialog *ReceiveRequestDialog)
    {
        ReceiveRequestDialog->setWindowTitle(QCoreApplication::translate("ReceiveRequestDialog", "Request payment to \342\200\246", nullptr));
        payment_header->setText(QCoreApplication::translate("ReceiveRequestDialog", "Payment information", nullptr));
        address_tag->setText(QCoreApplication::translate("ReceiveRequestDialog", "Address:", nullptr));
        amount_tag->setText(QCoreApplication::translate("ReceiveRequestDialog", "Amount:", nullptr));
        label_tag->setText(QCoreApplication::translate("ReceiveRequestDialog", "Label:", nullptr));
        message_tag->setText(QCoreApplication::translate("ReceiveRequestDialog", "Message:", nullptr));
        wallet_tag->setText(QCoreApplication::translate("ReceiveRequestDialog", "Wallet:", nullptr));
        btnCopyURI->setText(QCoreApplication::translate("ReceiveRequestDialog", "Copy &URI", nullptr));
        btnCopyAddress->setText(QCoreApplication::translate("ReceiveRequestDialog", "Copy &Address", nullptr));
        btnVerify->setText(QCoreApplication::translate("ReceiveRequestDialog", "&Verify", nullptr));
#if QT_CONFIG(tooltip)
        btnVerify->setToolTip(QCoreApplication::translate("ReceiveRequestDialog", "Verify this address on e.g. a hardware wallet screen", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSaveAs->setText(QCoreApplication::translate("ReceiveRequestDialog", "&Save Image\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReceiveRequestDialog: public Ui_ReceiveRequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEREQUESTDIALOG_H
