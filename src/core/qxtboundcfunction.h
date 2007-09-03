/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtCore module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of th Common Public License, version 1.0, as published by
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

#ifndef QXTBOUNDCFUNCTION_H
#define QXTBOUNDCFUNCTION_H

#include <qxtboundfunctionbase.h>
#include <qxtmetatype.h>
#include <QtDebug>

#define QXT_RETURN(fp) *reinterpret_cast<RETURN*>(returnValue.data()) = (*reinterpret_cast<FUNCTION>(fp))
#define QXT_INVOKE(fp) (*reinterpret_cast<FUNCTION>(fp))
#define QXT_PARAM(i) *reinterpret_cast<T ## i *>(p ## i .data())

template <typename RETURN, typename T1 = void, typename T2 = void, typename T3 = void, typename T4 = void, typename T5 = void,
          typename T6 = void, typename T7 = void, typename T8 = void, typename T9 = void, typename T10 = void>
class qxt_cfunction_return : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6), QXT_PARAM(7), QXT_PARAM(8), QXT_PARAM(9), QXT_PARAM(10));
        return true;
    }
};

template <typename RETURN>
class qxt_cfunction_return<RETURN, void, void, void, void, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)();
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)();
        return true;
    }
};

template <typename RETURN, typename T1>
class qxt_cfunction_return<RETURN, T1, void, void, void, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1));
        return true;
    }
};

template <typename RETURN, typename T1, typename T2>
class qxt_cfunction_return<RETURN, T1, T2, void, void, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2));
        return true;
    }
};

template <typename RETURN, typename T1, typename T2, typename T3>
class qxt_cfunction_return<RETURN, T1, T2, T3, void, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2, T3);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3));
        return true;
    }
};

template <typename RETURN, typename T1, typename T2, typename T3, typename T4>
class qxt_cfunction_return<RETURN, T1, T2, T3, T4, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2, T3, T4);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4));
        return true;
    }
};

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5>
class qxt_cfunction_return<RETURN, T1, T2, T3, T4, T5, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2, T3, T4, T5);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5));
        return true;
    }
};

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class qxt_cfunction_return<RETURN, T1, T2, T3, T4, T5, T6, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2, T3, T4, T5, T6);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6));
        return true;
    }
};

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
class qxt_cfunction_return<RETURN, T1, T2, T3, T4, T5, T6, T7, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2, T3, T4, T5, T6, T7);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6), QXT_PARAM(7));
        return true;
    }
};

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
class qxt_cfunction_return<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, void, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2, T3, T4, T5, T6, T7, T8);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6), QXT_PARAM(7), QXT_PARAM(8));
        return true;
    }
};

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
class qxt_cfunction_return<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, T9, void> : public QxtGenericFunctionPointer {
public:
    typedef RETURN(*FUNCTION)(T1, T2, T3, T4, T5, T6, T7, T8, T9);
    bool invoke(QGenericReturnArgument returnValue, QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_RETURN (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6), QXT_PARAM(7), QXT_PARAM(8), QXT_PARAM(9));
        return true;
    }
};

template <typename T1 = void, typename T2 = void, typename T3 = void, typename T4 = void, typename T5 = void,
          typename T6 = void, typename T7 = void, typename T8 = void, typename T9 = void, typename T10 = void>
class qxt_cfunction : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6), QXT_PARAM(7), QXT_PARAM(8), QXT_PARAM(9), QXT_PARAM(10));
        return true;
    }
};

template <>
class qxt_cfunction<void, void, void, void, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)();
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)();
        return true;
    }
};

template <typename T1>
class qxt_cfunction<T1, void, void, void, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1));
        return true;
    }
};

template <typename T1, typename T2>
class qxt_cfunction<T1, T2, void, void, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2));
        return true;
    }
};

template <typename T1, typename T2, typename T3>
class qxt_cfunction<T1, T2, T3, void, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2, T3);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3));
        return true;
    }
};

template <typename T1, typename T2, typename T3, typename T4>
class qxt_cfunction<T1, T2, T3, T4, void, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2, T3, T4);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4));
        return true;
    }
};

template <typename T1, typename T2, typename T3, typename T4, typename T5>
class qxt_cfunction<T1, T2, T3, T4, T5, void, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2, T3, T4, T5);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5));
        return true;
    }
};

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class qxt_cfunction<T1, T2, T3, T4, T5, T6, void, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2, T3, T4, T5, T6);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6));
        return true;
    }
};

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
class qxt_cfunction<T1, T2, T3, T4, T5, T6, T7, void, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2, T3, T4, T5, T6, T7);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6), QXT_PARAM(7));
        return true;
    }
};

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
class qxt_cfunction<T1, T2, T3, T4, T5, T6, T7, T8, void, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2, T3, T4, T5, T6, T7, T8);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6), QXT_PARAM(7), QXT_PARAM(8));
        return true;
    }
};

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
class qxt_cfunction<T1, T2, T3, T4, T5, T6, T7, T8, T9, void> : public QxtGenericFunctionPointer {
public:
    typedef void(*FUNCTION)(T1, T2, T3, T4, T5, T6, T7, T8, T9);
    bool invoke(QXT_PROTO_10ARGS(QGenericArgument)) {
        QXT_10_UNUSED;
        QXT_INVOKE (funcPtr)(QXT_PARAM(1), QXT_PARAM(2), QXT_PARAM(3), QXT_PARAM(4), QXT_PARAM(5), QXT_PARAM(6), QXT_PARAM(7), QXT_PARAM(8), QXT_PARAM(9));
        return true;
    }
};

