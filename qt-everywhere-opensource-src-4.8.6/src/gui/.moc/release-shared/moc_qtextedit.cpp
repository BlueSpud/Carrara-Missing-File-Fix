/****************************************************************************
** Meta object code from reading C++ file 'qtextedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtextedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
      14,  204, // properties
       2,  260, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   24,   24,   24, 0x05,
      25,   45,   24,   24, 0x05,
      47,   45,   24,   24, 0x05,
      67,  109,   24,   24, 0x05,
     116,   45,   24,   24, 0x05,
     136,   24,   24,   24, 0x05,
     155,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,  203,   24,   24, 0x0a,
     205,  228,   24,   24, 0x0a,
     239,  258,   24,   24, 0x0a,
     260,   45,   24,   24, 0x0a,
     283,   45,   24,   24, 0x0a,
     303,  324,   24,   24, 0x0a,
     326,  324,   24,   24, 0x0a,
     357,  379,   24,   24, 0x0a,
     381,  409,   24,   24, 0x0a,
     411,  433,   24,   24, 0x0a,
     438,  433,   24,   24, 0x0a,
     455,  433,   24,   24, 0x0a,
     472,   24,   24,   24, 0x0a,
     478,   24,   24,   24, 0x0a,
     485,   24,   24,   24, 0x0a,
     493,   24,   24,   24, 0x0a,
     500,   24,   24,   24, 0x0a,
     507,   24,   24,   24, 0x0a,
     515,   24,   24,   24, 0x0a,
     527,  433,   24,   24, 0x0a,
     552,  433,   24,   24, 0x0a,
     572,  433,   24,   24, 0x0a,
     588,  612,   24,   24, 0x0a,
     617,  629,   24,   24, 0x0a,
     635,   24,   24,   24, 0x2a,
     644,  629,   24,   24, 0x0a,
     657,   24,   24,   24, 0x2a,
     667,  694,   24,   24, 0x08,
     696,   24,   24,   24, 0x08,
     741,   24,   24,   24, 0x08,
     763,   24,   24,   24, 0x08,

 // properties: name, type, flags
     788,  803, 0x0009510b,
     818,  834, 0x01095103,
     839,  853, 0x0a095103,
     861,  834, 0x01095103,
     877,  890, 0x0009510b,
     903,  925, 0x02095103,
     929,  834, 0x01095103,
     938,  853, 0x0a595103,
     943,  853, 0x0a094103,
     953,  834, 0x01095103,
     967,  925, 0x02095103,
     980,  834, 0x01095103,
     995,  925, 0x02095103,
    1007, 1028, 0x0009510b,

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
     890, 0x0,    4,  268,
     803, 0x1,    3,  276,

 // enum data: key, value
    1053, uint(QTextEdit::NoWrap),
    1060, uint(QTextEdit::WidgetWidth),
    1072, uint(QTextEdit::FixedPixelWidth),
    1088, uint(QTextEdit::FixedColumnWidth),
    1105, uint(QTextEdit::AutoNone),
    1114, uint(QTextEdit::AutoBulletList),
    1129, uint(QTextEdit::AutoAll),

       0        // eod
};

static const char qt_meta_stringdata_QTextEdit[] = {
    "QTextEdit\0textChanged()\0\0undoAvailable(bool)\0"
    "b\0redoAvailable(bool)\0"
    "currentCharFormatChanged(QTextCharFormat)\0"
    "format\0copyAvailable(bool)\0"
    "selectionChanged()\0cursorPositionChanged()\0"
    "setFontPointSize(qreal)\0s\0"
    "setFontFamily(QString)\0fontFamily\0"
    "setFontWeight(int)\0w\0setFontUnderline(bool)\0"
    "setFontItalic(bool)\0setTextColor(QColor)\0"
    "c\0setTextBackgroundColor(QColor)\0"
    "setCurrentFont(QFont)\0f\0"
    "setAlignment(Qt::Alignment)\0a\0"
    "setPlainText(QString)\0text\0setHtml(QString)\0"
    "setText(QString)\0cut()\0copy()\0paste()\0"
    "undo()\0redo()\0clear()\0selectAll()\0"
    "insertPlainText(QString)\0insertHtml(QString)\0"
    "append(QString)\0scrollToAnchor(QString)\0"
    "name\0zoomIn(int)\0range\0zoomIn()\0"
    "zoomOut(int)\0zoomOut()\0"
    "_q_repaintContents(QRectF)\0r\0"
    "_q_currentCharFormatChanged(QTextCharFormat)\0"
    "_q_adjustScrollbars()\0_q_ensureVisible(QRectF)\0"
    "autoFormatting\0AutoFormatting\0"
    "tabChangesFocus\0bool\0documentTitle\0"
    "QString\0undoRedoEnabled\0lineWrapMode\0"
    "LineWrapMode\0lineWrapColumnOrWidth\0"
    "int\0readOnly\0html\0plainText\0overwriteMode\0"
    "tabStopWidth\0acceptRichText\0cursorWidth\0"
    "textInteractionFlags\0Qt::TextInteractionFlags\0"
    "NoWrap\0WidgetWidth\0FixedPixelWidth\0"
    "FixedColumnWidth\0AutoNone\0AutoBulletList\0"
    "AutoAll\0"
};

void QTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTextEdit *_t = static_cast<QTextEdit *>(_o);
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->undoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->redoAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->currentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 4: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->cursorPositionChanged(); break;
        case 7: _t->setFontPointSize((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setFontFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setFontWeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setFontUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setFontItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setTextColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: _t->setTextBackgroundColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 14: _t->setCurrentFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 15: _t->setAlignment((*reinterpret_cast< Qt::Alignment(*)>(_a[1]))); break;
        case 16: _t->setPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->setHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->cut(); break;
        case 20: _t->copy(); break;
        case 21: _t->paste(); break;
        case 22: _t->undo(); break;
        case 23: _t->redo(); break;
        case 24: _t->clear(); break;
        case 25: _t->selectAll(); break;
        case 26: _t->insertPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->insertHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->append((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->scrollToAnchor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->zoomIn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->zoomIn(); break;
        case 32: _t->zoomOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->zoomOut(); break;
        case 34: _t->d_func()->_q_repaintContents((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 35: _t->d_func()->_q_currentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 36: _t->d_func()->_q_adjustScrollbars(); break;
        case 37: _t->d_func()->_q_ensureVisible((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTextEdit::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QTextEdit,
      qt_meta_data_QTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTextEdit))
        return static_cast<void*>(const_cast< QTextEdit*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(autoFormatting()); break;
        case 1: *reinterpret_cast< bool*>(_v) = tabChangesFocus(); break;
        case 2: *reinterpret_cast< QString*>(_v) = documentTitle(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isUndoRedoEnabled(); break;
        case 4: *reinterpret_cast< LineWrapMode*>(_v) = lineWrapMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = lineWrapColumnOrWidth(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isReadOnly(); break;
        case 7: *reinterpret_cast< QString*>(_v) = toHtml(); break;
        case 8: *reinterpret_cast< QString*>(_v) = toPlainText(); break;
        case 9: *reinterpret_cast< bool*>(_v) = overwriteMode(); break;
        case 10: *reinterpret_cast< int*>(_v) = tabStopWidth(); break;
        case 11: *reinterpret_cast< bool*>(_v) = acceptRichText(); break;
        case 12: *reinterpret_cast< int*>(_v) = cursorWidth(); break;
        case 13: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = textInteractionFlags(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAutoFormatting(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: setTabChangesFocus(*reinterpret_cast< bool*>(_v)); break;
        case 2: setDocumentTitle(*reinterpret_cast< QString*>(_v)); break;
        case 3: setUndoRedoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: setLineWrapMode(*reinterpret_cast< LineWrapMode*>(_v)); break;
        case 5: setLineWrapColumnOrWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 7: setHtml(*reinterpret_cast< QString*>(_v)); break;
        case 8: setPlainText(*reinterpret_cast< QString*>(_v)); break;
        case 9: setOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 10: setTabStopWidth(*reinterpret_cast< int*>(_v)); break;
        case 11: setAcceptRichText(*reinterpret_cast< bool*>(_v)); break;
        case 12: setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        case 13: setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
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
void QTextEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QTextEdit::undoAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTextEdit::redoAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTextEdit::currentCharFormatChanged(const QTextCharFormat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTextEdit::copyAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTextEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QTextEdit::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
