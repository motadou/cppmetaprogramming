# Copyright David Abrahams and Aleksey Gurtovoy 2004.
# Distributed under the Boost Software License, Version 1.0. 
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)

for n in range(0,500):
    print """\
#if N > %(n)d
template< int i >  struct y< i, x<-%(n)d> > {};
#endif
""" % { 'n': n }
