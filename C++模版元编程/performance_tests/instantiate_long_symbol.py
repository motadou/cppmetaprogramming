# Copyright David Abrahams and Aleksey Gurtovoy 2004.
# Distributed under the Boost Software License, Version 1.0. 
# (See accompanying file LICENSE_1_0.txt or copy at 
# http://www.boost.org/LICENSE_1_0.txt)

for n in range(1,500,10):
    print """\
#elif N < %(n)d
template< int i > struct %(name)s : %(name)s<i-1> {};
template<> struct %(name)s<0> { enum { value = 0 }; };
int main() { return %(name)s<200>::value; }
""" % { 'n' : n + 9, 'name': 'y'*n }
