# Copyright David Abrahams and Aleksey Gurtovoy 2004.
# Distributed under the Boost Software License, Version 1.0. 
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)

for n in range(0,500,10):
    name = reduce(lambda inner,n : 'node<int, %s >' % inner, range(n), 'int')
    print """\
#elif N <= %(n)d
#ifndef DIFF
int main() { return test< 200, %(name)s >::value; }
#else
int main() { return test< 200, int>::value + test<0,%(name)s >::value; }
#endif
""" % { 'n': n, 'name': name }
