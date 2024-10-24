#include <gtest/gtest.h>
#include "Type.hpp"

TEST(TypeTest, ConstructorTest) {
    Type type("Autobot");

    EXPECT_EQ(type.getName(), "Autobot");
}

TEST(TypeTest, GetNameTest) {
    Type type("Decepticon");

    EXPECT_EQ(type.getName(), "Decepticon");
}


