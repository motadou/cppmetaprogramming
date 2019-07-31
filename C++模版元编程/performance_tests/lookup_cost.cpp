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
template< int i, int n = 0 > struct fibonacci
{
    enum { v = ulong(fibonacci<i-1,n>::value) };
    enum { value = ulong(v)
#ifndef DIFF
           + ulong(fibonacci<((i%2)?(i-2):0),n>::value)
#endif
    };
};

template< int test > struct fibonacci<0,test>
{
    enum { value = 0 };
};

template< int test > struct fibonacci<1,test>
{
    enum { value = 1 };
};

int main()
{
    return 
          ulong(fibonacci<N,0>::value)
        + ulong(fibonacci<N,1>::value)
        + ulong(fibonacci<N,2>::value)
        + ulong(fibonacci<N,3>::value)
        + ulong(fibonacci<N,4>::value)
        + ulong(fibonacci<N,5>::value)
        + ulong(fibonacci<N,6>::value)
        + ulong(fibonacci<N,7>::value)
        + ulong(fibonacci<N,8>::value)
        + ulong(fibonacci<N,9>::value)
        ;
}
