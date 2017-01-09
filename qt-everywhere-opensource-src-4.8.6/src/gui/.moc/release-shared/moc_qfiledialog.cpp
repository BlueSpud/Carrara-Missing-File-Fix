/****************************************************************************
** Meta object code from reading C++ file 'qfiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qfiledialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfiledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFileDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       9,  159, // properties
       5,  186, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   34,   39,   39, 0x05,
      40,   67,   39,   39, 0x05,
      73,   97,   39,   39, 0x05,
     102,  128,   39,   39, 0x05,
     138,  162,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
     169,   39,   39,   39, 0x08,
     193,   39,   39,   39, 0x08,
     215,   39,   39,   39, 0x08,
     236,   39,   39,   39, 0x08,
     258,   39,   39,   39, 0x08,
     279,   39,   39,   39, 0x08,
     297,   39,   39,   39, 0x08,
     318,   39,   39,   39, 0x08,
     345,   39,   39,   39, 0x08,
     364,   39,   39,   39, 0x08,
     383,   39,   39,   39, 0x08,
     399,   39,   39,   39, 0x08,
     419,  450,   39,   39, 0x08,
     456,  450,   39,   39, 0x08,
     487,   97,   39,   39, 0x08,
     513,  450,   39,   39, 0x08,
     535,   39,   39,   39, 0x08,
     557,  574,   39,   39, 0x08,
     578,   39,   39,   39, 0x08,
     590,   39,   39,   39, 0x08,
     614,  647,   39,   39, 0x08,
     652,  681,   39,   39, 0x08,
     688,  728,   39,   39, 0x08,
     749,   39,   39,   39, 0x08,

 // properties: name, type, flags
     780,  789, 0x0009510b,
     798,  807, 0x0009510b,
     816,  827, 0x0009510b,
     838,  847, 0x01094103,
     852,  847, 0x01094103,
     868,  847, 0x01094103,
     885,  899, 0x0a095103,
     907,  847, 0x01094103,
     932,  940, 0x0009510b,

 // enums: name, flags, count, data
     789, 0x0,    2,  206,
     807, 0x0,    5,  210,
     827, 0x0,    2,  220,
     948, 0x0,    8,  224,
     940, 0x1,    8,  240,

 // enum data: key, value
     955, uint(QFileDialog::Detail),
     962, uint(QFileDialog::List),
     967, uint(QFileDialog::AnyFile),
     975, uint(QFileDialog::ExistingFile),
     988, uint(QFileDialog::Directory),
     998, uint(QFileDialog::ExistingFiles),
    1012, uint(QFileDialog::DirectoryOnly),
    1026, uint(QFileDialog::AcceptOpen),
    1037, uint(QFileDialog::AcceptSave),
    1048, uint(QFileDialog::ShowDirsOnly),
    1061, uint(QFileDialog::DontResolveSymlinks),
    1081, uint(QFileDialog::DontConfirmOverwrite),
    1102, uint(QFileDialog::DontUseSheet),
    1115, uint(QFileDialog::DontUseNativeDialog),
    1135, uint(QFileDialog::ReadOnly),
    1144, uint(QFileDialog::HideNameFilterDetails),
    1166, uint(QFileDialog::DontUseCustomDirectoryIcons),
    1048, uint(QFileDialog::ShowDirsOnly),
    1061, uint(QFileDialog::DontResolveSymlinks),
    1081, uint(QFileDialog::DontConfirmOverwrite),
    1102, uint(QFileDialog::DontUseSheet),
    1115, uint(QFileDialog::DontUseNativeDialog),
    1135, uint(QFileDialog::ReadOnly),
    1144, uint(QFileDialog::HideNameFilterDetails),
    1166, uint(QFileDialog::DontUseCustomDirectoryIcons),

       0        // eod
};

static const char qt_meta_stringdata_QFileDialog[] = {
    "QFileDialog\0fileSelected(QString)\0"
    "file\0\0filesSelected(QStringList)\0files\0"
    "currentChanged(QString)\0path\0"
    "directoryEntered(QString)\0directory\0"
    "filterSelected(QString)\0filter\0"
    "_q_pathChanged(QString)\0_q_navigateBackward()\0"
    "_q_navigateForward()\0_q_navigateToParent()\0"
    "_q_createDirectory()\0_q_showListView()\0"
    "_q_showDetailsView()\0_q_showContextMenu(QPoint)\0"
    "_q_renameCurrent()\0_q_deleteCurrent()\0"
    "_q_showHidden()\0_q_updateOkButton()\0"
    "_q_currentChanged(QModelIndex)\0index\0"
    "_q_enterDirectory(QModelIndex)\0"
    "_q_goToDirectory(QString)\0"
    "_q_useNameFilter(int)\0_q_selectionChanged()\0"
    "_q_goToUrl(QUrl)\0url\0_q_goHome()\0"
    "_q_showHeader(QAction*)\0"
    "_q_autoCompleteFileName(QString)\0text\0"
    "_q_rowsInserted(QModelIndex)\0parent\0"
    "_q_fileRenamed(QString,QString,QString)\0"
    "path,oldName,newName\0"
    "_q_macRunNativeAppModalPanel()\0viewMode\0"
    "ViewMode\0fileMode\0FileMode\0acceptMode\0"
    "AcceptMode\0readOnly\0bool\0resolveSymlinks\0"
    "confirmOverwrite\0defaultSuffix\0QString\0"
    "nameFilterDetailsVisible\0options\0"
    "Options\0Option\0Detail\0List\0AnyFile\0"
    "ExistingFile\0Directory\0ExistingFiles\0"
    "DirectoryOnly\0AcceptOpen\0AcceptSave\0"
    "ShowDirsOnly\0DontResolveSymlinks\0"
    "DontConfirmOverwrite\0DontUseSheet\0"
    "DontUseNativeDialog\0ReadOnly\0"
    "HideNameFilterDetails\0DontUseCustomDirectoryIcons\0"
};

void QFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFileDialog *_t = static_cast<QFileDialog *>(_o);
        switch (_id) {
        case 0: _t->fileSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->filesSelected((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->directoryEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->filterSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_pathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_navigateBackward(); break;
        case 7: _t->d_func()->_q_navigateForward(); break;
        case 8: _t->d_func()->_q_navigateToParent(); break;
        case 9: _t->d_func()->_q_createDirectory(); break;
        case 10: _t->d_func()->_q_showListView(); break;
        case 11: _t->d_func()->_q_showDetailsView(); break;
        case 12: _t->d_func()->_q_showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_renameCurrent(); break;
        case 14: _t->d_func()->_q_deleteCurrent(); break;
        case 15: _t->d_func()->_q_showHidden(); break;
        case 16: _t->d_func()->_q_updateOkButton(); break;
        case 17: _t->d_func()->_q_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 18: _t->d_func()->_q_enterDirectory((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 19: _t->d_func()->_q_goToDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->d_func()->_q_useNameFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->d_func()->_q_selectionChanged(); break;
        case 22: _t->d_func()->_q_goToUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 23: _t->d_func()->_q_goHome(); break;
        case 24: _t->d_func()->_q_showHeader((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 25: _t->d_func()->_q_autoCompleteFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->d_func()->_q_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 27: _t->d_func()->_q_fileRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 28: _t->d_func()->_q_macRunNativeAppModalPanel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFileDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFileDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QFileDialog,
      qt_meta_data_QFileDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFileDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFileDialog))
        return static_cast<void*>(const_cast< QFileDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ViewMode*>(_v) = viewMode(); break;
        case 1: *reinterpret_cast< FileMode*>(_v) = fileMode(); break;
        case 2: *reinterpret_cast< AcceptMode*>(_v) = acceptMode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isReadOnly(); break;
        case 4: *reinterpret_cast< bool*>(_v) = resolveSymlinks(); break;
        case 5: *reinterpret_cast< bool*>(_v) = confirmOverwrite(); break;
        case 6: *reinterpret_cast< QString*>(_v) = defaultSuffix(); break;
        case 7: *reinterpret_cast< bool*>(_v) = isNameFilterDetailsVisible(); break;
        case 8: *reinterpret_cast<int*>(_v) = QFlag(options()); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setViewMode(*reinterpret_cast< ViewMode*>(_v)); break;
        case 1: setFileMode(*reinterpret_cast< FileMode*>(_v)); break;
        case 2: setAcceptMode(*reinterpret_cast< AcceptMode*>(_v)); break;
        case 3: setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 4: setResolveSymlinks(*reinterpret_cast< bool*>(_v)); break;
        case 5: setConfirmOverwrite(*reinterpret_cast< bool*>(_v)); break;
        case 6: setDefaultSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 7: setNameFilterDetailsVisible(*reinterpret_cast< bool*>(_v)); break;
        case 8: setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QFileDialog::fileSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFileDialog::filesSelected(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFileDialog::currentChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QFileDialog::directoryEntered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QFileDialog::filterSelected(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
