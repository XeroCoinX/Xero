/****************************************************************************
** Meta object code from reading C++ file 'xero.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/xero.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xero.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XeroApplication_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XeroApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XeroApplication_t qt_meta_stringdata_XeroApplication = {
    {
QT_MOC_LITERAL(0, 0, 15), // "XeroApplication"
QT_MOC_LITERAL(1, 16, 19), // "requestedInitialize"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "requestedShutdown"
QT_MOC_LITERAL(4, 55, 11), // "windowShown"
QT_MOC_LITERAL(5, 67, 8), // "XeroGUI*"
QT_MOC_LITERAL(6, 76, 6), // "window"
QT_MOC_LITERAL(7, 83, 16), // "initializeResult"
QT_MOC_LITERAL(8, 100, 7), // "success"
QT_MOC_LITERAL(9, 108, 33), // "interfaces::BlockAndHeaderTip..."
QT_MOC_LITERAL(10, 142, 8), // "tip_info"
QT_MOC_LITERAL(11, 151, 15), // "requestShutdown"
QT_MOC_LITERAL(12, 167, 22), // "handleRunawayException"
QT_MOC_LITERAL(13, 190, 7), // "message"
QT_MOC_LITERAL(14, 198, 23) // "handleNonFatalException"

    },
    "XeroApplication\0requestedInitialize\0"
    "\0requestedShutdown\0windowShown\0XeroGUI*\0"
    "window\0initializeResult\0success\0"
    "interfaces::BlockAndHeaderTipInfo\0"
    "tip_info\0requestShutdown\0"
    "handleRunawayException\0message\0"
    "handleNonFatalException"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XeroApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   54,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,
      12,    1,   60,    2, 0x0a /* Public */,
      14,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void XeroApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XeroApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestedInitialize(); break;
        case 1: _t->requestedShutdown(); break;
        case 2: _t->windowShown((*reinterpret_cast< XeroGUI*(*)>(_a[1]))); break;
        case 3: _t->initializeResult((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< interfaces::BlockAndHeaderTipInfo(*)>(_a[2]))); break;
        case 4: _t->requestShutdown(); break;
        case 5: _t->handleRunawayException((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->handleNonFatalException((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XeroApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XeroApplication::requestedInitialize)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XeroApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XeroApplication::requestedShutdown)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XeroApplication::*)(XeroGUI * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XeroApplication::windowShown)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XeroApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_XeroApplication.data,
    qt_meta_data_XeroApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XeroApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XeroApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XeroApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int XeroApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void XeroApplication::requestedInitialize()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XeroApplication::requestedShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void XeroApplication::windowShown(XeroGUI * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
