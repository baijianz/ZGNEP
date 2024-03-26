/****************************************************************************
** Meta object code from reading C++ file 'zgnep_ppt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ppt/zgnep_ppt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zgnep_ppt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zgnep_ppt_t {
    QByteArrayData data[11];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zgnep_ppt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zgnep_ppt_t qt_meta_stringdata_zgnep_ppt = {
    {
QT_MOC_LITERAL(0, 0, 9), // "zgnep_ppt"
QT_MOC_LITERAL(1, 10, 11), // "indexChange"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 19), // "on_btn_exit_clicked"
QT_MOC_LITERAL(4, 43, 14), // "on_indexChange"
QT_MOC_LITERAL(5, 58, 18), // "on_btn_pre_clicked"
QT_MOC_LITERAL(6, 77, 19), // "on_btn_next_clicked"
QT_MOC_LITERAL(7, 97, 23), // "on_btn_openFile_clicked"
QT_MOC_LITERAL(8, 121, 19), // "on_ppt_indexChanged"
QT_MOC_LITERAL(9, 141, 21), // "on_scrollValueChanged"
QT_MOC_LITERAL(10, 163, 5) // "value"

    },
    "zgnep_ppt\0indexChange\0\0on_btn_exit_clicked\0"
    "on_indexChange\0on_btn_pre_clicked\0"
    "on_btn_next_clicked\0on_btn_openFile_clicked\0"
    "on_ppt_indexChanged\0on_scrollValueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zgnep_ppt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void zgnep_ppt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zgnep_ppt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChange(); break;
        case 1: _t->on_btn_exit_clicked(); break;
        case 2: _t->on_indexChange(); break;
        case 3: _t->on_btn_pre_clicked(); break;
        case 4: _t->on_btn_next_clicked(); break;
        case 5: _t->on_btn_openFile_clicked(); break;
        case 6: _t->on_ppt_indexChanged(); break;
        case 7: _t->on_scrollValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (zgnep_ppt::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&zgnep_ppt::indexChange)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject zgnep_ppt::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_zgnep_ppt.data,
    qt_meta_data_zgnep_ppt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zgnep_ppt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zgnep_ppt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zgnep_ppt.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int zgnep_ppt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void zgnep_ppt::indexChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
