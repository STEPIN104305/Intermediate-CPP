#include "point.h"
#include <gtest/gtest.h>
namespace {
TEST(Point, Empty_Cosnstructor) {
    Point P1;
  EXPECT_EQ(0.0, P1.distanceFromOrigin());
  EXPECT_EQ(true, P1.isOrigin());
  EXPECT_EQ(false, P1.isOnXAxis());
  EXPECT_EQ(false, P1.isOnYAxis());
}

TEST(Point, Parameterized_Cosnstructor) {
    Point P1(0,2);
  EXPECT_EQ(2, P1.distanceFromOrigin());
  EXPECT_EQ(false, P1.isOrigin());
  EXPECT_EQ(false, P1.isOnXAxis());
  EXPECT_EQ(true, P1.isOnYAxis());
}

TEST(Point, Copy_Constructor) {
    Point P1(2,0);
    Point P2(P1);
  EXPECT_EQ(2, P2.distanceFromOrigin());
  EXPECT_EQ(false, P2.isOrigin());
  EXPECT_EQ(true, P2.isOnXAxis());
  EXPECT_EQ(false, P2.isOnYAxis());
}
}
