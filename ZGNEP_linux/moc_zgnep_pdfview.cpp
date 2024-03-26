/****************************************************************************
** Meta object code from reading C++ file 'zgnep_pdfview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pdf/include/zgnep_pdfview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zgnep_pdfview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_zgnep_pdfView_t {
    QByteArrayData data[13];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zgnep_pdfView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zgnep_pdfView_t qt_meta_stringdata_zgnep_pdfView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "zgnep_pdfView"
QT_MOC_LITERAL(1, 14, 11), // "indexChange"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "on_btn_exit_clicked"
QT_MOC_LITERAL(4, 47, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(5, 79, 5), // "index"
QT_MOC_LITERAL(6, 85, 24), // "on_scrollBar_valueChange"
QT_MOC_LITERAL(7, 110, 5), // "value"
QT_MOC_LITERAL(8, 116, 17), // "on_pdfIndexChange"
QT_MOC_LITERAL(9, 134, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 156, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 180, 19), // "on_btn_open_clicked"
QT_MOC_LITERAL(12, 200, 19) // "on_btn_jump_clicked"

    },
    "zgnep_pdfView\0indexChange\0\0"
    "on_btn_exit_clicked\0on_comboBox_currentIndexChanged\0"
    "index\0on_scrollBar_valueChange\0value\0"
    "on_pdfIndexChange\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_btn_open_clicked\0"
    "on_btn_jump_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zgnep_pdfView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void zgnep_pdfView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<zgnep_pdfView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChange(); break;
        case 1: _t->on_btn_exit_clicked(); break;
        case 2: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_scrollBar_valueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pdfIndexChange(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_btn_open_clicked(); break;
        case 8: _t->on_btn_jump_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (zgnep_pdfView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&zgnep_pdfView::indexChange)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject zgnep_pdfView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_zgnep_pdfView.data,
    qt_meta_data_zgnep_pdfView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *zgnep_pdfView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zgnep_pdfView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zgnep_pdfView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int zgnep_pdfView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void zgnep_pdfView::indexChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
