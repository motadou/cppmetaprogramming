// Copyright (C) 2004 Arkadiy Vertleyb
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_TYPEOF_ENCODE_DECODE_HPP_INCLUDED
#define BOOST_TYPEOF_ENCODE_DECODE_HPP_INCLUDED

namespace boost
{
    namespace type_of
    {
        namespace
        {
            template<class V, class T> struct encode_type_impl;
            template<class T, class Iter> struct decode_type_impl;
        }

        template<class V, class T> struct encode_type 
            : encode_type_impl<V, T>
        {};

        template<class Iter> struct decode_type
            : decode_type_impl<typename mpl::deref<Iter>::type, typename mpl::next<Iter>::type>
        {};
    }
}

#define BOOST_TYPEOF_UNIQUE_ID()\
    BOOST_TYPEOF_REGISTRATION_GROUP * 0x10000 + __LINE__

#define BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()\
    <boost/spirit/typeof/increment_registration_group.hpp>

#endif//BOOST_TYPEOF_ENCODE_DECODE_HPP_INCLUDED
