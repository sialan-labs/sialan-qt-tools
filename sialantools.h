/*
    Copyright (C) 2014 Sialan Labs
    http://labs.sialan.org

    This project is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This project is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SIALANTOOLS_H
#define SIALANTOOLS_H

#include <QObject>
#include <QVariant>

class SialanToolsPrivate;
class SialanTools : public QObject
{
    Q_OBJECT
public:
    SialanTools(QObject *parent = 0);
    ~SialanTools();

public slots:
    static QVariant call( QObject *obj, const QString & member, Qt::ConnectionType type,
                                                                const QVariant & v0 = QVariant(),
                                                                const QVariant & v1 = QVariant(),
                                                                const QVariant & v2 = QVariant(),
                                                                const QVariant & v3 = QVariant(),
                                                                const QVariant & v4 = QVariant(),
                                                                const QVariant & v5 = QVariant(),
                                                                const QVariant & v6 = QVariant(),
                                                                const QVariant & v7 = QVariant(),
                                                                const QVariant & v8 = QVariant(),
                                                                const QVariant & v9 = QVariant() );

private:
    SialanToolsPrivate *p;
};

#endif // SIALANTOOLS_H
