/****************************************************************************
** Meta object code from reading C++ file 'navdockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fileSystem/navdockwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'navdockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NavDockWidget_t {
    QByteArrayData data[8];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavDockWidget_t qt_meta_stringdata_NavDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NavDockWidget"
QT_MOC_LITERAL(1, 14, 14), // "navDockClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "path"
QT_MOC_LITERAL(4, 35, 10), // "onExpanded"
QT_MOC_LITERAL(5, 46, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 58, 5), // "index"
QT_MOC_LITERAL(7, 64, 17) // "onTreeViewClicked"

    },
    "NavDockWidget\0navDockClicked\0\0path\0"
    "onExpanded\0QModelIndex\0index\0"
    "onTreeViewClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavDockWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void NavDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->navDockClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->onTreeViewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavDockWidget::*)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavDockWidget::navDockClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NavDockWidget::staticMetaObject = { {
    &QDockWidget::staticMetaObject,
    qt_meta_stringdata_NavDockWidget.data,
    qt_meta_data_NavDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NavDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int NavDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void NavDockWidget::navDockClicked(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
