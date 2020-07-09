/*
    SPDX-FileCopyrightText: 2020 Jake <plasma@ja-ke.tech>
    SPDX-License-Identifier: LGPL-2.1-or-later
*/

#include "ddc_widget.h"
#include <klocalizedstring.h>

DDC_Widget::DDC_Widget(QObject *parent, const QVariantList &args)
    : Plasma::Applet(parent, args),
      m_nativeText(i18n("Text coming from C++ plugin"))
{
}

DDC_Widget::~DDC_Widget()
{
}

QString DDC_Widget::nativeText() const
{
    return m_nativeText;
}

K_EXPORT_PLASMA_APPLET_WITH_JSON(ddc_widget, DDC_Widget, "metadata.json")

#include "ddc_widget.moc"
