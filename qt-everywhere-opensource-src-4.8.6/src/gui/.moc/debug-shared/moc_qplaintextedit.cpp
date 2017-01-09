/****************************************************************************
** Meta object code from reading C++ file 'qplaintextedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qplaintextedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaintextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPlainTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      14,  139, // properties
       1,  195, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   29,   29,   29, 0x05,
      30,   50,   29,   29, 0x05,
      52,   50,   29,   29, 0x05,
      72,   50,   29,   29, 0x05,
      92,   29,   29,   29, 0x05,
     111,   29,   29,   29, 0x05,
     135,  160,   29,   29, 0x05,
     168,  191,   29,   29, 0x05,
     205,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     231,  253,   29,   29, 0x0a,
     258,   29,   29,   29, 0x0a,
     264,   29,   29,   29, 0x0a,
     271,   29,   29,   29, 0x0a,
     279,   29,   29,   29, 0x0a,
     286,   29,   29,   29, 0x0a,
     293,   29,   29,   29, 0x0a,
     301,   29,   29,   29, 0x0a,
     313,  253,   29,   29, 0x0a,
     338,  253,   29,   29, 0x0a,
     363,  383,   29,   29, 0x0a,
     388,   29,   29,   29, 0x0a,
     403,  430,   29,   29, 0x08,
     432,   29,   29,   29, 0x08,
     454,   29,   29,   29, 0x08,
     495,   29,   29,   29, 0x08,

 // properties: name, type, flags
     522,  538, 0x01095103,
     543,  557, 0x0a095103,
     565,  538, 0x01095103,
     581,  594, 0x0009510b,
     607,  538, 0x01095103,
     616,  557, 0x0a595103,
     626,  538, 0x01095103,
     640,  653, 0x02095103,
     657,  653, 0x02095103,
     669,  690, 0x0009510b,
     715,  653, 0x02095001,
     726,  653, 0x02095103,
     744,  538, 0x01095103,
     762,  538, 0x01095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     594, 0x0,    2,  199,

 // enum data: key, value
     777, uint(QPlainTextEdit::NoWrap),
     784, uint(QPlainTextEdit::WidgetWidth),

       0        // eod
};

static const char qt_meta_stringdata_QPlainTextEdit[] = {
    "QPlainTextEdit\0textChanged()\0\0"
    "undoAvailable(bool)\0b\0redoAvailable(bool)\0"
    "copyAvailable(bool)\0selectionChanged()\0"
    "cursorPositionChanged()\0"
    "updateRequest(QRect,int)\0rect,dy\0"
    "blockCountChanged(int)\0newBlockCount\0"
    "modificationChanged(bool)\0"
    "setPlainText(QString)\0text\0cut()\0"
    "copy()\0paste()\0undo()\0redo()\0clear()\0"
    "selectAll()\0insertPlainText(QString)\0"
    "appendPlainText(QString)\0appendHtml(QString)\0"
    "html\0centerCursor()\0_q_repaintContents(QRectF)\0"
    "r\0_q_adjustScrollbars()\0"
    "_q_verticalScrollbarActionTriggered(int)\0"
    "_q_cursorPositionChanged()\0tabChangesFocus\0"
    "bool\0documentTitle\0QString\0undoRedoEnabled\0"
    "lineWrapMode\0LineWrapMode\0readOnly\0"
    "plainText\0overwriteMode\0tabStopWidth\0"
    "int\0cursorWidth\0textInteractionFlags\0"
    "Qt::TextInteractionFlags\0blockCount\0"
    "maximumBlockCount\0backgroundVisible\0"
    "centerOnScroll\0NoWrap\0WidgetWidth\0"
};

void QPlainTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPlainTextEdit *_t = static_cast<QPlainTextEdit *>(_o);
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->cursorPositionChanged(); break;
        case 6: _t->updateRequest((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->blockCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->modificationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->cut(); break;
        case 11: _t->copy(); break;
        case 12: _t->paste(); break;
        case 13: _t->undo(); break;
        case 14: _t->redo(); break;
        case 15: _t->clear(); break;
        case 16: _t->selectAll(); break;
        case 17: _t->insertPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->appendPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->appendHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->centerCursor(); break;
        case 21: _t->d_func()->_q_repaintContents((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 22: _t->d_func()->_q_adjustScrollbars(); break;
        case 23: _t->d_func()->_q_verticalScrollbarActionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->d_func()->_q_cursorPositionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPlainTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPlainTextEdit::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QPlainTextEdit,
      qt_meta_data_QPlainTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlainTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlainTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlainTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlainTextEdit))
        return static_cast<void*>(const_cast< QPlainTextEdit*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QPlainTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = tabChangesFocus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = documentTitle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isUndoRedoEnabled(); break;
        case 3: *reinterpret_cast< LineWrapMode*>(_v) = lineWrapMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isReadOnly(); break;
        case 5: *reinterpret_cast< QString*>(_v) = toPlainText(); break;
        case 6: *reinterpret_cast< bool*>(_v) = overwriteMode(); break;
        case 7: *reinterpret_cast< int*>(_v) = tabStopWidth(); break;
        case 8: *reinterpret_cast< int*>(_v) = cursorWidth(); break;
        case 9: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = textInteractionFlags(); break;
        case 10: *reinterpret_cast< int*>(_v) = blockCount(); break;
        case 11: *reinterpret_cast< int*>(_v) = maximumBlockCount(); break;
        case 12: *reinterpret_cast< bool*>(_v) = backgroundVisible(); break;
        case 13: *reinterpret_cast< bool*>(_v) = centerOnScroll(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTabChangesFocus(*reinterpret_cast< bool*>(_v)); break;
        case 1: setDocumentTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: setUndoRedoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setLineWrapMode(*reinterpret_cast< LineWrapMode*>(_v)); break;
        case 4: setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 5: setPlainText(*reinterpret_cast< QString*>(_v)); break;
        case 6: setOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 7: setTabStopWidth(*reinterpret_cast< int*>(_v)); break;
        case 8: setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        case 9: setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        case 11: setMaximumBlockCount(*reinterpret_cast< int*>(_v)); break;
        case 12: setBackgroundVisible(*reinterpret_cast< bool*>(_v)); break;
        case 13: setCenterOnScroll(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPlainTextEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QPlainTextEdit::undoAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlainTextEdit::redoAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPlainTextEdit::copyAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QPlainTextEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QPlainTextEdit::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QPlainTextEdit::updateRequest(const QRect & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QPlainTextEdit::blockCountChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QPlainTextEdit::modificationChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
static const uint qt_meta_data_QPlainTextDocumentLayout[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      25,   37, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QPlainTextDocumentLayout[] = {
    "QPlainTextDocumentLayout\0cursorWidth\0"
    "int\0"
};

void QPlainTextDocumentLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QPlainTextDocumentLayout::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPlainTextDocumentLayout::staticMetaObject = {
    { &QAbstractTextDocumentLayout::staticMetaObject, qt_meta_stringdata_QPlainTextDocumentLayout,
      qt_meta_data_QPlainTextDocumentLayout, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlainTextDocumentLayout::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlainTextDocumentLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlainTextDocumentLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlainTextDocumentLayout))
        return static_cast<void*>(const_cast< QPlainTextDocumentLayout*>(this));
    return QAbstractTextDocumentLayout::qt_metacast(_clname);
}

int QPlainTextDocumentLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTextDocumentLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = cursorWidth(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
