// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef XERO_QT_XEROADDRESSVALIDATOR_H
#define XERO_QT_XEROADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class XeroAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit XeroAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Xero address widget validator, checks for a valid xero address.
 */
class XeroAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit XeroAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // XERO_QT_XEROADDRESSVALIDATOR_H
