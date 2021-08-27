/*
 * Copyright (C) 2011 ~ 2021 Deepin Technology Co., Ltd.
 *
 * Author:     listenerri <listenerri@gmail.com>
 *
 * Maintainer: listenerri <listenerri@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef VPNL2TPSETTINGS_H
#define VPNL2TPSETTINGS_H

#include "../abstractsettings.h"

#include <networkmanagerqt/connectionsettings.h>

class VpnL2tpSettings : public AbstractSettings
{
    Q_OBJECT

public:
    explicit VpnL2tpSettings(ConnectionSettings::Ptr connSettings, QWidget *parent = Q_NULLPTR);
    virtual ~VpnL2tpSettings() Q_DECL_OVERRIDE;

protected:
    void initSections() Q_DECL_OVERRIDE;
    inline bool clearInterfaceName() Q_DECL_OVERRIDE { return true; }
};

#endif
