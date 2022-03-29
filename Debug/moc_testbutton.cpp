/****************************************************************************
** Meta object code from reading C++ file 'testbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TestUiQt/testbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestButton_t {
    QByteArrayData data[15];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestButton_t qt_meta_stringdata_TestButton = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestButton"
QT_MOC_LITERAL(1, 11, 22), // "slot_onWhiteBtnClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "slot_onWhiteCtlBtnClicked"
QT_MOC_LITERAL(4, 61, 7), // "checked"
QT_MOC_LITERAL(5, 69, 28), // "slot_onWhiteFont12BtnClicked"
QT_MOC_LITERAL(6, 98, 28), // "slot_onWhiteFont14BtnClicked"
QT_MOC_LITERAL(7, 127, 28), // "slot_onWhiteFont16BtnClicked"
QT_MOC_LITERAL(8, 156, 28), // "slot_onWhiteFont18BtnClicked"
QT_MOC_LITERAL(9, 185, 21), // "slot_onBlueBtnClicked"
QT_MOC_LITERAL(10, 207, 24), // "slot_onBlueCtlBtnClicked"
QT_MOC_LITERAL(11, 232, 27), // "slot_onBlueFont12BtnClicked"
QT_MOC_LITERAL(12, 260, 27), // "slot_onBlueFont14BtnClicked"
QT_MOC_LITERAL(13, 288, 27), // "slot_onBlueFont16BtnClicked"
QT_MOC_LITERAL(14, 316, 27) // "slot_onBlueFont18BtnClicked"

    },
    "TestButton\0slot_onWhiteBtnClicked\0\0"
    "slot_onWhiteCtlBtnClicked\0checked\0"
    "slot_onWhiteFont12BtnClicked\0"
    "slot_onWhiteFont14BtnClicked\0"
    "slot_onWhiteFont16BtnClicked\0"
    "slot_onWhiteFont18BtnClicked\0"
    "slot_onBlueBtnClicked\0slot_onBlueCtlBtnClicked\0"
    "slot_onBlueFont12BtnClicked\0"
    "slot_onBlueFont14BtnClicked\0"
    "slot_onBlueFont16BtnClicked\0"
    "slot_onBlueFont18BtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       5,    0,   78,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    0,   82,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x0a /* Public */,
      11,    0,   86,    2, 0x0a /* Public */,
      12,    0,   87,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x0a /* Public */,
      14,    0,   89,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestButton *_t = static_cast<TestButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_onWhiteBtnClicked(); break;
        case 1: _t->slot_onWhiteCtlBtnClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slot_onWhiteFont12BtnClicked(); break;
        case 3: _t->slot_onWhiteFont14BtnClicked(); break;
        case 4: _t->slot_onWhiteFont16BtnClicked(); break;
        case 5: _t->slot_onWhiteFont18BtnClicked(); break;
        case 6: _t->slot_onBlueBtnClicked(); break;
        case 7: _t->slot_onBlueCtlBtnClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slot_onBlueFont12BtnClicked(); break;
        case 9: _t->slot_onBlueFont14BtnClicked(); break;
        case 10: _t->slot_onBlueFont16BtnClicked(); break;
        case 11: _t->slot_onBlueFont18BtnClicked(); break;
        default: ;
        }
    }
}

const QMetaObject TestButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TestButton.data,
      qt_meta_data_TestButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestButton.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TestButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
