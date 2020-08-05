#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
using namespace std;

// class Solution {
// public:
//   int Add(int a, int b);
// };

class Solution
{
   public:
      // Input two integers to Reference Swap
      int ReferenceSwap(int &a, int &b);
      // input two integers to Pointer Swap
      int PointerSwap(int *x, int *y);

};

#endif