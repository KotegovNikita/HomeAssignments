#include <gtest/gtest.h>
#include "Autobot.hpp"
#include "Alliance.hpp"


TEST(AutobotTest, ConstructorTest) {
    Alliance alliance("Autobots");

    Autobot autobot("Optimus Prime", 100, 80, &alliance, "Protect");


    EXPECT_EQ(autobot.getAlliance()->getName(), "Autobots");

    EXPECT_EQ(autobot.getHostility(), "Protect");

    EXPECT_EQ(autobot.getHealth(), 100);
}

TEST(AutobotTest, HostilityTest) {
    Alliance alliance("Autobots");
    Autobot autobot("Bumblebee", 80, 60, &alliance, "Defend");

    EXPECT_EQ(autobot.getHostility(), "Defend");

    autobot.setHostility("Attack");

    EXPECT_EQ(autobot.getHostility(), "Attack");
}

TEST(AutobotTest, HealthTest) {
    Alliance alliance("Autobots");
    Autobot autobot("Ironhide", 70, 75, &alliance, "Protect");

    EXPECT_EQ(autobot.getHealth(), 100);

    autobot.setHealth(50);

    EXPECT_EQ(autobot.getHealth(), 50);
}

// Точка входа для Google Test
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
