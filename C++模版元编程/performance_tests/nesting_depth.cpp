// Copyright David Abrahams and Aleksey Gurtovoy 2004.
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)

#if defined(__MWERKS__)
#   pragma template_depth(2000)
#endif

#if !defined(N)
#   error "N is not defined!"
#endif

template< int i, int test > struct x
    : x<i-1,test>
{
};

template< int test> struct x<0,test>
{
    enum { value = 0 };
};

template< int n > struct test
{
    enum { value = x<N,n>::value };
};

int main()
{
    return 
          test<0>::value
        + test<1>::value
        + test<2>::value
        + test<3>::value
        + test<4>::value
        + test<5>::value
        + test<6>::value
        + test<7>::value
        + test<8>::value
        + test<9>::value
        ;
}
