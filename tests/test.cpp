#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

//Area
TEST(RectTest, AreaZeroCheck) {
    Rectangle *rect = new Rectangle();
    EXPECT_EQ(rect->area(), 0);
}

TEST(RectTest, AreaOneCheck) {
    Rectangle *rect = new Rectangle();
    rect->set_width(1);
    rect->set_height(1);
    EXPECT_EQ(rect->area(),1);
}

TEST(RectTest, AreaPosCheck) {
   Rectangle *rect = new Rectangle();
   rect->set_width(5);
   rect->set_height(5);
   EXPECT_EQ(rect->area(), 25);
}

//Perimeter
TEST(RectTest, PerimeterZeroCheck) {
    Rectangle *rect = new Rectangle();
    EXPECT_EQ(rect->perimeter(), 0);
}

TEST(RectTest, PerimeterPosCheck) {
    Rectangle *rect = new Rectangle();
    rect->set_width(5);
    rect->set_height(5);
    EXPECT_EQ(rect->perimeter(), 20);
}

TEST(RectTest, PerimeterOneCheck) {
    Rectangle *rect = new Rectangle();
    rect->set_width(1);
    rect->set_height(1);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
                                                                                                                       

