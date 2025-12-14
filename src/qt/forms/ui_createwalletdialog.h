/********************************************************************************
** Form generated from reading UI file 'createwalletdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWALLETDIALOG_H
#define UI_CREATEWALLETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateWalletDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *wallet_name_label;
    QLineEdit *wallet_name_line_edit;
    QCheckBox *encrypt_wallet_checkbox;
    QSpacerItem *verticalSpacer_1;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_groupbox;
    QCheckBox *disable_privkeys_checkbox;
    QCheckBox *blank_wallet_checkbox;
    QCheckBox *descriptor_checkbox;
    QCheckBox *external_signer_checkbox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateWalletDialog)
    {
        if (CreateWalletDialog->objectName().isEmpty())
            CreateWalletDialog->setObjectName(QString::fromUtf8("CreateWalletDialog"));
        CreateWalletDialog->resize(364, 249);
        CreateWalletDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(CreateWalletDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        wallet_name_label = new QLabel(CreateWalletDialog);
        wallet_name_label->setObjectName(QString::fromUtf8("wallet_name_label"));

        horizontalLayout->addWidget(wallet_name_label);

        wallet_name_line_edit = new QLineEdit(CreateWalletDialog);
        wallet_name_line_edit->setObjectName(QString::fromUtf8("wallet_name_line_edit"));
        wallet_name_line_edit->setMinimumSize(QSize(262, 0));

        horizontalLayout->addWidget(wallet_name_line_edit);


        verticalLayout->addLayout(horizontalLayout);

        encrypt_wallet_checkbox = new QCheckBox(CreateWalletDialog);
        encrypt_wallet_checkbox->setObjectName(QString::fromUtf8("encrypt_wallet_checkbox"));
        encrypt_wallet_checkbox->setChecked(false);

        verticalLayout->addWidget(encrypt_wallet_checkbox);

        verticalSpacer_1 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_1);

        groupBox = new QGroupBox(CreateWalletDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_groupbox = new QVBoxLayout(groupBox);
        verticalLayout_groupbox->setObjectName(QString::fromUtf8("verticalLayout_groupbox"));
        disable_privkeys_checkbox = new QCheckBox(groupBox);
        disable_privkeys_checkbox->setObjectName(QString::fromUtf8("disable_privkeys_checkbox"));
        disable_privkeys_checkbox->setEnabled(true);

        verticalLayout_groupbox->addWidget(disable_privkeys_checkbox);

        blank_wallet_checkbox = new QCheckBox(groupBox);
        blank_wallet_checkbox->setObjectName(QString::fromUtf8("blank_wallet_checkbox"));

        verticalLayout_groupbox->addWidget(blank_wallet_checkbox);

        descriptor_checkbox = new QCheckBox(groupBox);
        descriptor_checkbox->setObjectName(QString::fromUtf8("descriptor_checkbox"));
        descriptor_checkbox->setChecked(true);

        verticalLayout_groupbox->addWidget(descriptor_checkbox);

        external_signer_checkbox = new QCheckBox(groupBox);
        external_signer_checkbox->setObjectName(QString::fromUtf8("external_signer_checkbox"));

        verticalLayout_groupbox->addWidget(external_signer_checkbox);


        verticalLayout->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(CreateWalletDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(wallet_name_line_edit, encrypt_wallet_checkbox);
        QWidget::setTabOrder(encrypt_wallet_checkbox, disable_privkeys_checkbox);
        QWidget::setTabOrder(disable_privkeys_checkbox, blank_wallet_checkbox);
        QWidget::setTabOrder(blank_wallet_checkbox, descriptor_checkbox);
        QWidget::setTabOrder(descriptor_checkbox, external_signer_checkbox);

        retranslateUi(CreateWalletDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateWalletDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateWalletDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateWalletDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateWalletDialog)
    {
        CreateWalletDialog->setWindowTitle(QCoreApplication::translate("CreateWalletDialog", "Create Wallet", nullptr));
        wallet_name_label->setText(QCoreApplication::translate("CreateWalletDialog", "Wallet Name", nullptr));
        wallet_name_line_edit->setPlaceholderText(QCoreApplication::translate("CreateWalletDialog", "Wallet", nullptr));
#if QT_CONFIG(tooltip)
        encrypt_wallet_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Encrypt the wallet. The wallet will be encrypted with a passphrase of your choice.", nullptr));
#endif // QT_CONFIG(tooltip)
        encrypt_wallet_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Encrypt Wallet", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateWalletDialog", "Advanced Options", nullptr));
#if QT_CONFIG(tooltip)
        disable_privkeys_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Disable private keys for this wallet. Wallets with private keys disabled will have no private keys and cannot have an HD seed or imported private keys. This is ideal for watch-only wallets.", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_privkeys_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Disable Private Keys", nullptr));
#if QT_CONFIG(tooltip)
        blank_wallet_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Make a blank wallet. Blank wallets do not initially have private keys or scripts. Private keys and addresses can be imported, or an HD seed can be set, at a later time.", nullptr));
#endif // QT_CONFIG(tooltip)
        blank_wallet_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Make Blank Wallet", nullptr));
#if QT_CONFIG(tooltip)
        descriptor_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Use descriptors for scriptPubKey management", nullptr));
#endif // QT_CONFIG(tooltip)
        descriptor_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "Descriptor Wallet", nullptr));
#if QT_CONFIG(tooltip)
        external_signer_checkbox->setToolTip(QCoreApplication::translate("CreateWalletDialog", "Use an external signing device such as a hardware wallet. Configure the external signer script in wallet preferences first.", nullptr));
#endif // QT_CONFIG(tooltip)
        external_signer_checkbox->setText(QCoreApplication::translate("CreateWalletDialog", "External signer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateWalletDialog: public Ui_CreateWalletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWALLETDIALOG_H
