/****************************************************************************
** Meta object code from reading C++ file 'zgnep_whiteboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "whiteBoard/zgnep_whiteboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zgnep_whiteboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zgnep_whiteBoard_t {
    QByteArrayData data[14];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zgnep_whiteBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zgnep_whiteBoard_t qt_meta_stringdata_zgnep_whiteBoard = {
    {
QT_MOC_LITERAL(0, 0, 16), // "zgnep_whiteBoard"
QT_MOC_LITERAL(1, 17, 19), // "on_btn_Exit_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "on_btn_Save_clicked"
QT_MOC_LITERAL(4, 58, 21), // "on_btn_delete_clicked"
QT_MOC_LITERAL(5, 80, 18), // "on_btn_Pen_clicked"
QT_MOC_LITERAL(6, 99, 21), // "on_btn_eraser_clicked"
QT_MOC_LITERAL(7, 121, 20), // "on_btn_Color_clicked"
QT_MOC_LITERAL(8, 142, 32), // "on_cBox_size_currentIndexChanged"
QT_MOC_LITERAL(9, 175, 4), // "arg1"
QT_MOC_LITERAL(10, 180, 34), // "on_cBox_size_2_currentIndexCh..."
QT_MOC_LITERAL(11, 215, 27), // "on_btn_StraightLine_clicked"
QT_MOC_LITERAL(12, 243, 24), // "on_btn_rectangle_clicked"
QT_MOC_LITERAL(13, 268, 20) // "on_btn_round_clicked"

    },
    "zgnep_whiteBoard\0on_btn_Exit_clicked\0"
    "\0on_btn_Save_clicked\0on_btn_delete_clicked\0"
    "on_btn_Pen_clicked\0on_btn_eraser_clicked\0"
    "on_btn_Color_clicked\0"
    "on_cBox_size_currentIndexChanged\0arg1\0"
    "on_cBox_size_2_currentIndexChanged\0"
    "on_btn_StraightLine_clicked\0"
    "on_btn_rectangle_clicked\0on_btn_round_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zgnep_whiteBoard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void zgnep_whiteBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zgnep_whiteBoard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_Exit_clicked(); break;
        case 1: _t->on_btn_Save_clicked(); break;
        case 2: _t->on_btn_delete_clicked(); break;
        case 3: _t->on_btn_Pen_clicked(); break;
        case 4: _t->on_btn_eraser_clicked(); break;
        case 5: _t->on_btn_Color_clicked(); break;
        case 6: _t->on_cBox_size_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_cBox_size_2_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_btn_StraightLine_clicked(); break;
        case 9: _t->on_btn_rectangle_clicked(); break;
        case 10: _t->on_btn_round_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject zgnep_whiteBoard::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_zgnep_whiteBoard.data,
    qt_meta_data_zgnep_whiteBoard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zgnep_whiteBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zgnep_whiteBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zgnep_whiteBoard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int zgnep_whiteBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
