/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i fileoperationjob/movejob.h -c MoveJobAdaptor -l MoveJob -a dbusadaptor/movejob_adaptor movejob.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef MOVEJOB_ADAPTOR_H
#define MOVEJOB_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "fileoperationjob/movejob.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.filemanager.daemon.RenameJob
 */
class MoveJobAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.filemanager.daemon.RenameJob")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.filemanager.daemon.RenameJob\">\n"
"    <method name=\"Execute\"/>\n"
"    <signal name=\"Done\">\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    MoveJobAdaptor(MoveJob *parent);
    virtual ~MoveJobAdaptor();

    inline MoveJob *parent() const
    { return static_cast<MoveJob *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Execute();
Q_SIGNALS: // SIGNALS
    void Done(const QString &in0);
};

#endif
