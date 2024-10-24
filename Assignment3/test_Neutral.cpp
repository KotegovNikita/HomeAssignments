#include <gtest/gtest.h>
#include "Neutral.hpp"
#include "Alliance.hpp"

TEST(NeutralTest, ConstructorTest) {
    Alliance alliance("Neutrals");

    Neutral neutral("Jetfire", 90, 70, &alliance, "Observe");

    EXPECT_EQ(neutral.getAlliance()->getName(), "Neutrals");

    EXPECT_EQ(neutral.getPurpose(), "Observe");
}

TEST(NeutralTest, PurposeTest) {
    Alliance alliance("Neutrals");
    Neutral neutral("Skyfire", 85, 65, &alliance, "Explore");

    EXPECT_EQ(neutral.getPurpose(), "Explore");

    neutral.setPurpose("Assist");

    EXPECT_EQ(neutral.getPurpose(), "Assist");
}

