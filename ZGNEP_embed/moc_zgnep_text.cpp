/****************************************************************************
** Meta object code from reading C++ file 'zgnep_text.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "text/zgnep_text.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zgnep_text.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zgnep_text_t {
    QByteArrayData data[9];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zgnep_text_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zgnep_text_t qt_meta_stringdata_zgnep_text = {
    {
QT_MOC_LITERAL(0, 0, 10), // "zgnep_text"
QT_MOC_LITERAL(1, 11, 4), // "fun1"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "fun2"
QT_MOC_LITERAL(4, 22, 4), // "fun3"
QT_MOC_LITERAL(5, 27, 4), // "fun4"
QT_MOC_LITERAL(6, 32, 4), // "fun5"
QT_MOC_LITERAL(7, 37, 4), // "fun6"
QT_MOC_LITERAL(8, 42, 8) // "showTime"

    },
    "zgnep_text\0fun1\0\0fun2\0fun3\0fun4\0fun5\0"
    "fun6\0showTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zgnep_text[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       3,    1,   52,    2, 0x0a /* Public */,
       4,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void zgnep_text::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zgnep_text *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fun1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fun2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->fun3((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->fun4((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->fun5((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->fun6((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showTime(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject zgnep_text::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_zgnep_text.data,
    qt_meta_data_zgnep_text,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zgnep_text::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zgnep_text::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zgnep_text.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int zgnep_text::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
