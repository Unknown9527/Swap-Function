#include "solution.h"

// swap using pointer
int Solution::PointerSwap(int *x, int *y)
{   
    int tmp = *x;
    *x = *y;
    *y = tmp;
    return 0;
}

// swap using reference
int Solution::ReferenceSwap(int &a, int &b)
{   
    int tmp = a;
    a = b;
    b = tmp;
    return 0;
}

