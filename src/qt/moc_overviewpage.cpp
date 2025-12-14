/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[20];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 18), // "transactionClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 45, 5), // "index"
QT_MOC_LITERAL(5, 51, 23), // "outOfSyncWarningClicked"
QT_MOC_LITERAL(6, 75, 10), // "setBalance"
QT_MOC_LITERAL(7, 86, 26), // "interfaces::WalletBalances"
QT_MOC_LITERAL(8, 113, 8), // "balances"
QT_MOC_LITERAL(9, 122, 10), // "setPrivacy"
QT_MOC_LITERAL(10, 133, 7), // "privacy"
QT_MOC_LITERAL(11, 141, 20), // "LimitTransactionRows"
QT_MOC_LITERAL(12, 162, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(13, 180, 24), // "handleTransactionClicked"
QT_MOC_LITERAL(14, 205, 12), // "updateAlerts"
QT_MOC_LITERAL(15, 218, 8), // "warnings"
QT_MOC_LITERAL(16, 227, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(17, 249, 13), // "showWatchOnly"
QT_MOC_LITERAL(18, 263, 17), // "setMonospacedFont"
QT_MOC_LITERAL(19, 281, 17) // "use_embedded_font"

    },
    "OverviewPage\0transactionClicked\0\0"
    "QModelIndex\0index\0outOfSyncWarningClicked\0"
    "setBalance\0interfaces::WalletBalances\0"
    "balances\0setPrivacy\0privacy\0"
    "LimitTransactionRows\0updateDisplayUnit\0"
    "handleTransactionClicked\0updateAlerts\0"
    "warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly\0setMonospacedFont\0"
    "use_embedded_font"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    1,   76,    2, 0x08 /* Private */,
      14,    1,   79,    2, 0x08 /* Private */,
      16,    1,   82,    2, 0x08 /* Private */,
      18,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverviewPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->outOfSyncWarningClicked(); break;
        case 2: _t->setBalance((*reinterpret_cast< const interfaces::WalletBalances(*)>(_a[1]))); break;
        case 3: _t->setPrivacy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->LimitTransactionRows(); break;
        case 5: _t->updateDisplayUnit(); break;
        case 6: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setMonospacedFont((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OverviewPage::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OverviewPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::outOfSyncWarningClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverviewPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OverviewPage.data,
    qt_meta_data_OverviewPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverviewPage::outOfSyncWarningClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
