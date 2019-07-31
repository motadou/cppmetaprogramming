// Copyright (C) 2004 Arkadiy Vertleyb
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_TYPEOF_CONFIG_HPP_INCLUDED
#define BOOST_TYPEOF_CONFIG_HPP_INCLUDED

#define BOOST_TYPEOF_EMULATION

#if defined  BOOST_TYPEOF_FORCE_EMULATION

#elif defined __COMO__
//  Comeau C++

#elif defined __DMC__
//  Digital Mars C++

#elif defined(__INTEL_COMPILER) || defined(__ICL) || defined(__ICC) || defined(__ECC)
//  Intel

# elif defined __GNUC__
//  GNU C++:

#    define BOOST_TYPEOF typeof
#    undef BOOST_TYPEOF_EMULATION

#elif defined __KCC
//  Kai C++

#elif defined __sgi
//  SGI MIPSpro C++

#elif defined __DECCXX
//  Compaq Tru64 Unix cxx

#elif defined __ghs
//  Greenhills C++

#elif defined __BORLANDC__
//  Borland

#elif defined  __MWERKS__
//  Metrowerks CodeWarrior

#    define BOOST_TYPEOF __typeof__
#    undef BOOST_TYPEOF_EMULATION

#elif defined  __SUNPRO_CC
//  Sun Workshop Compiler C++

#elif defined __HP_aCC
//  HP aCC

#elif defined(__MRC__) || defined(__SC__)
//  MPW MrCpp or SCpp

#elif defined(__IBMCPP__)
//  IBM Visual Age

#elif defined _MSC_VER
//  Microsoft Visual C++

#elif defined (BOOST_ASSERT_CONFIG)
// this must come last - generate an error if we don't
// recognise the compiler:

#  error "Unknown compiler - please configure (http://www.boost.org/libs/config/config.htm#configuring) and report the results to the main boost mailing list (http://www.boost.org/more/mailing_lists.htm#main)"

#endif

#endif//BOOST_TYPEOF_CONFIG_HPP_INCLUDED
