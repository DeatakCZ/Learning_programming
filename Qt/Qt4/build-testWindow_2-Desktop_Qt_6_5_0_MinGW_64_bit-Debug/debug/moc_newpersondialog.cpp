/****************************************************************************
** Meta object code from reading C++ file 'newpersondialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Projects/Calendar_v2/newpersondialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newpersondialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSnewPersonDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnewPersonDialogENDCLASS = QtMocHelpers::stringData(
    "newPersonDialog",
    "on_calendarWidget_selectionChanged",
    "",
    "on_dateEdit_dateChanged",
    "date",
    "on_dayEdit_textChanged",
    "day",
    "on_monthEdit_textChanged",
    "month",
    "on_yearEdit_textChanged",
    "year",
    "on_buttonCancel_clicked",
    "on_buttonOk_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnewPersonDialogENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[16];
    char stringdata1[35];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[5];
    char stringdata5[23];
    char stringdata6[4];
    char stringdata7[25];
    char stringdata8[6];
    char stringdata9[24];
    char stringdata10[5];
    char stringdata11[24];
    char stringdata12[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnewPersonDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnewPersonDialogENDCLASS_t qt_meta_stringdata_CLASSnewPersonDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "newPersonDialog"
        QT_MOC_LITERAL(16, 34),  // "on_calendarWidget_selectionCh..."
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 23),  // "on_dateEdit_dateChanged"
        QT_MOC_LITERAL(76, 4),  // "date"
        QT_MOC_LITERAL(81, 22),  // "on_dayEdit_textChanged"
        QT_MOC_LITERAL(104, 3),  // "day"
        QT_MOC_LITERAL(108, 24),  // "on_monthEdit_textChanged"
        QT_MOC_LITERAL(133, 5),  // "month"
        QT_MOC_LITERAL(139, 23),  // "on_yearEdit_textChanged"
        QT_MOC_LITERAL(163, 4),  // "year"
        QT_MOC_LITERAL(168, 23),  // "on_buttonCancel_clicked"
        QT_MOC_LITERAL(192, 19)   // "on_buttonOk_clicked"
    },
    "newPersonDialog",
    "on_calendarWidget_selectionChanged",
    "",
    "on_dateEdit_dateChanged",
    "date",
    "on_dayEdit_textChanged",
    "day",
    "on_monthEdit_textChanged",
    "month",
    "on_yearEdit_textChanged",
    "year",
    "on_buttonCancel_clicked",
    "on_buttonOk_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnewPersonDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    1,   57,    2, 0x08,    2 /* Private */,
       5,    1,   60,    2, 0x08,    4 /* Private */,
       7,    1,   63,    2, 0x08,    6 /* Private */,
       9,    1,   66,    2, 0x08,    8 /* Private */,
      11,    0,   69,    2, 0x08,   10 /* Private */,
      12,    0,   70,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject newPersonDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSnewPersonDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnewPersonDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnewPersonDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<newPersonDialog, std::true_type>,
        // method 'on_calendarWidget_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dateEdit_dateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'on_dayEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_monthEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_yearEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_buttonCancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonOk_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void newPersonDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<newPersonDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_calendarWidget_selectionChanged(); break;
        case 1: _t->on_dateEdit_dateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 2: _t->on_dayEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_monthEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_yearEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_buttonCancel_clicked(); break;
        case 6: _t->on_buttonOk_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *newPersonDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *newPersonDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnewPersonDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int newPersonDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
