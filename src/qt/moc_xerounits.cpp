/****************************************************************************
** Meta object code from reading C++ file 'xerounits.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/xerounits.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xerounits.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XeroUnits_t {
    QByteArrayData data[6];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XeroUnits_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XeroUnits_t qt_meta_stringdata_XeroUnits = {
    {
QT_MOC_LITERAL(0, 0, 9), // "XeroUnits"
QT_MOC_LITERAL(1, 10, 4), // "Unit"
QT_MOC_LITERAL(2, 15, 3), // "XRO"
QT_MOC_LITERAL(3, 19, 4), // "mXRO"
QT_MOC_LITERAL(4, 24, 4), // "uXRO"
QT_MOC_LITERAL(5, 29, 3) // "SAT"

    },
    "XeroUnits\0Unit\0XRO\0mXRO\0uXRO\0SAT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XeroUnits[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(XeroUnits::Unit::XRO),
       3, uint(XeroUnits::Unit::mXRO),
       4, uint(XeroUnits::Unit::uXRO),
       5, uint(XeroUnits::Unit::SAT),

       0        // eod
};

void XeroUnits::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject XeroUnits::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_XeroUnits.data,
    qt_meta_data_XeroUnits,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XeroUnits::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XeroUnits::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XeroUnits.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int XeroUnits::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
