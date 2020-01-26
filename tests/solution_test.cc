#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintMyBio();
  std::string expected = "Hi! My name is Jatin Bollareddy\nIm majoring in Electrical Engineering(VLSI)\nI like travelling and photography";
  EXPECT_EQ(expected, actual);
}