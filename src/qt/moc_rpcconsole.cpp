/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/rpcconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RPCConsole_t {
    QByteArrayData data[59];
    char stringdata0[783];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPCConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPCConsole_t qt_meta_stringdata_RPCConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RPCConsole"
QT_MOC_LITERAL(1, 11, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(4, 66, 5), // "index"
QT_MOC_LITERAL(5, 72, 33), // "on_openDebugLogfileButton_cli..."
QT_MOC_LITERAL(6, 106, 29), // "on_sldGraphRange_valueChanged"
QT_MOC_LITERAL(7, 136, 5), // "value"
QT_MOC_LITERAL(8, 142, 18), // "updateTrafficStats"
QT_MOC_LITERAL(9, 161, 12), // "totalBytesIn"
QT_MOC_LITERAL(10, 174, 13), // "totalBytesOut"
QT_MOC_LITERAL(11, 188, 11), // "resizeEvent"
QT_MOC_LITERAL(12, 200, 13), // "QResizeEvent*"
QT_MOC_LITERAL(13, 214, 5), // "event"
QT_MOC_LITERAL(14, 220, 9), // "showEvent"
QT_MOC_LITERAL(15, 230, 11), // "QShowEvent*"
QT_MOC_LITERAL(16, 242, 9), // "hideEvent"
QT_MOC_LITERAL(17, 252, 11), // "QHideEvent*"
QT_MOC_LITERAL(18, 264, 25), // "showPeersTableContextMenu"
QT_MOC_LITERAL(19, 290, 5), // "point"
QT_MOC_LITERAL(20, 296, 23), // "showBanTableContextMenu"
QT_MOC_LITERAL(21, 320, 28), // "showOrHideBanTableIfRequired"
QT_MOC_LITERAL(22, 349, 17), // "clearSelectedNode"
QT_MOC_LITERAL(23, 367, 18), // "updateDetailWidget"
QT_MOC_LITERAL(24, 386, 5), // "clear"
QT_MOC_LITERAL(25, 392, 11), // "keep_prompt"
QT_MOC_LITERAL(26, 404, 10), // "fontBigger"
QT_MOC_LITERAL(27, 415, 11), // "fontSmaller"
QT_MOC_LITERAL(28, 427, 11), // "setFontSize"
QT_MOC_LITERAL(29, 439, 7), // "newSize"
QT_MOC_LITERAL(30, 447, 7), // "message"
QT_MOC_LITERAL(31, 455, 8), // "category"
QT_MOC_LITERAL(32, 464, 3), // "msg"
QT_MOC_LITERAL(33, 468, 4), // "html"
QT_MOC_LITERAL(34, 473, 17), // "setNumConnections"
QT_MOC_LITERAL(35, 491, 5), // "count"
QT_MOC_LITERAL(36, 497, 16), // "setNetworkActive"
QT_MOC_LITERAL(37, 514, 13), // "networkActive"
QT_MOC_LITERAL(38, 528, 12), // "setNumBlocks"
QT_MOC_LITERAL(39, 541, 9), // "blockDate"
QT_MOC_LITERAL(40, 551, 21), // "nVerificationProgress"
QT_MOC_LITERAL(41, 573, 8), // "SyncType"
QT_MOC_LITERAL(42, 582, 8), // "synctype"
QT_MOC_LITERAL(43, 591, 14), // "setMempoolSize"
QT_MOC_LITERAL(44, 606, 11), // "numberOfTxs"
QT_MOC_LITERAL(45, 618, 6), // "size_t"
QT_MOC_LITERAL(46, 625, 8), // "dynUsage"
QT_MOC_LITERAL(47, 634, 13), // "browseHistory"
QT_MOC_LITERAL(48, 648, 6), // "offset"
QT_MOC_LITERAL(49, 655, 11), // "scrollToEnd"
QT_MOC_LITERAL(50, 667, 22), // "disconnectSelectedNode"
QT_MOC_LITERAL(51, 690, 15), // "banSelectedNode"
QT_MOC_LITERAL(52, 706, 7), // "bantime"
QT_MOC_LITERAL(53, 714, 17), // "unbanSelectedNode"
QT_MOC_LITERAL(54, 732, 11), // "setTabFocus"
QT_MOC_LITERAL(55, 744, 8), // "TabTypes"
QT_MOC_LITERAL(56, 753, 7), // "tabType"
QT_MOC_LITERAL(57, 761, 12), // "updateAlerts"
QT_MOC_LITERAL(58, 774, 8) // "warnings"

    },
    "RPCConsole\0on_lineEdit_returnPressed\0"
    "\0on_tabWidget_currentChanged\0index\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_sldGraphRange_valueChanged\0value\0"
    "updateTrafficStats\0totalBytesIn\0"
    "totalBytesOut\0resizeEvent\0QResizeEvent*\0"
    "event\0showEvent\0QShowEvent*\0hideEvent\0"
    "QHideEvent*\0showPeersTableContextMenu\0"
    "point\0showBanTableContextMenu\0"
    "showOrHideBanTableIfRequired\0"
    "clearSelectedNode\0updateDetailWidget\0"
    "clear\0keep_prompt\0fontBigger\0fontSmaller\0"
    "setFontSize\0newSize\0message\0category\0"
    "msg\0html\0setNumConnections\0count\0"
    "setNetworkActive\0networkActive\0"
    "setNumBlocks\0blockDate\0nVerificationProgress\0"
    "SyncType\0synctype\0setMempoolSize\0"
    "numberOfTxs\0size_t\0dynUsage\0browseHistory\0"
    "offset\0scrollToEnd\0disconnectSelectedNode\0"
    "banSelectedNode\0bantime\0unbanSelectedNode\0"
    "setTabFocus\0TabTypes\0tabType\0updateAlerts\0"
    "warnings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  169,    2, 0x08 /* Private */,
       3,    1,  170,    2, 0x08 /* Private */,
       5,    0,  173,    2, 0x08 /* Private */,
       6,    1,  174,    2, 0x08 /* Private */,
       8,    2,  177,    2, 0x08 /* Private */,
      11,    1,  182,    2, 0x08 /* Private */,
      14,    1,  185,    2, 0x08 /* Private */,
      16,    1,  188,    2, 0x08 /* Private */,
      18,    1,  191,    2, 0x08 /* Private */,
      20,    1,  194,    2, 0x08 /* Private */,
      21,    0,  197,    2, 0x08 /* Private */,
      22,    0,  198,    2, 0x08 /* Private */,
      23,    0,  199,    2, 0x08 /* Private */,
      24,    1,  200,    2, 0x0a /* Public */,
      24,    0,  203,    2, 0x2a /* Public | MethodCloned */,
      26,    0,  204,    2, 0x0a /* Public */,
      27,    0,  205,    2, 0x0a /* Public */,
      28,    1,  206,    2, 0x0a /* Public */,
      30,    2,  209,    2, 0x0a /* Public */,
      30,    3,  214,    2, 0x0a /* Public */,
      34,    1,  221,    2, 0x0a /* Public */,
      36,    1,  224,    2, 0x0a /* Public */,
      38,    4,  227,    2, 0x0a /* Public */,
      43,    2,  236,    2, 0x0a /* Public */,
      47,    1,  241,    2, 0x0a /* Public */,
      49,    0,  244,    2, 0x0a /* Public */,
      50,    0,  245,    2, 0x0a /* Public */,
      51,    1,  246,    2, 0x0a /* Public */,
      53,    0,  249,    2, 0x0a /* Public */,
      54,    1,  250,    2, 0x0a /* Public */,
      57,    1,  253,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   13,
    QMetaType::Void, 0x80000000 | 17,   13,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   31,   30,   33,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double, 0x80000000 | 41,   35,   39,   40,   42,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 45,   44,   46,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55,   56,
    QMetaType::Void, QMetaType::QString,   58,

       0        // eod
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RPCConsole *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_lineEdit_returnPressed(); break;
        case 1: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_openDebugLogfileButton_clicked(); break;
        case 3: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateTrafficStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 5: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 6: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 7: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 8: _t->showPeersTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->showBanTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->showOrHideBanTableIfRequired(); break;
        case 11: _t->clearSelectedNode(); break;
        case 12: _t->updateDetailWidget(); break;
        case 13: _t->clear((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->clear(); break;
        case 15: _t->fontBigger(); break;
        case 16: _t->fontSmaller(); break;
        case 17: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< SyncType(*)>(_a[4]))); break;
        case 23: _t->setMempoolSize((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 24: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->scrollToEnd(); break;
        case 26: _t->disconnectSelectedNode(); break;
        case 27: _t->banSelectedNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->unbanSelectedNode(); break;
        case 29: _t->setTabFocus((*reinterpret_cast< TabTypes(*)>(_a[1]))); break;
        case 30: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RPCConsole::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RPCConsole.data,
    qt_meta_data_RPCConsole,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