template <typename RETURN = void, typename T1 = void, typename T2 = void, typename T3 = void, typename T4 = void, typename T5 = void,
          typename T6 = void, typename T7 = void, typename T8 = void, typename T9 = void, typename T10 = void>
class QxtBoundCFunction : public QxtBoundFunctionBase {
public:
    QxtGenericFunctionPointer funcPtr;

    QxtBoundCFunction(QObject* parent, QxtGenericFunctionPointer funcPointer, QGenericArgument* params[10], QByteArray types[10]) : QxtBoundFunctionBase(parent, params, types), funcPtr(funcPointer) {
        // initializers only, thanks to template magic
    }

    virtual bool invokeImpl(Qt::ConnectionType type, QGenericReturnArgument returnValue, QXT_IMPL_10ARGS(QGenericArgument)) {
        if(type != Qt::AutoConnection && type != Qt::DirectConnection) {
            qWarning() << "WxtBoundCFunction::invoke: Cannot invoke non-Qt functions using a queued connection";
            return false;
        }
        return reinterpret_cast<qxt_cfunction_return<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>*>(&funcPtr)->invoke(returnValue, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
    }
};

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
class QxtBoundCFunction<void, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> : public QxtBoundFunctionBase {
public:
    QxtGenericFunctionPointer funcPtr;

    QxtBoundCFunction(QObject* parent, QxtGenericFunctionPointer funcPointer, QGenericArgument* params[10], QByteArray types[10]) : QxtBoundFunctionBase(parent, params, types), funcPtr(funcPointer) {
        // initializers only, thanks to template magic
    }

