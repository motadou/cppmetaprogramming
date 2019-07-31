#if defined(__MWERKS__)
#   pragma template_depth(2000)
#endif

#if defined(_MSC_VER)
#   pragma warning(disable: 4307)
#endif

#if defined(__ICL)
#   pragma warning(disable: 68)
#endif

#if !defined(N)
#   error "N is not defined!"
#endif

typedef unsigned long ulong;

// re-arranged recursive branches
template< int i, int test > struct fibonacci
{
#ifndef DIFF
    enum { v = ulong(fibonacci<i-2,test>::value) };
    enum { value = ulong(v) + ulong(fibonacci<i-1,test>::value) };
#else
    enum { value = ulong(fibonacci<i-1,test>::value) };
#endif
};

template< int test > struct fibonacci<0,test>
{
    enum { value = 0 };
};

template< int test > struct fibonacci<1,test>
{
    enum { value = 1 };
};

template< int n > struct test
    : fibonacci<N,n>
{
};

int main()
{
    return 
          ulong(test<0>::value)
        + ulong(test<1>::value)
        + ulong(test<2>::value)
        + ulong(test<3>::value)
        + ulong(test<4>::value)
        + ulong(test<5>::value)
        + ulong(test<6>::value)
        + ulong(test<7>::value)
        + ulong(test<8>::value)
        + ulong(test<9>::value)
        ;
}
