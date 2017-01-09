/****************************************************************************
** Meta object code from reading C++ file 'qcalendarwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qcalendarwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcalendarwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCalendarWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      12,  134, // properties
       3,  170, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   35,   35,   35, 0x05,
      36,   51,   35,   35, 0x05,
      56,   51,   35,   35, 0x05,
      73,  101,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,   51,   35,   35, 0x0a,
     135,  161,   35,   35, 0x0a,
     169,  101,   35,   35, 0x0a,
     193,  214,   35,   35, 0x0a,
     219,  249,   35,   35, 0x0a,
     257,   35,   35,   35, 0x0a,
     273,   35,   35,   35, 0x0a,
     293,   35,   35,   35, 0x0a,
     308,   35,   35,   35, 0x0a,
     327,   35,   35,   35, 0x0a,
     346,   35,   35,   35, 0x0a,
     358,   51,   35,   35, 0x08,
     381,   51,   35,   35, 0x08,
     406,  436,   35,   35, 0x08,
     453,   35,   35,   35, 0x08,
     474,   35,   35,   35, 0x08,
     496,   35,   35,   35, 0x08,
     518,   35,   35,   35, 0x08,
     543,   35,   35,   35, 0x08,
     560,  586,   35,   35, 0x08,

 // properties: name, type, flags
     590,  603, 0x0e095103,
     609,  603, 0x0e095103,
     621,  603, 0x0e095103,
     633,  648, 0x0009510b,
     662,  674, 0x01095103,
     679,  693, 0x0009510b,
     707,  730, 0x0009510b,
     753,  774, 0x0009510b,
     795,  674, 0x01084103,
     809,  674, 0x01095103,
     830,  674, 0x01095103,
     846,  866, 0x02095103,

 // enums: name, flags, count, data
     730, 0x0,    4,  182,
     774, 0x0,    2,  190,
     693, 0x0,    2,  194,

 // enum data: key, value
     870, uint(QCalendarWidget::NoHorizontalHeader),
     889, uint(QCalendarWidget::SingleLetterDayNames),
     910, uint(QCalendarWidget::ShortDayNames),
     924, uint(QCalendarWidget::LongDayNames),
     937, uint(QCalendarWidget::NoVerticalHeader),
     954, uint(QCalendarWidget::ISOWeekNumbers),
     969, uint(QCalendarWidget::NoSelection),
     981, uint(QCalendarWidget::SingleSelection),

       0        // eod
};

static const char qt_meta_stringdata_QCalendarWidget[] = {
    "QCalendarWidget\0selectionChanged()\0\0"
    "clicked(QDate)\0date\0activated(QDate)\0"
    "currentPageChanged(int,int)\0year,month\0"
    "setSelectedDate(QDate)\0setDateRange(QDate,QDate)\0"
    "min,max\0setCurrentPage(int,int)\0"
    "setGridVisible(bool)\0show\0"
    "setNavigationBarVisible(bool)\0visible\0"
    "showNextMonth()\0showPreviousMonth()\0"
    "showNextYear()\0showPreviousYear()\0"
    "showSelectedDate()\0showToday()\0"
    "_q_slotShowDate(QDate)\0_q_slotChangeDate(QDate)\0"
    "_q_slotChangeDate(QDate,bool)\0"
    "date,changeMonth\0_q_editingFinished()\0"
    "_q_prevMonthClicked()\0_q_nextMonthClicked()\0"
    "_q_yearEditingFinished()\0_q_yearClicked()\0"
    "_q_monthChanged(QAction*)\0act\0"
    "selectedDate\0QDate\0minimumDate\0"
    "maximumDate\0firstDayOfWeek\0Qt::DayOfWeek\0"
    "gridVisible\0bool\0selectionMode\0"
    "SelectionMode\0horizontalHeaderFormat\0"
    "HorizontalHeaderFormat\0verticalHeaderFormat\0"
    "VerticalHeaderFormat\0headerVisible\0"
    "navigationBarVisible\0dateEditEnabled\0"
    "dateEditAcceptDelay\0int\0NoHorizontalHeader\0"
    "SingleLetterDayNames\0ShortDayNames\0"
    "LongDayNames\0NoVerticalHeader\0"
    "ISOWeekNumbers\0NoSelection\0SingleSelection\0"
};

void QCalendarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCalendarWidget *_t = static_cast<QCalendarWidget *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setSelectedDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 5: _t->setDateRange((*reinterpret_cast< const QDate(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2]))); break;
        case 6: _t->setCurrentPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setGridVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setNavigationBarVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showNextMonth(); break;
        case 10: _t->showPreviousMonth(); break;
        case 11: _t->showNextYear(); break;
        case 12: _t->showPreviousYear(); break;
        case 13: _t->showSelectedDate(); break;
        case 14: _t->showToday(); break;
        case 15: _t->d_func()->_q_slotShowDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 16: _t->d_func()->_q_slotChangeDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 17: _t->d_func()->_q_slotChangeDate((*reinterpret_cast< const QDate(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->d_func()->_q_editingFinished(); break;
        case 19: _t->d_func()->_q_prevMonthClicked(); break;
        case 20: _t->d_func()->_q_nextMonthClicked(); break;
        case 21: _t->d_func()->_q_yearEditingFinished(); break;
        case 22: _t->d_func()->_q_yearClicked(); break;
        case 23: _t->d_func()->_q_monthChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCalendarWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCalendarWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCalendarWidget,
      qt_meta_data_QCalendarWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCalendarWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCalendarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCalendarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCalendarWidget))
        return static_cast<void*>(const_cast< QCalendarWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCalendarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = selectedDate(); break;
        case 1: *reinterpret_cast< QDate*>(_v) = minimumDate(); break;
        case 2: *reinterpret_cast< QDate*>(_v) = maximumDate(); break;
        case 3: *reinterpret_cast< Qt::DayOfWeek*>(_v) = firstDayOfWeek(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isGridVisible(); break;
        case 5: *reinterpret_cast< SelectionMode*>(_v) = selectionMode(); break;
        case 6: *reinterpret_cast< HorizontalHeaderFormat*>(_v) = horizontalHeaderFormat(); break;
        case 7: *reinterpret_cast< VerticalHeaderFormat*>(_v) = verticalHeaderFormat(); break;
        case 8: *reinterpret_cast< bool*>(_v) = isHeaderVisible(); break;
        case 9: *reinterpret_cast< bool*>(_v) = isNavigationBarVisible(); break;
        case 10: *reinterpret_cast< bool*>(_v) = isDateEditEnabled(); break;
        case 11: *reinterpret_cast< int*>(_v) = dateEditAcceptDelay(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSelectedDate(*reinterpret_cast< QDate*>(_v)); break;
        case 1: setMinimumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 2: setMaximumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 3: setFirstDayOfWeek(*reinterpret_cast< Qt::DayOfWeek*>(_v)); break;
        case 4: setGridVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: setSelectionMode(*reinterpret_cast< SelectionMode*>(_v)); break;
        case 6: setHorizontalHeaderFormat(*reinterpret_cast< HorizontalHeaderFormat*>(_v)); break;
        case 7: setVerticalHeaderFormat(*reinterpret_cast< VerticalHeaderFormat*>(_v)); break;
        case 8: setHeaderVisible(*reinterpret_cast< bool*>(_v)); break;
        case 9: setNavigationBarVisible(*reinterpret_cast< bool*>(_v)); break;
        case 10: setDateEditEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 11: setDateEditAcceptDelay(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCalendarWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QCalendarWidget::clicked(const QDate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCalendarWidget::activated(const QDate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCalendarWidget::currentPageChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
