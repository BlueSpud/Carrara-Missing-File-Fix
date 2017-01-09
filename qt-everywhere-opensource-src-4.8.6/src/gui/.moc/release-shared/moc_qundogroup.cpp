/****************************************************************************
** Meta object code from reading C++ file 'qundogroup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qundogroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qundogroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QUndoGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   43,   49,   49, 0x05,
      50,   68,   49,   49, 0x05,
      72,   91,   49,   49, 0x05,
      97,  118,   49,   49, 0x05,
     126,  147,   49,   49, 0x05,
     155,  180,   49,   49, 0x05,
     189,  214,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
     223,   49,   49,   49, 0x0a,
     230,   49,   49,   49, 0x0a,
     237,   43,   49,   49, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QUndoGroup[] = {
    "QUndoGroup\0activeStackChanged(QUndoStack*)\0"
    "stack\0\0indexChanged(int)\0idx\0"
    "cleanChanged(bool)\0clean\0canUndoChanged(bool)\0"
    "canUndo\0canRedoChanged(bool)\0canRedo\0"
    "undoTextChanged(QString)\0undoText\0"
    "redoTextChanged(QString)\0redoText\0"
    "undo()\0redo()\0setActiveStack(QUndoStack*)\0"
};

void QUndoGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QUndoGroup *_t = static_cast<QUndoGroup *>(_o);
        switch (_id) {
        case 0: _t->activeStackChanged((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        case 1: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->undoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->redoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->undo(); break;
        case 8: _t->redo(); break;
        case 9: _t->setActiveStack((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QUndoGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QUndoGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QUndoGroup,
      qt_meta_data_QUndoGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QUndoGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QUndoGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QUndoGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QUndoGroup))
        return static_cast<void*>(const_cast< QUndoGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QUndoGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QUndoGroup::activeStackChanged(QUndoStack * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QUndoGroup::indexChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QUndoGroup::cleanChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QUndoGroup::canUndoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QUndoGroup::canRedoChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QUndoGroup::undoTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QUndoGroup::redoTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
