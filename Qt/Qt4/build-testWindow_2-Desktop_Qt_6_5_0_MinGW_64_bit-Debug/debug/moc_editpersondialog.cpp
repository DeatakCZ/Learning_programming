/****************************************************************************
** Meta object code from reading C++ file 'editpersondialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Projects/Calendar_v2/editpersondialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editpersondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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
struct qt_meta_stringdata_CLASSEditPersonDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEditPersonDialogENDCLASS = QtMocHelpers::stringData(
    "EditPersonDialog",
    "on_listView_clicked",
    "",
    "QModelIndex",
    "index",
    "on_exitButton_clicked",
    "on_deleteButton_clicked",
    "on_saveButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEditPersonDialogENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[17];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[22];
    char stringdata6[24];
    char stringdata7[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEditPersonDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEditPersonDialogENDCLASS_t qt_meta_stringdata_CLASSEditPersonDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "EditPersonDialog"
        QT_MOC_LITERAL(17, 19),  // "on_listView_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 11),  // "QModelIndex"
        QT_MOC_LITERAL(50, 5),  // "index"
        QT_MOC_LITERAL(56, 21),  // "on_exitButton_clicked"
        QT_MOC_LITERAL(78, 23),  // "on_deleteButton_clicked"
        QT_MOC_LITERAL(102, 21)   // "on_saveButton_clicked"
    },
    "EditPersonDialog",
    "on_listView_clicked",
    "",
    "QModelIndex",
    "index",
    "on_exitButton_clicked",
    "on_deleteButton_clicked",
    "on_saveButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEditPersonDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       5,    0,   41,    2, 0x08,    3 /* Private */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject EditPersonDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSEditPersonDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEditPersonDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEditPersonDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditPersonDialog, std::true_type>,
        // method 'on_listView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_exitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void EditPersonDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditPersonDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_listView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->on_exitButton_clicked(); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: _t->on_saveButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *EditPersonDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditPersonDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEditPersonDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditPersonDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
