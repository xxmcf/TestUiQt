/****************************************************************************
** Meta object code from reading C++ file 'testlabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TestUiQt/testlabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestLabel_t {
    QByteArrayData data[13];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestLabel_t qt_meta_stringdata_TestLabel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TestLabel"
QT_MOC_LITERAL(1, 10, 26), // "slot_onTextLableLineHeight"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 28), // "slot_onTextLableLineHeight20"
QT_MOC_LITERAL(4, 67, 28), // "slot_onTextLableLineHeight40"
QT_MOC_LITERAL(5, 96, 28), // "slot_onTextLableLineHeight60"
QT_MOC_LITERAL(6, 125, 28), // "slot_onTextLableLineHeight80"
QT_MOC_LITERAL(7, 154, 25), // "slot_onTextLabelUnderline"
QT_MOC_LITERAL(8, 180, 27), // "slot_onTextLabelLineThrough"
QT_MOC_LITERAL(9, 208, 22), // "slot_onTextLabelItalic"
QT_MOC_LITERAL(10, 231, 26), // "slot_onTextLabelTextIndent"
QT_MOC_LITERAL(11, 258, 25), // "slot_onImageLabel20x20Btn"
QT_MOC_LITERAL(12, 284, 25) // "slot_onImageLabel40x40Btn"

    },
    "TestLabel\0slot_onTextLableLineHeight\0"
    "\0slot_onTextLableLineHeight20\0"
    "slot_onTextLableLineHeight40\0"
    "slot_onTextLableLineHeight60\0"
    "slot_onTextLableLineHeight80\0"
    "slot_onTextLabelUnderline\0"
    "slot_onTextLabelLineThrough\0"
    "slot_onTextLabelItalic\0"
    "slot_onTextLabelTextIndent\0"
    "slot_onImageLabel20x20Btn\0"
    "slot_onImageLabel40x40Btn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestLabel *_t = static_cast<TestLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_onTextLableLineHeight(); break;
        case 1: _t->slot_onTextLableLineHeight20(); break;
        case 2: _t->slot_onTextLableLineHeight40(); break;
        case 3: _t->slot_onTextLableLineHeight60(); break;
        case 4: _t->slot_onTextLableLineHeight80(); break;
        case 5: _t->slot_onTextLabelUnderline(); break;
        case 6: _t->slot_onTextLabelLineThrough(); break;
        case 7: _t->slot_onTextLabelItalic(); break;
        case 8: _t->slot_onTextLabelTextIndent(); break;
        case 9: _t->slot_onImageLabel20x20Btn(); break;
        case 10: _t->slot_onImageLabel40x40Btn(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestLabel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TestLabel.data,
      qt_meta_data_TestLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestLabel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TestLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
