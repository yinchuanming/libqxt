/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtCore module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of the Common Public License, version 1.0, as published by
** IBM.
**
** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
** FITNESS FOR A PARTICULAR PURPOSE.
**
** You should have received a copy of the CPL along with this file.
** See the LICENSE file and the cpl1.0.txt file included with the source
** distribution for more information. If you did not receive a copy of the
** license, contact the Qxt Foundation.
**
** <http://libqxt.sourceforge.net>  <foundation@libqxt.org>
**
****************************************************************************/

#ifndef QXT__QXT__ABSTRACT__FILE__LOGGER_ENGINE_H
#define QXT__QXT__ABSTRACT__FILE__LOGGER_ENGINE_H
#include "qxtloggerengine.h"
class QxtAbstractIOLoggerEngine : public QxtLoggerEngine
{
    public:
        QxtAbstractIOLoggerEngine( QIODevice *device = 0 );
        virtual void device( QIODevice *device ) = 0;
        virtual QIODevice* device() const = 0;
		bool isInitialized() const;
    
    protected:
        QIODevice *io_device;
};

#endif // QXT__QXT__ABSTRACT__FILE__LOGGER_ENGINE_H
