# Copyright David Abrahams and Aleksey Gurtovoy 2004.
# Distributed under the Boost Software License, Version 1.0. 
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)

def tree_gen( n, i ):
    if n > 1:
        half_n = (n - 1) / 2
        return 'node<%d,%s,%s >' % ( i, tree_gen( half_n,i+1 ), tree_gen( n - 1 - half_n, i+1+half_n ) )
    elif n > 0:
        return 'node<%d,%s,int>' % ( i, tree_gen( 0, i+1 ) )
    else:
        return 'int'

for n in range(0,500,10):
    print """\
#elif N <= %(n)d
#ifndef DIFF
int main() { return test< 200, %(name)s >::value; }
#else
int main() { return test< 200, int>::value + test<0,%(name)s >::value; }
#endif
""" % { 'n': n, 'name': tree_gen(n, 0) }
