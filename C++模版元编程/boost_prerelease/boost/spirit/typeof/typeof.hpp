// Copyright (C) 2004 Arkadiy Vertleyb
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_TYPEOF_TYPEOF_HPP_INCLUDED
#define BOOST_TYPEOF_TYPEOF_HPP_INCLUDED

#include <boost/spirit/typeof/config.hpp>

#ifdef BOOST_TYPEOF_EMULATION

#include <boost/spirit/typeof/typeof_impl.hpp>
#include <boost/spirit/typeof/register_fundamental.hpp>
#include <boost/spirit/typeof/register_functions.hpp>
#include <boost/spirit/typeof/modifiers.hpp>
#include <boost/spirit/typeof/pointers_data_members.hpp>

#else//BOOST_TYPEOF_EMULATION

//native support -- don't add "typename" in templates
#define BOOST_TYPEOF_TPL(expr) BOOST_TYPEOF(expr)

#endif//BOOST_TYPEOF_EMULATION

#define BOOST_AUTO(Var, Expr) BOOST_TYPEOF(Expr) Var(Expr)
#define BOOST_AUTO_TPL(Var, Expr) BOOST_TYPEOF_TPL(Expr) Var(Expr)

/////////////////

#include <boost/type_traits/is_const.hpp>

namespace boost
{
    namespace type_of
    {
        enum
        {
            RVALUE = 1,
            LVALUE,
            CONST_LVALUE
        };

        char(&classify_expression(...))[
            RVALUE
        ];

        template<class T>
        char(&classify_expression(T&))[
            is_const<T>::value ? CONST_LVALUE : LVALUE
        ];

        template<class T, int n> struct decorate_type
        {
            typedef T type;
        };
        template<class T> struct decorate_type<T, LVALUE>
        {
            typedef T& type;
        };
        template<class T> struct decorate_type<T, CONST_LVALUE>
        {
            typedef const T& type;
        };
    }
}

// Since this is always a type, 
// just add "typename" when using in templates

#define BOOST_TYPEOF_PRESERVE_LVALUE(expr)                  \
    boost::type_of::decorate_type<                          \
        BOOST_TYPEOF(expr),                                 \
        sizeof(boost::type_of::classify_expression(expr))   \
    >::type

#endif//BOOST_TYPEOF_TYPEOF_HPP_INCLUDED
