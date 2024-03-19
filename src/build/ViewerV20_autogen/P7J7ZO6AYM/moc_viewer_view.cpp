/****************************************************************************
** Meta object code from reading C++ file 'viewer_view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../viewer/viewer_view.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewer_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS = QtMocHelpers::stringData(
    "s21::ViewerView",
    "ClickedFile",
    "",
    "SaveImage",
    "ChangeSize",
    "value",
    "ChangeTranslation",
    "Axis",
    "axis",
    "ChangeRotate",
    "SaveGif",
    "CreateGif",
    "on_button_update_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[16];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[11];
    char stringdata5[6];
    char stringdata6[18];
    char stringdata7[5];
    char stringdata8[5];
    char stringdata9[13];
    char stringdata10[8];
    char stringdata11[10];
    char stringdata12[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS_t qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "s21::ViewerView"
        QT_MOC_LITERAL(16, 11),  // "ClickedFile"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 9),  // "SaveImage"
        QT_MOC_LITERAL(39, 10),  // "ChangeSize"
        QT_MOC_LITERAL(50, 5),  // "value"
        QT_MOC_LITERAL(56, 17),  // "ChangeTranslation"
        QT_MOC_LITERAL(74, 4),  // "Axis"
        QT_MOC_LITERAL(79, 4),  // "axis"
        QT_MOC_LITERAL(84, 12),  // "ChangeRotate"
        QT_MOC_LITERAL(97, 7),  // "SaveGif"
        QT_MOC_LITERAL(105, 9),  // "CreateGif"
        QT_MOC_LITERAL(115, 24)   // "on_button_update_clicked"
    },
    "s21::ViewerView",
    "ClickedFile",
    "",
    "SaveImage",
    "ChangeSize",
    "value",
    "ChangeTranslation",
    "Axis",
    "axis",
    "ChangeRotate",
    "SaveGif",
    "CreateGif",
    "on_button_update_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSs21SCOPEViewerViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    1,   64,    2, 0x08,    3 /* Private */,
       6,    2,   67,    2, 0x08,    5 /* Private */,
       9,    2,   72,    2, 0x08,    8 /* Private */,
      10,    0,   77,    2, 0x08,   11 /* Private */,
      11,    0,   78,    2, 0x08,   12 /* Private */,
      12,    0,   79,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    5,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    5,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject s21::ViewerView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSs21SCOPEViewerViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ViewerView, std::true_type>,
        // method 'ClickedFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ChangeSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ChangeTranslation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Axis, std::false_type>,
        // method 'ChangeRotate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Axis, std::false_type>,
        // method 'SaveGif'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CreateGif'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_update_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void s21::ViewerView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewerView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ClickedFile(); break;
        case 1: _t->SaveImage(); break;
        case 2: _t->ChangeSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->ChangeTranslation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Axis>>(_a[2]))); break;
        case 4: _t->ChangeRotate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Axis>>(_a[2]))); break;
        case 5: _t->SaveGif(); break;
        case 6: _t->CreateGif(); break;
        case 7: _t->on_button_update_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *s21::ViewerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::ViewerView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSs21SCOPEViewerViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Observer"))
        return static_cast< Observer*>(this);
    return QWidget::qt_metacast(_clname);
}

int s21::ViewerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
