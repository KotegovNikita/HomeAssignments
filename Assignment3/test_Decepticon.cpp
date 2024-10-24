#include <gtest/gtest.h>
#include "Decepticon.hpp"
#include "Alliance.hpp"

TEST(DecepticonTest, ConstructorTest) {
    Alliance alliance("Decepticons");

    Decepticon decepticon("Megatron", 150, 90, &alliance, "Destroy");

    EXPECT_EQ(decepticon.getAlliance()->getName(), "Decepticons");

    EXPECT_EQ(decepticon.getHostility(), "Destroy");

    EXPECT_EQ(decepticon.getHealth(), 100);
}

TEST(DecepticonTest, HostilityTest) {
    Alliance alliance("Decepticons");
    Decepticon decepticon("Starscream", 120, 85, &alliance, "Attack");

    EXPECT_EQ(decepticon.getHostility(), "Attack");

    decepticon.setHostility("Conquer");

    EXPECT_EQ(decepticon.getHostility(), "Conquer");
}

TEST(DecepticonTest, HealthTest) {
    Alliance alliance("Decepticons");
    Decepticon decepticon("Soundwave", 110, 80, &alliance, "Destroy");

    EXPECT_EQ(decepticon.getHealth(), 100);

    decepticon.setHealth(60);

    EXPECT_EQ(decepticon.getHealth(), 60);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
