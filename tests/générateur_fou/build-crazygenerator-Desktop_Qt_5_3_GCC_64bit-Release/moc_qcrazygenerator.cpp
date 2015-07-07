/****************************************************************************
** Meta object code from reading C++ file 'qcrazygenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../crazygenerator/qcrazygenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcrazygenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCrazyGenerator_t {
    QByteArrayData data[8];
    char stringdata[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCrazyGenerator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCrazyGenerator_t qt_meta_stringdata_QCrazyGenerator = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 7),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 1),
QT_MOC_LITERAL(4, 27, 10),
QT_MOC_LITERAL(5, 38, 10),
QT_MOC_LITERAL(6, 49, 7),
QT_MOC_LITERAL(7, 57, 6)
    },
    "QCrazyGenerator\0setrows\0\0n\0setcolumns\0"
    "setdensity\0setpath\0create"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCrazyGenerator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QCrazyGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCrazyGenerator *_t = static_cast<QCrazyGenerator *>(_o);
        switch (_id) {
        case 0: _t->setrows((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setcolumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setdensity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setpath(); break;
        case 4: _t->create(); break;
        default: ;
        }
    }
}

const QMetaObject QCrazyGenerator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCrazyGenerator.data,
      qt_meta_data_QCrazyGenerator,  qt_static_metacall, 0, 0}
};


const QMetaObject *QCrazyGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCrazyGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCrazyGenerator.stringdata))
        return static_cast<void*>(const_cast< QCrazyGenerator*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCrazyGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
