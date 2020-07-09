/*
    SPDX-FileCopyrightText: 2020 Jake <plasma@ja-ke.tech>
    SPDX-License-Identifier: LGPL-2.1-or-later
*/

#ifndef DDC_WIDGET_H
#define DDC_WIDGET_H


#include <Plasma/Applet>

class DDC_Widget : public Plasma::Applet
{
    Q_OBJECT
    Q_PROPERTY(QString nativeText READ nativeText CONSTANT)

public:
    DDC_Widget( QObject *parent, const QVariantList &args );
    ~DDC_Widget();

    QString nativeText() const;

private:
    QString m_nativeText;
};

#endif
