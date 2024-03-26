/****************************************************************************
** Meta object code from reading C++ file 'zgnep_word.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "word/zgnep_word.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zgnep_word.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zgnep_word_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zgnep_word_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zgnep_word_t qt_meta_stringdata_zgnep_word = {
    {
QT_MOC_LITERAL(0, 0, 10), // "zgnep_word"
QT_MOC_LITERAL(1, 11, 11), // "indexChange"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "on_comboxIndexChanged"
QT_MOC_LITERAL(4, 46, 5), // "index"
QT_MOC_LITERAL(5, 52, 19), // "on_btn_exit_clicked"
QT_MOC_LITERAL(6, 72, 14), // "on_indexChange"
QT_MOC_LITERAL(7, 87, 20), // "onVerbarValueChanged"
QT_MOC_LITERAL(8, 108, 19) // "on_btn_open_clicked"

    },
    "zgnep_word\0indexChange\0\0on_comboxIndexChanged\0"
    "index\0on_btn_exit_clicked\0on_indexChange\0"
    "onVerbarValueChanged\0on_btn_open_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zgnep_word[] = {

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
       3,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void zgnep_word::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zgnep_word *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChange(); break;
        case 1: _t->on_comboxIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btn_exit_clicked(); break;
        case 3: _t->on_indexChange(); break;
        case 4: _t->onVerbarValueChanged(); break;
        case 5: _t->on_btn_open_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (zgnep_word::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&zgnep_word::indexChange)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject zgnep_word::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_zgnep_word.data,
    qt_meta_data_zgnep_word,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zgnep_word::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zgnep_word::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zgnep_word.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int zgnep_word::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void zgnep_word::indexChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
