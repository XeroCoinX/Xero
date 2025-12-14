/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qt/qvalidatedlineedit.h"
#include "qt/xeroamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *payToLabel;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *labellLabel;
    QLineEdit *addAsLabel;
    QLabel *amountLabel;
    QHBoxLayout *horizontalLayoutAmount;
    XeroAmountField *payAmount;
    QCheckBox *checkboxSubtractFeeFromAmount;
    QPushButton *useAvailableBalanceButton;
    QLabel *messageLabel;
    QLabel *messageTextLabel;
    QFrame *line;

    void setupUi(QWidget *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QString::fromUtf8("SendCoinsEntry"));
        SendCoinsEntry->resize(729, 150);
        SendCoinsEntry->setFocusPolicy(Qt::TabFocus);
        SendCoinsEntry->setAutoFillBackground(false);
        gridLayout = new QGridLayout(SendCoinsEntry);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(-1, 8, -1, 4);
        payToLabel = new QLabel(SendCoinsEntry);
        payToLabel->setObjectName(QString::fromUtf8("payToLabel"));
        payToLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(payToLabel, 0, 0, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(0);
        payToLayout->setObjectName(QString::fromUtf8("payToLayout"));
        payTo = new QValidatedLineEdit(SendCoinsEntry);
        payTo->setObjectName(QString::fromUtf8("payTo"));

        payToLayout->addWidget(payTo);

        addressBookButton = new QToolButton(SendCoinsEntry);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setIconSize(QSize(22, 22));

        payToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendCoinsEntry);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);
        pasteButton->setIconSize(QSize(22, 22));

        payToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(SendCoinsEntry);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(22, 22));

        payToLayout->addWidget(deleteButton);


        gridLayout->addLayout(payToLayout, 0, 1, 1, 1);

        labellLabel = new QLabel(SendCoinsEntry);
        labellLabel->setObjectName(QString::fromUtf8("labellLabel"));
        labellLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labellLabel, 1, 0, 1, 1);

        addAsLabel = new QLineEdit(SendCoinsEntry);
        addAsLabel->setObjectName(QString::fromUtf8("addAsLabel"));

        gridLayout->addWidget(addAsLabel, 1, 1, 1, 1);

        amountLabel = new QLabel(SendCoinsEntry);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));
        amountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(amountLabel, 2, 0, 1, 1);

        horizontalLayoutAmount = new QHBoxLayout();
        horizontalLayoutAmount->setObjectName(QString::fromUtf8("horizontalLayoutAmount"));
        payAmount = new XeroAmountField(SendCoinsEntry);
        payAmount->setObjectName(QString::fromUtf8("payAmount"));

        horizontalLayoutAmount->addWidget(payAmount);

        checkboxSubtractFeeFromAmount = new QCheckBox(SendCoinsEntry);
        checkboxSubtractFeeFromAmount->setObjectName(QString::fromUtf8("checkboxSubtractFeeFromAmount"));

        horizontalLayoutAmount->addWidget(checkboxSubtractFeeFromAmount);

        useAvailableBalanceButton = new QPushButton(SendCoinsEntry);
        useAvailableBalanceButton->setObjectName(QString::fromUtf8("useAvailableBalanceButton"));

        horizontalLayoutAmount->addWidget(useAvailableBalanceButton);

        horizontalLayoutAmount->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayoutAmount, 2, 1, 1, 1);

        messageLabel = new QLabel(SendCoinsEntry);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(messageLabel, 3, 0, 1, 1);

        messageTextLabel = new QLabel(SendCoinsEntry);
        messageTextLabel->setObjectName(QString::fromUtf8("messageTextLabel"));
        messageTextLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(messageTextLabel, 3, 1, 1, 1);

        line = new QFrame(SendCoinsEntry);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 2);

#if QT_CONFIG(shortcut)
        payToLabel->setBuddy(payTo);
        labellLabel->setBuddy(addAsLabel);
        amountLabel->setBuddy(payAmount);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(payTo, addressBookButton);
        QWidget::setTabOrder(addressBookButton, pasteButton);
        QWidget::setTabOrder(pasteButton, deleteButton);
        QWidget::setTabOrder(deleteButton, addAsLabel);
        QWidget::setTabOrder(addAsLabel, payAmount);

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QWidget *SendCoinsEntry)
    {
        payToLabel->setText(QCoreApplication::translate("SendCoinsEntry", "Pay &To:", nullptr));
#if QT_CONFIG(tooltip)
        payTo->setToolTip(QCoreApplication::translate("SendCoinsEntry", "The Xero address to send the payment to", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addressBookButton->setToolTip(QCoreApplication::translate("SendCoinsEntry", "Choose previously used address", nullptr));
#endif // QT_CONFIG(tooltip)
        addressBookButton->setText(QString());
#if QT_CONFIG(shortcut)
        addressBookButton->setShortcut(QCoreApplication::translate("SendCoinsEntry", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pasteButton->setToolTip(QCoreApplication::translate("SendCoinsEntry", "Paste address from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        pasteButton->setText(QString());
#if QT_CONFIG(shortcut)
        pasteButton->setShortcut(QCoreApplication::translate("SendCoinsEntry", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        deleteButton->setToolTip(QCoreApplication::translate("SendCoinsEntry", "Remove this entry", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteButton->setText(QString());
        labellLabel->setText(QCoreApplication::translate("SendCoinsEntry", "&Label:", nullptr));
#if QT_CONFIG(tooltip)
        addAsLabel->setToolTip(QCoreApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to the list of used addresses", nullptr));
#endif // QT_CONFIG(tooltip)
        addAsLabel->setPlaceholderText(QCoreApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to the list of used addresses", nullptr));
        amountLabel->setText(QCoreApplication::translate("SendCoinsEntry", "A&mount:", nullptr));
#if QT_CONFIG(tooltip)
        payAmount->setToolTip(QCoreApplication::translate("SendCoinsEntry", "The amount to send in the selected unit", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkboxSubtractFeeFromAmount->setToolTip(QCoreApplication::translate("SendCoinsEntry", "The fee will be deducted from the amount being sent. The recipient will receive less xeros than you enter in the amount field. If multiple recipients are selected, the fee is split equally.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkboxSubtractFeeFromAmount->setText(QCoreApplication::translate("SendCoinsEntry", "S&ubtract fee from amount", nullptr));
        useAvailableBalanceButton->setText(QCoreApplication::translate("SendCoinsEntry", "Use available balance", nullptr));
        messageLabel->setText(QCoreApplication::translate("SendCoinsEntry", "Message:", nullptr));
#if QT_CONFIG(tooltip)
        messageTextLabel->setToolTip(QCoreApplication::translate("SendCoinsEntry", "A message that was attached to the xero: URI which will be stored with the transaction for your reference. Note: This message will not be sent over the Xero network.", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)SendCoinsEntry;
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
