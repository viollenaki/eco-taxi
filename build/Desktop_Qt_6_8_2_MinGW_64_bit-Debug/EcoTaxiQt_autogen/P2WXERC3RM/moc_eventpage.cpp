/****************************************************************************
** Meta object code from reading C++ file 'eventpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../pages/eventpage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN9eventPageE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9eventPageE = QtMocHelpers::stringData(
    "eventPage",
    "on_BackButton_clicked",
    "",
    "on_EditButton_clicked",
    "on_DeleteButton_clicked",
    "on_DateButton_clicked",
    "on_ReportButton_clicked",
    "onDateChange",
    "date",
    "on_PrevButton_clicked",
    "on_NextButton_clicked",
    "onSectionResized",
    "logicalIndex",
    "oldSize",
    "newSize",
    "handleDoubleClick",
    "QModelIndex",
    "index",
    "onSortIndicatorChanged",
    "Qt::SortOrder",
    "order",
    "onYes",
    "onNo"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9eventPageE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    1,   97,    2, 0x08,    6 /* Private */,
       9,    0,  100,    2, 0x08,    8 /* Private */,
      10,    0,  101,    2, 0x08,    9 /* Private */,
      11,    3,  102,    2, 0x08,   10 /* Private */,
      15,    1,  109,    2, 0x08,   14 /* Private */,
      18,    2,  112,    2, 0x08,   16 /* Private */,
      21,    0,  117,    2, 0x08,   19 /* Private */,
      22,    0,  118,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 19,   12,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject eventPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN9eventPageE.offsetsAndSizes,
    qt_meta_data_ZN9eventPageE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9eventPageE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<eventPage, std::true_type>,
        // method 'on_BackButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_EditButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DeleteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DateButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ReportButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'on_PrevButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_NextButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSectionResized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onSortIndicatorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>,
        // method 'onYes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void eventPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<eventPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_BackButton_clicked(); break;
        case 1: _t->on_EditButton_clicked(); break;
        case 2: _t->on_DeleteButton_clicked(); break;
        case 3: _t->on_DateButton_clicked(); break;
        case 4: _t->on_ReportButton_clicked(); break;
        case 5: _t->onDateChange((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 6: _t->on_PrevButton_clicked(); break;
        case 7: _t->on_NextButton_clicked(); break;
        case 8: _t->onSectionResized((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->handleDoubleClick((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->onSortIndicatorChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 11: _t->onYes(); break;
        case 12: _t->onNo(); break;
        default: ;
        }
    }
}

const QMetaObject *eventPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *eventPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9eventPageE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int eventPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
