/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment4 */
#include <gtest/gtest.h>
#include "Autobot.hpp"
#include "Alliance.hpp"

class MockAlliance : public Alliance
{
public:
    MockAlliance() : Alliance("Autobot") {}
};

class AutobotTest : public ::testing::Test
{
protected:
    Autobot autobot1 = Autobot("Optimus Prime", 100, 50, new MockAlliance(), "Neutral");
    Autobot autobot2 = Autobot("Bumblebee", 80, 40, new MockAlliance(), "Hostile");
};


TEST_F(AutobotTest, ConstructorTest)
{
    EXPECT_EQ(autobot1.getPower(), 100);
    EXPECT_EQ(autobot1.getHealth(), 100);
    EXPECT_EQ(autobot1.getHostility(), "Neutral");
}


TEST_F(AutobotTest, HostilityTest)
{
    autobot1.setHostility("Friendly");
    EXPECT_EQ(autobot1.getHostility(), "Friendly");
}

TEST_F(AutobotTest, HealthTest)
{
    autobot1.setHealth(120);
    EXPECT_EQ(autobot1.getHealth(), 120);
}


TEST_F(AutobotTest, OutputStreamOperatorTest)
{
    std::ostringstream output;
    output << autobot1;
    EXPECT_EQ(output.str(), "Autobot power: 100, Health: 100");
}


TEST_F(AutobotTest, ComparisonOperatorsTest)
{
    EXPECT_TRUE(autobot1 > autobot2);
    EXPECT_TRUE(autobot2 < autobot1);
    EXPECT_TRUE(autobot1 >= autobot2);
    EXPECT_TRUE(autobot2 <= autobot1);
}


TEST_F(AutobotTest, AllianceTest)
{
    EXPECT_NE(autobot1.getAlliance(), nullptr);
}


