# Copyright David Abrahams and Aleksey Gurtovoy 2004.
# Distributed under the Boost Software License, Version 1.0. 
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)

for n in range(1,500,10):
    print """\
#elif N < %(n)d
struct %(name)s {};
#ifndef DIFF
int main() { return test<200,x<%(name)s> >::value; }
#else
struct z {};
int main() { return test<200,x<z> >::value; }
#endif
""" % { 'n': n + 9, 'name': 'y'*n }
