/****************************************************************************
** Meta object code from reading C++ file 'qabstractitemview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qabstractitemview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractitemview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAbstractItemView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
      16,  209, // properties
       6,  257, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   39,   45,   45, 0x05,
      46,   39,   45,   45, 0x05,
      67,   39,   45,   45, 0x05,
      94,   39,   45,   45, 0x05,
     117,   39,   45,   45, 0x05,
     138,   45,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
     156,   45,   45,   45, 0x0a,
     164,   39,   45,   45, 0x0a,
     190,   45,   45,   45, 0x0a,
     206,   45,   45,   45, 0x0a,
     218,   39,   45,   45, 0x0a,
     236,   45,   45,   45, 0x0a,
     253,   39,   45,   45, 0x0a,
     282,   45,   45,   45, 0x0a,
     296,   45,   45,   45, 0x0a,
     313,   39,   45,   45, 0x0a,
     333,  370,   45,   45, 0x09,
     390,  424,   45,   45, 0x09,
     441,  424,   45,   45, 0x09,
     483,  531,   45,   45, 0x09,
     551,  591,   45,   45, 0x09,
     608,   45,   45,   45, 0x09,
     627,   45,   45,   45, 0x09,
     652,   45,   45,   45, 0x09,
     671,  700,   45,   45, 0x09,
     707,  700,   45,   45, 0x09,
     738,  773,   45,   45, 0x09,
     779,  773,   45,   45, 0x09,
     816,  873,   45,   45, 0x09,
     885,  906,   45,   45, 0x09,
     913,  906,   45,   45, 0x09,
     939,  987,   45,   45, 0x08,
     990,  987,   45,   45, 0x08,
    1029,  987,   45,   45, 0x08,
    1069,  987,   45,   45, 0x08,
    1106,  987,   45,   45, 0x08,
    1142,   45,   45,   45, 0x08,
    1162,   45,   45,   45, 0x08,
    1181,   45,   45,   45, 0x08,

 // properties: name, type, flags
    1204, 1215, 0x01095103,
    1220, 1237, 0x02095103,
    1241, 1254, 0x0009510b,
    1267, 1215, 0x01095103,
    1284, 1215, 0x01095003,
    1302, 1215, 0x01095103,
    1314, 1215, 0x01095103,
    1336, 1349, 0x0009510b,
    1362, 1380, 0x0009510b,
    1395, 1215, 0x01095103,
    1416, 1430, 0x0009510b,
    1444, 1462, 0x0009510b,
    1480, 1489, 0x15095103,
    1495, 1509, 0x0009510b,
    1527, 1546, 0x0009510b,
    1557, 1546, 0x0009510b,

 // enums: name, flags, count, data
    1430, 0x0,    5,  281,
    1462, 0x0,    3,  291,
    1578, 0x0,    4,  297,
    1254, 0x1,    7,  305,
    1546, 0x0,    2,  319,
    1349, 0x0,    5,  323,

 // enum data: key, value
    1589, uint(QAbstractItemView::NoSelection),
    1601, uint(QAbstractItemView::SingleSelection),
    1617, uint(QAbstractItemView::MultiSelection),
    1632, uint(QAbstractItemView::ExtendedSelection),
    1650, uint(QAbstractItemView::ContiguousSelection),
    1670, uint(QAbstractItemView::SelectItems),
    1682, uint(QAbstractItemView::SelectRows),
    1693, uint(QAbstractItemView::SelectColumns),
    1707, uint(QAbstractItemView::EnsureVisible),
    1721, uint(QAbstractItemView::PositionAtTop),
    1735, uint(QAbstractItemView::PositionAtBottom),
    1752, uint(QAbstractItemView::PositionAtCenter),
    1769, uint(QAbstractItemView::NoEditTriggers),
    1784, uint(QAbstractItemView::CurrentChanged),
    1799, uint(QAbstractItemView::DoubleClicked),
    1813, uint(QAbstractItemView::SelectedClicked),
    1829, uint(QAbstractItemView::EditKeyPressed),
    1844, uint(QAbstractItemView::AnyKeyPressed),
    1858, uint(QAbstractItemView::AllEditTriggers),
    1874, uint(QAbstractItemView::ScrollPerItem),
    1888, uint(QAbstractItemView::ScrollPerPixel),
    1903, uint(QAbstractItemView::NoDragDrop),
    1914, uint(QAbstractItemView::DragOnly),
    1923, uint(QAbstractItemView::DropOnly),
    1932, uint(QAbstractItemView::DragDrop),
    1941, uint(QAbstractItemView::InternalMove),

       0        // eod
};

static const char qt_meta_stringdata_QAbstractItemView[] = {
    "QAbstractItemView\0pressed(QModelIndex)\0"
    "index\0\0clicked(QModelIndex)\0"
    "doubleClicked(QModelIndex)\0"
    "activated(QModelIndex)\0entered(QModelIndex)\0"
    "viewportEntered()\0reset()\0"
    "setRootIndex(QModelIndex)\0doItemsLayout()\0"
    "selectAll()\0edit(QModelIndex)\0"
    "clearSelection()\0setCurrentIndex(QModelIndex)\0"
    "scrollToTop()\0scrollToBottom()\0"
    "update(QModelIndex)\0"
    "dataChanged(QModelIndex,QModelIndex)\0"
    "topLeft,bottomRight\0"
    "rowsInserted(QModelIndex,int,int)\0"
    "parent,start,end\0"
    "rowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "selectionChanged(QItemSelection,QItemSelection)\0"
    "selected,deselected\0"
    "currentChanged(QModelIndex,QModelIndex)\0"
    "current,previous\0updateEditorData()\0"
    "updateEditorGeometries()\0updateGeometries()\0"
    "verticalScrollbarAction(int)\0action\0"
    "horizontalScrollbarAction(int)\0"
    "verticalScrollbarValueChanged(int)\0"
    "value\0horizontalScrollbarValueChanged(int)\0"
    "closeEditor(QWidget*,QAbstractItemDelegate::EndEditHint)\0"
    "editor,hint\0commitData(QWidget*)\0"
    "editor\0editorDestroyed(QObject*)\0"
    "_q_columnsAboutToBeRemoved(QModelIndex,int,int)\0"
    ",,\0_q_columnsRemoved(QModelIndex,int,int)\0"
    "_q_columnsInserted(QModelIndex,int,int)\0"
    "_q_rowsInserted(QModelIndex,int,int)\0"
    "_q_rowsRemoved(QModelIndex,int,int)\0"
    "_q_modelDestroyed()\0_q_layoutChanged()\0"
    "_q_headerDataChanged()\0autoScroll\0"
    "bool\0autoScrollMargin\0int\0editTriggers\0"
    "EditTriggers\0tabKeyNavigation\0"
    "showDropIndicator\0dragEnabled\0"
    "dragDropOverwriteMode\0dragDropMode\0"
    "DragDropMode\0defaultDropAction\0"
    "Qt::DropAction\0alternatingRowColors\0"
    "selectionMode\0SelectionMode\0"
    "selectionBehavior\0SelectionBehavior\0"
    "iconSize\0QSize\0textElideMode\0"
    "Qt::TextElideMode\0verticalScrollMode\0"
    "ScrollMode\0horizontalScrollMode\0"
    "ScrollHint\0NoSelection\0SingleSelection\0"
    "MultiSelection\0ExtendedSelection\0"
    "ContiguousSelection\0SelectItems\0"
    "SelectRows\0SelectColumns\0EnsureVisible\0"
    "PositionAtTop\0PositionAtBottom\0"
    "PositionAtCenter\0NoEditTriggers\0"
    "CurrentChanged\0DoubleClicked\0"
    "SelectedClicked\0EditKeyPressed\0"
    "AnyKeyPressed\0AllEditTriggers\0"
    "ScrollPerItem\0ScrollPerPixel\0NoDragDrop\0"
    "DragOnly\0DropOnly\0DragDrop\0InternalMove\0"
};

void QAbstractItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QAbstractItemView *_t = static_cast<QAbstractItemView *>(_o);
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->entered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->viewportEntered(); break;
        case 6: _t->reset(); break;
        case 7: _t->setRootIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->doItemsLayout(); break;
        case 9: _t->selectAll(); break;
        case 10: _t->edit((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->clearSelection(); break;
        case 12: _t->setCurrentIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->scrollToTop(); break;
        case 14: _t->scrollToBottom(); break;
        case 15: _t->update((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 17: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 20: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 21: _t->updateEditorData(); break;
        case 22: _t->updateEditorGeometries(); break;
        case 23: _t->updateGeometries(); break;
        case 24: _t->verticalScrollbarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->horizontalScrollbarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->verticalScrollbarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->horizontalScrollbarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->closeEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 29: _t->commitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 30: _t->editorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 31: _t->d_func()->_q_columnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 32: _t->d_func()->_q_columnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 33: _t->d_func()->_q_columnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 34: _t->d_func()->_q_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: _t->d_func()->_q_rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 36: _t->d_func()->_q_modelDestroyed(); break;
        case 37: _t->d_func()->_q_layoutChanged(); break;
        case 38: _t->d_func()->_q_headerDataChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAbstractItemView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAbstractItemView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QAbstractItemView,
      qt_meta_data_QAbstractItemView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAbstractItemView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAbstractItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAbstractItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractItemView))
        return static_cast<void*>(const_cast< QAbstractItemView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QAbstractItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = hasAutoScroll(); break;
        case 1: *reinterpret_cast< int*>(_v) = autoScrollMargin(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(editTriggers()); break;
        case 3: *reinterpret_cast< bool*>(_v) = tabKeyNavigation(); break;
        case 4: *reinterpret_cast< bool*>(_v) = showDropIndicator(); break;
        case 5: *reinterpret_cast< bool*>(_v) = dragEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = dragDropOverwriteMode(); break;
        case 7: *reinterpret_cast< DragDropMode*>(_v) = dragDropMode(); break;
        case 8: *reinterpret_cast< Qt::DropAction*>(_v) = defaultDropAction(); break;
        case 9: *reinterpret_cast< bool*>(_v) = alternatingRowColors(); break;
        case 10: *reinterpret_cast< SelectionMode*>(_v) = selectionMode(); break;
        case 11: *reinterpret_cast< SelectionBehavior*>(_v) = selectionBehavior(); break;
        case 12: *reinterpret_cast< QSize*>(_v) = iconSize(); break;
        case 13: *reinterpret_cast< Qt::TextElideMode*>(_v) = textElideMode(); break;
        case 14: *reinterpret_cast< ScrollMode*>(_v) = verticalScrollMode(); break;
        case 15: *reinterpret_cast< ScrollMode*>(_v) = horizontalScrollMode(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAutoScroll(*reinterpret_cast< bool*>(_v)); break;
        case 1: setAutoScrollMargin(*reinterpret_cast< int*>(_v)); break;
        case 2: setEditTriggers(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: setTabKeyNavigation(*reinterpret_cast< bool*>(_v)); break;
        case 4: setDropIndicatorShown(*reinterpret_cast< bool*>(_v)); break;
        case 5: setDragEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: setDragDropOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 7: setDragDropMode(*reinterpret_cast< DragDropMode*>(_v)); break;
        case 8: setDefaultDropAction(*reinterpret_cast< Qt::DropAction*>(_v)); break;
        case 9: setAlternatingRowColors(*reinterpret_cast< bool*>(_v)); break;
        case 10: setSelectionMode(*reinterpret_cast< SelectionMode*>(_v)); break;
        case 11: setSelectionBehavior(*reinterpret_cast< SelectionBehavior*>(_v)); break;
        case 12: setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 13: setTextElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 14: setVerticalScrollMode(*reinterpret_cast< ScrollMode*>(_v)); break;
        case 15: setHorizontalScrollMode(*reinterpret_cast< ScrollMode*>(_v)); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractItemView::pressed(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractItemView::clicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractItemView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractItemView::activated(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractItemView::entered(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractItemView::viewportEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
