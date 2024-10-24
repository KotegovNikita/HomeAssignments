#include <gtest/gtest.h>
#include "Alliance.hpp"

TEST(AllianceTest, AutobotTest) {
    Alliance autobots("Autobots");
    EXPECT_EQ(autobots.getName(), "Autobots");
}
TEST(AllianceTest, DecepticonTest) {
    Alliance decepticons("Decepticons");
    EXPECT_EQ(decepticons.getName(), "Decepticons");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