    virtual bool invokeImpl(Qt::ConnectionType type, QGenericReturnArgument returnValue, QXT_IMPL_10ARGS(QGenericArgument)) {
        Q_UNUSED(returnValue);
        if(type != Qt::AutoConnection && type != Qt::DirectConnection) {
            qWarning() << "WxtBoundCFunction::invoke: Cannot invoke non-Qt functions using a queued connection";
            return false;
        }
        return reinterpret_cast<qxt_cfunction<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>*>(&funcPtr)->invoke(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
    }
};

#undef QXT_RETURN
#undef QXT_INVOKE
#undef QXT_PARAM

namespace QxtMetaObject {
template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QXT_IMPL_10ARGS(QGenericArgument)) {
    // Make sure the template parameters make a function pointer equivalent to the one passed in
    if(funcPointer.typeName != typeid(typename qxt_cfunction_return<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>::FUNCTION).name()) {
        qWarning() << "QxtMetaObject::bind: parameter list mismatch, check template arguments";
        return 0;
    }

    QGenericArgument* args[10] = { &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10 };
    for (int i=0; i<10; i++)
    {
        if (args[i]->name() == 0) break;        // done
        if (QByteArray(args[i]->name()) == "QxtBoundArgument")
        {
            Q_ASSERT_X((quintptr)(args[i]->data()) > 0 && (quintptr)(args[i]->data()) <= 10, "QXT_BIND", "invalid argument number");
        }
    }

    QByteArray types[10];
    types[0] = QxtMetaType<T1>::name();
    types[1] = QxtMetaType<T2>::name();
    types[2] = QxtMetaType<T3>::name();
    types[3] = QxtMetaType<T4>::name();
    types[4] = QxtMetaType<T5>::name();
    types[5] = QxtMetaType<T6>::name();
    types[6] = QxtMetaType<T7>::name();
    types[7] = QxtMetaType<T8>::name();
    types[8] = QxtMetaType<T9>::name();
    types[9] = QxtMetaType<T10>::name();

    return new QxtBoundCFunction<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(0, funcPointer, args, types);
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QXT_IMPL_10ARGS(QVariant)) {
    QVariant* args[10] = { &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10 };
    return QxtMetaObject::bind<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(funcPointer, QXT_VAR_ARG(1), QXT_VAR_ARG(2), QXT_VAR_ARG(3), QXT_VAR_ARG(4),
            QXT_VAR_ARG(5), QXT_VAR_ARG(6), QXT_VAR_ARG(7), QXT_VAR_ARG(8), QXT_VAR_ARG(9), QXT_VAR_ARG(10));
}

// The following overloads exist because C++ doesn't support default parameters in function templates
template <typename RETURN>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer) {
    return bind<RETURN, void, void, void, void, void, void, void, void, void, void>(funcPointer,
            QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1) {
    return bind<RETURN, T1, void, void, void, void, void, void, void, void, void>(funcPointer,
            p1, QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1, typename T2>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1, QGenericArgument p2) {
    return bind<RETURN, T1, T2, void, void, void, void, void, void, void, void>(funcPointer,
            p1, p2, QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1, typename T2, typename T3>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1, QGenericArgument p2, QGenericArgument p3) {
    return bind<RETURN, T1, T2, T3, void, void, void, void, void, void, void>(funcPointer,
            p1, p2, p3, QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1, QGenericArgument p2, QGenericArgument p3, QGenericArgument p4) {
    return bind<RETURN, T1, T2, T3, T4, void, void, void, void, void, void>(funcPointer,
            p1, p2, p3, p4, QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1, QGenericArgument p2, QGenericArgument p3, QGenericArgument p4, QGenericArgument p5) {
    return bind<RETURN, T1, T2, T3, T4, T5, void, void, void, void, void>(funcPointer,
            p1, p2, p3, p4, p5, QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1, QGenericArgument p2, QGenericArgument p3, QGenericArgument p4, QGenericArgument p5, QGenericArgument p6) {
    return bind<RETURN, T1, T2, T3, T4, T5, T6, void, void, void, void>(funcPointer,
            p1, p2, p3, p4, p5, p6, QGenericArgument(), QGenericArgument(), QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1, QGenericArgument p2, QGenericArgument p3, QGenericArgument p4, QGenericArgument p5, QGenericArgument p6, QGenericArgument p7) {
    return bind<RETURN, T1, T2, T3, T4, T5, T6, T7, void, void, void>(funcPointer,
            p1, p2, p3, p4, p5, p6, p7, QGenericArgument(), QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1, QGenericArgument p2, QGenericArgument p3, QGenericArgument p4, QGenericArgument p5,
        QGenericArgument p6, QGenericArgument p7, QGenericArgument p8) {
    return bind<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, void, void>(funcPointer, p1, p2, p3, p4, p5, p6, p7, p8, QGenericArgument(), QGenericArgument());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QGenericArgument p1, QGenericArgument p2, QGenericArgument p3, QGenericArgument p4, QGenericArgument p5,
        QGenericArgument p6, QGenericArgument p7, QGenericArgument p8, QGenericArgument p9) {
    return bind<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, T9, void>(funcPointer, p1, p2, p3, p4, p5, p6, p7, p8, p9, QGenericArgument());
}

template <typename RETURN, typename T1>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1) {
    return bind<RETURN, T1, void, void, void, void, void, void, void, void, void>(funcPointer, p1, QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant());
}

template <typename RETURN, typename T1, typename T2>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1, QVariant p2) {
    return bind<RETURN, T1, T2, void, void, void, void, void, void, void, void>(funcPointer, p1, p2, QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant());
}

template <typename RETURN, typename T1, typename T2, typename T3>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1, QVariant p2, QVariant p3) {
    return bind<RETURN, T1, T2, T3, void, void, void, void, void, void, void>(funcPointer, p1, p2, p3, QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1, QVariant p2, QVariant p3, QVariant p4) {
    return bind<RETURN, T1, T2, T3, T4, void, void, void, void, void, void>(funcPointer, p1, p2, p3, p4, QVariant(), QVariant(), QVariant(), QVariant(), QVariant(), QVariant());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1, QVariant p2, QVariant p3, QVariant p4, QVariant p5) {
    return bind<RETURN, T1, T2, T3, T4, T5, void, void, void, void, void>(funcPointer, p1, p2, p3, p4, p5, QVariant(), QVariant(), QVariant(), QVariant(), QVariant());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1, QVariant p2, QVariant p3, QVariant p4, QVariant p5, QVariant p6) {
    return bind<RETURN, T1, T2, T3, T4, T5, T6, void, void, void, void>(funcPointer, p1, p2, p3, p4, p5, p6, QVariant(), QVariant(), QVariant(), QVariant());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1, QVariant p2, QVariant p3, QVariant p4, QVariant p5, QVariant p6, QVariant p7) {
    return bind<RETURN, T1, T2, T3, T4, T5, T6, T7, void, void, void>(funcPointer, p1, p2, p3, p4, p5, p6, p7, QVariant(), QVariant(), QVariant());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1, QVariant p2, QVariant p3, QVariant p4, QVariant p5, QVariant p6, QVariant p7, QVariant p8) {
    return bind<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, void, void>(funcPointer, p1, p2, p3, p4, p5, p6, p7, p8, QVariant(), QVariant());
}

template <typename RETURN, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline QxtBoundFunction* bind(QxtGenericFunctionPointer funcPointer, QVariant p1, QVariant p2, QVariant p3, QVariant p4, QVariant p5, QVariant p6, QVariant p7, QVariant p8, QVariant p9) {
    return bind<RETURN, T1, T2, T3, T4, T5, T6, T7, T8, T9, void>(funcPointer, p1, p2, p3, p4, p5, p6, p7, p8, p9, QVariant());
}

}
#endif