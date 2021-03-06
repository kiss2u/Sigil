/************************************************************************
**
**  Copyright (C) 2015-2020 Kevin B. Hendricks, Stratford Ontario Canada
**  Copyright (C) 2011      John Schember <john@nachtimwald.com>
**
**  This file is part of Sigil.
**
**  Sigil is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  Sigil is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with Sigil.  If not, see <http://www.gnu.org/licenses/>.
**
*************************************************************************/

#pragma once
#ifndef LANGUAGEWIDGET_H
#define LANGUAGEWIDGET_H

#include "PreferencesWidget.h"
#include "ui_PLanguageWidget.h"


/**
 * Preferences widget for language related preferences.
 */
class LanguageWidget : public PreferencesWidget
{
public:
    LanguageWidget();
    PreferencesWidget::ResultActions saveSettings();

private:
    void readSettings();

    QString m_UILanguage;

    Ui::LanguageWidget ui;
};

#endif // LANGUAGEWIDGET_H
