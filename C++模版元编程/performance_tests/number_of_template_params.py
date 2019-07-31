# Copyright David Abrahams and Aleksey Gurtovoy 2004.
# Distributed under the Boost Software License, Version 1.0. 
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)

for n in range(1,500,10):
    params = ','.join( map(lambda i: 'class T%d=int' %i, range(0, n)) )
    print """\
#elif N < %(n)d
template< %(params)s> struct x {};
""" % { 'n': n + 9, 'params': params }
