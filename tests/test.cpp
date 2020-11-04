#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(RectTest, Area) {
    Rectangle *rect = new Rectangle();
    EXPECT_EQ(rect->area(), 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
