/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtCore module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or any later version.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** There is aditional information in the LICENSE file of libqxt.
** If you did not receive a copy of the file try to download it or
** contact the libqxt Management
** 
** <http://libqxt.sourceforge.net>  <aep@exys.org>  <coda@bobandgeorge.com>
**
****************************************************************************/

#ifndef QXTSQLQUERY_H
#define QXTSQLQUERY_H
#include <QSqlQuery>
#include <QxtSqlPackage.h>
#include "QxtDefines.h"



class QX_DLLEXPORT QxtSqlQuery : public  QSqlQuery
{
public:
 
QxtSqlQuery ( QSqlResult * result )  : QSqlQuery(result) {}
QxtSqlQuery ( const QString & query = QString(), QSqlDatabase db = QSqlDatabase() )  : QSqlQuery(query,db) {}
QxtSqlQuery ( QSqlDatabase db ) : QSqlQuery(db) {}
QxtSqlQuery ( const QSqlQuery & other ) : QSqlQuery(other) {}

QxtSqlPackage package ()
	{
	


	}
};


#endif
