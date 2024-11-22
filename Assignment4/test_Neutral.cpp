/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment4 */
#include <gtest/gtest.h>
#include "Neutral.hpp"


class NeutralTest : public ::testing::Test
{
protected:

    Alliance* alliance = new Alliance("DefaultAlliance");
    Neutral neutral1 = Neutral("Optimus Prime", 100, 50, alliance, "Leadership");
    Neutral neutral2 = Neutral("Ratchet", 90, 40, alliance, "Treatment");


    ~NeutralTest()
    {
        delete alliance;
    }
};


TEST_F(NeutralTest, ConstructorTest)
{
    EXPECT_EQ(neutral1.getPower(), 100);
    EXPECT_EQ(neutral2.getPower(), 90);
    EXPECT_EQ(neutral1.getPurpose(), "Leadership");
    EXPECT_EQ(neutral2.getPurpose(), "Treatment");
}


TEST_F(NeutralTest, PurposeTest)
{
    neutral1.setPurpose("New Purpose");
    EXPECT_EQ(neutral1.getPurpose(), "New Purpose");
}


TEST_F(NeutralTest, ComparisonOperators)
{
    EXPECT_TRUE(neutral1 > neutral2);
    EXPECT_TRUE(neutral2 < neutral1);
    EXPECT_TRUE(neutral1 >= neutral2);
    EXPECT_TRUE(neutral2 <= neutral1);
}


TEST_F(NeutralTest, OutputStreamOperator)
{
    std::ostringstream output;
    output << neutral1;
    EXPECT_EQ(output.str(), "Neutral power: 100, Purpose: Leadership");
}

