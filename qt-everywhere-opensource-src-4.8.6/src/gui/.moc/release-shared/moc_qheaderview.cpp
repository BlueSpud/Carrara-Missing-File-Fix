/****************************************************************************
** Meta object code from reading C++ file 'qheaderview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qheaderview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qheaderview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QHeaderView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       7,  119, // properties
       1,  140, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   38,   81,   81, 0x05,
      82,  110,   81,   81, 0x05,
     139,  159,   81,   81, 0x05,
     172,  159,   81,   81, 0x05,
     192,  159,   81,   81, 0x05,
     212,  159,   81,   81, 0x05,
     238,  267,   81,   81, 0x05,
     285,  159,   81,   81, 0x05,
     317,  364,   81,   81, 0x05,
     382,   81,   81,   81, 0x05,
     402,  442,   81,   81, 0x05,

 // slots: signature, parameters, type, tag, flags
     461,  476,   81,   81, 0x0a,
     483,  515,   81,   81, 0x0a,
     527,   81,   81,   81, 0x0a,
     552,  595,   81,   81, 0x0a,
     632,  159,   81,   81, 0x09,
     651,   81,   81,   81, 0x09,
     668,  706,   81,   81, 0x09,
     738,  706,   81,   81, 0x09,
     784,  706,   81,   81, 0x08,
     824,   81,   81,   81, 0x08,

 // properties: name, type, flags
     852,  870, 0x01095003,
     875,  870, 0x01095103,
     893,  870, 0x01095103,
     912,  870, 0x01095103,
     936,  955, 0x02095103,
     959,  955, 0x02095103,
     978,  995, 0x0009510b,

 // enums: name, flags, count, data
    1009, 0x0,    5,  144,

 // enum data: key, value
    1020, uint(QHeaderView::Interactive),
    1032, uint(QHeaderView::Stretch),
    1040, uint(QHeaderView::Fixed),
    1046, uint(QHeaderView::ResizeToContents),
    1063, uint(QHeaderView::Custom),

       0        // eod
};

static const char qt_meta_stringdata_QHeaderView[] = {
    "QHeaderView\0sectionMoved(int,int,int)\0"
    "logicalIndex,oldVisualIndex,newVisualIndex\0"
    "\0sectionResized(int,int,int)\0"
    "logicalIndex,oldSize,newSize\0"
    "sectionPressed(int)\0logicalIndex\0"
    "sectionClicked(int)\0sectionEntered(int)\0"
    "sectionDoubleClicked(int)\0"
    "sectionCountChanged(int,int)\0"
    "oldCount,newCount\0sectionHandleDoubleClicked(int)\0"
    "sectionAutoResize(int,QHeaderView::ResizeMode)\0"
    "logicalIndex,mode\0geometriesChanged()\0"
    "sortIndicatorChanged(int,Qt::SortOrder)\0"
    "logicalIndex,order\0setOffset(int)\0"
    "offset\0setOffsetToSectionPosition(int)\0"
    "visualIndex\0setOffsetToLastSection()\0"
    "headerDataChanged(Qt::Orientation,int,int)\0"
    "orientation,logicalFirst,logicalLast\0"
    "updateSection(int)\0resizeSections()\0"
    "sectionsInserted(QModelIndex,int,int)\0"
    "parent,logicalFirst,logicalLast\0"
    "sectionsAboutToBeRemoved(QModelIndex,int,int)\0"
    "_q_sectionsRemoved(QModelIndex,int,int)\0"
    "_q_layoutAboutToBeChanged()\0"
    "showSortIndicator\0bool\0highlightSections\0"
    "stretchLastSection\0cascadingSectionResizes\0"
    "defaultSectionSize\0int\0minimumSectionSize\0"
    "defaultAlignment\0Qt::Alignment\0"
    "ResizeMode\0Interactive\0Stretch\0Fixed\0"
    "ResizeToContents\0Custom\0"
};

void QHeaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QHeaderView *_t = static_cast<QHeaderView *>(_o);
        switch (_id) {
        case 0: _t->sectionMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sectionResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->sectionPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sectionEntered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sectionDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->sectionCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->sectionHandleDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->sectionAutoResize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QHeaderView::ResizeMode(*)>(_a[2]))); break;
        case 9: _t->geometriesChanged(); break;
        case 10: _t->sortIndicatorChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 11: _t->setOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setOffsetToSectionPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setOffsetToLastSection(); break;
        case 14: _t->headerDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->updateSection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->resizeSections(); break;
        case 17: _t->sectionsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->sectionsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->d_func()->_q_sectionsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->d_func()->_q_layoutAboutToBeChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QHeaderView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QHeaderView::staticMetaObject = {
    { &QAbstractItemView::staticMetaObject, qt_meta_stringdata_QHeaderView,
      qt_meta_data_QHeaderView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QHeaderView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QHeaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QHeaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHeaderView))
        return static_cast<void*>(const_cast< QHeaderView*>(this));
    return QAbstractItemView::qt_metacast(_clname);
}

int QHeaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isSortIndicatorShown(); break;
        case 1: *reinterpret_cast< bool*>(_v) = highlightSections(); break;
        case 2: *reinterpret_cast< bool*>(_v) = stretchLastSection(); break;
        case 3: *reinterpret_cast< bool*>(_v) = cascadingSectionResizes(); break;
        case 4: *reinterpret_cast< int*>(_v) = defaultSectionSize(); break;
        case 5: *reinterpret_cast< int*>(_v) = minimumSectionSize(); break;
        case 6: *reinterpret_cast< Qt::Alignment*>(_v) = defaultAlignment(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSortIndicatorShown(*reinterpret_cast< bool*>(_v)); break;
        case 1: setHighlightSections(*reinterpret_cast< bool*>(_v)); break;
        case 2: setStretchLastSection(*reinterpret_cast< bool*>(_v)); break;
        case 3: setCascadingSectionResizes(*reinterpret_cast< bool*>(_v)); break;
        case 4: setDefaultSectionSize(*reinterpret_cast< int*>(_v)); break;
        case 5: setMinimumSectionSize(*reinterpret_cast< int*>(_v)); break;
        case 6: setDefaultAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QHeaderView::sectionMoved(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHeaderView::sectionResized(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHeaderView::sectionPressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QHeaderView::sectionClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QHeaderView::sectionEntered(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QHeaderView::sectionDoubleClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QHeaderView::sectionCountChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QHeaderView::sectionHandleDoubleClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QHeaderView::sectionAutoResize(int _t1, QHeaderView::ResizeMode _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QHeaderView::geometriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void QHeaderView::sortIndicatorChanged(int _t1, Qt::SortOrder _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
