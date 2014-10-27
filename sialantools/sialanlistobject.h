/*
    Copyright (C) 2014 Sialan Labs
    http://labs.sialan.org

    Kaqaz is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Kaqaz is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SIALANLISTOBJECT_H
#define SIALANLISTOBJECT_H

#include <QObject>
#include <QVariant>

class SialanListObjectPrivate;
class SialanListObject : public QObject
{
    Q_PROPERTY(int count READ count NOTIFY countChanged)

    Q_OBJECT
public:
    SialanListObject(QObject *parent = 0);
    ~SialanListObject();

    Q_INVOKABLE void removeAll( const QVariant & v );
    Q_INVOKABLE void removeOne( const QVariant & v );
    Q_INVOKABLE void removeAt( int index );
    Q_INVOKABLE QVariant takeLast();
    Q_INVOKABLE QVariant takeFirst();
    Q_INVOKABLE QVariant takeAt( int index );

    Q_INVOKABLE QVariant last() const;
    Q_INVOKABLE QVariant first() const;

    Q_INVOKABLE void insert( int index, const QVariant & v );
    Q_INVOKABLE void append( const QVariant & v );
    Q_INVOKABLE void prepend( const QVariant & v );

    Q_INVOKABLE int count() const;
    Q_INVOKABLE bool isEmpty() const;

    Q_INVOKABLE QVariant at( int index ) const;
    Q_INVOKABLE int indexOf( const QVariant & v ) const;

    Q_INVOKABLE void fromList( const QVariantList & list );
    Q_INVOKABLE QVariantList toList() const;

    Q_INVOKABLE bool contains( const QVariant & v ) const;

signals:
    void countChanged();

private:
    SialanListObjectPrivate *p;
};

#endif // SIALANLISTOBJECT_H
