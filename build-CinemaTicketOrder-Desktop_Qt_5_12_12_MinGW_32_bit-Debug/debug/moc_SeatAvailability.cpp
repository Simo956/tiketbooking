/****************************************************************************
** Meta object code from reading C++ file 'SeatAvailability.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CinemaTicketOrder/SeatAvailability.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SeatAvailability.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeatAvailability_t {
    QByteArrayData data[14];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeatAvailability_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeatAvailability_t qt_meta_stringdata_SeatAvailability = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SeatAvailability"
QT_MOC_LITERAL(1, 17, 10), // "chooseSeat"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 51, 19), // "updateSeatAvailable"
QT_MOC_LITERAL(5, 71, 10), // "movieIndex"
QT_MOC_LITERAL(6, 82, 8), // "timeSlot"
QT_MOC_LITERAL(7, 91, 18), // "updateDisableSeats"
QT_MOC_LITERAL(8, 110, 14), // "QVector<bool>&"
QT_MOC_LITERAL(9, 125, 6), // "vector"
QT_MOC_LITERAL(10, 132, 12), // "toVectorBool"
QT_MOC_LITERAL(11, 145, 13), // "QVector<bool>"
QT_MOC_LITERAL(12, 159, 6), // "buffer"
QT_MOC_LITERAL(13, 166, 26) // "connectAllButtonToFunction"

    },
    "SeatAvailability\0chooseSeat\0\0"
    "on_pushButton_clicked\0updateSeatAvailable\0"
    "movieIndex\0timeSlot\0updateDisableSeats\0"
    "QVector<bool>&\0vector\0toVectorBool\0"
    "QVector<bool>\0buffer\0connectAllButtonToFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeatAvailability[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    2,   46,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
      10,    1,   54,    2, 0x08 /* Private */,
      13,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    0x80000000 | 11, QMetaType::QByteArray,   12,
    QMetaType::Void,

       0        // eod
};

void SeatAvailability::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SeatAvailability *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chooseSeat(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->updateSeatAvailable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->updateDisableSeats((*reinterpret_cast< QVector<bool>(*)>(_a[1]))); break;
        case 4: { QVector<bool> _r = _t->toVectorBool((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<bool>*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->connectAllButtonToFunction(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeatAvailability::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SeatAvailability.data,
    qt_meta_data_SeatAvailability,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeatAvailability::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeatAvailability::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeatAvailability.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SeatAvailability::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
