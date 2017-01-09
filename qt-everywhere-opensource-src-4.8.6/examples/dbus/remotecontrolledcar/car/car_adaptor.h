/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
**
** This file was generated by qdbusxml2cpp version 0.7
** Command line was: qdbusxml2cpp -a car_adaptor.h: car.xml
**
** qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
**
** This is an auto-generated file.
** This file may have been hand-edited. Look for HAND-EDIT comments
** before re-generating it.
**
****************************************************************************/

#ifndef CAR_ADAPTOR_H_1264773009
#define CAR_ADAPTOR_H_1264773009

#include <QtCore/QObject>
#include <QtDBus/QtDBus>

QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.trolltech.Examples.CarInterface
 */
class CarInterfaceAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.trolltech.Examples.CarInterface")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.trolltech.Examples.CarInterface\">\n"
"    <method name=\"accelerate\"/>\n"
"    <method name=\"decelerate\"/>\n"
"    <method name=\"turnLeft\"/>\n"
"    <method name=\"turnRight\"/>\n"
"    <signal name=\"crashed\"/>\n"
"  </interface>\n"
        "")
public:
    CarInterfaceAdaptor(QObject *parent);
    virtual ~CarInterfaceAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void accelerate();
    void decelerate();
    void turnLeft();
    void turnRight();
Q_SIGNALS: // SIGNALS
    void crashed();
};

#endif
