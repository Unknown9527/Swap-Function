#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;


TEST(ReferenceTest, ReferenceTest) {
  Solution solution;
  int a = 4;
  int b = 6;

  // EXPECT_EQ(solution.ReferenceSwap(int a, int b), "6 4");
  // EXPECT_EQ("6 4", "6 4");
  solution.ReferenceSwap(a,b);
  EXPECT_EQ(a, 6);
  EXPECT_EQ(b, 4);
}

TEST(PointerSwapTest, PointerSwapTest) {
  Solution solution;
  int x = 3;
  int y = 5;

  // EXPECT_EQ(solution.PointerSwap(int &x, int &y), "5 3");
  // EXPECT_EQ("6 4", "6 4");
  solution.PointerSwap(&x, &y);
  EXPECT_EQ(x, 5);
  EXPECT_EQ(y, 3);
}
