#include "math/add.h"
#include "math/multiply.h"
#include <gtest/gtest.h>

TEST(MathTest, Add) {
    EXPECT_EQ(math::add(2, 3), 5);
}

TEST(MathTest, Multiply) {
    EXPECT_EQ(math::multiply(3, 4), 12);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
