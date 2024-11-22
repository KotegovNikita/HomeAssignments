/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment4 */
#include <gtest/gtest.h>
#include "Decepticon.hpp"
#include "Alliance.hpp"

class MockAlliance : public Alliance
{
public:
    MockAlliance() : Alliance("Decepticon") {}
};

class DecepticonTest : public ::testing::Test
{
protected:
    Decepticon decepticon1 = Decepticon("Megatron", 100, 50, new MockAlliance(), "Hostile");
    Decepticon decepticon2 = Decepticon("Starscream", 80, 40, new MockAlliance(), "Neutral");
};


TEST_F(DecepticonTest, ConstructorTest)
{
    EXPECT_EQ(decepticon1.getPower(), 100);
    EXPECT_EQ(decepticon1.getHealth(), 100);
    EXPECT_EQ(decepticon1.getHostility(), "Hostile");
}

TEST_F(DecepticonTest, HostilityTest)
{
    decepticon1.setHostility("Friendly");
    EXPECT_EQ(decepticon1.getHostility(), "Friendly");
}

TEST_F(DecepticonTest, HealthTest)
{
    decepticon1.setHealth(120);
    EXPECT_EQ(decepticon1.getHealth(), 120);
}


TEST_F(DecepticonTest, OutputStreamOperatorTest)
{
    std::ostringstream output;
    output << decepticon1;
    EXPECT_EQ(output.str(), "Decepticon power: 100, Health: 100");
}

TEST_F(DecepticonTest, ComparisonOperatorsTest)
{
    EXPECT_TRUE(decepticon1 > decepticon2);
    EXPECT_TRUE(decepticon2 < decepticon1);
    EXPECT_TRUE(decepticon1 >= decepticon2);
    EXPECT_TRUE(decepticon2 <= decepticon1);
}

TEST_F(DecepticonTest, AllianceTest)
{
    EXPECT_NE(decepticon1.getAlliance(), nullptr);
}


