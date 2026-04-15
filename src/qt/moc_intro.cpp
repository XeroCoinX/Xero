/****************************************************************************
** Meta object code from reading C++ file 'intro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/intro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Intro_t {
    QByteArrayData data[12];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Intro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Intro_t qt_meta_stringdata_Intro = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Intro"
QT_MOC_LITERAL(1, 6, 12), // "requestCheck"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "setStatus"
QT_MOC_LITERAL(4, 30, 6), // "status"
QT_MOC_LITERAL(5, 37, 7), // "message"
QT_MOC_LITERAL(6, 45, 14), // "bytesAvailable"
QT_MOC_LITERAL(7, 60, 28), // "on_dataDirectory_textChanged"
QT_MOC_LITERAL(8, 89, 4), // "arg1"
QT_MOC_LITERAL(9, 94, 25), // "on_ellipsisButton_clicked"
QT_MOC_LITERAL(10, 120, 25), // "on_dataDirDefault_clicked"
QT_MOC_LITERAL(11, 146, 24) // "on_dataDirCustom_clicked"

    },
    "Intro\0requestCheck\0\0setStatus\0status\0"
    "message\0bytesAvailable\0"
    "on_dataDirectory_textChanged\0arg1\0"
    "on_ellipsisButton_clicked\0"
    "on_dataDirDefault_clicked\0"
    "on_dataDirCustom_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Intro[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   45,    2, 0x0a /* Public */,
       7,    1,   52,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::ULongLong,    4,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Intro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Intro *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestCheck(); break;
        case 1: _t->setStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 2: _t->on_dataDirectory_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_ellipsisButton_clicked(); break;
        case 4: _t->on_dataDirDefault_clicked(); break;
        case 5: _t->on_dataDirCustom_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Intro::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Intro::requestCheck)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Intro::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Intro.data,
    qt_meta_data_Intro,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Intro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Intro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Intro.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Intro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Intro::requestCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
