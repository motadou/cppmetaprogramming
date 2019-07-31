# Copyright David Abrahams and Aleksey Gurtovoy 2004.
# Distributed under the Boost Software License, Version 1.0. 
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)

for n in range(0,500,10):
    name = reduce(lambda inner,n : 'node<T, %s >' % inner, range(n), 'T')
    print """\
#elif N <= %(n)d
template< class T > struct test { typedef %(name)s t; enum { value = 0 }; };
""" % { 'n': n, 'name': name }
