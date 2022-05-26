#include "gtest/gtest.h"

#include "op.hpp"
//#include "rand.hpp"
//#include "add.hpp"
//#include "sub.hpp"
//#include "mult.hpp"
//#include "div.hpp"
//#include "pow.hpp"

TEST(OpTest, Functions) {
    Op* one = new Op(1);
    EXPECT_EQ(one->number_of_children(), 0);
    EXPECT_EQ(one->get_child(0), nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
