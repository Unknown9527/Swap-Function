#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;

    int x = 3;
    int y = 5;
    int a = 4;
    int b = 6;
    
    solution.PointerSwap(&x, &y);
    solution.ReferenceSwap(a, b);

    cout << x << " " << y << endl;
    // cout << y << endl;
    cout << a << " " << b << endl;
    
    return 0;
}