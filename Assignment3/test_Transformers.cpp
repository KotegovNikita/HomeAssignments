#include <gtest/gtest.h>
#include "Transformers.hpp"
#include "Alliance.hpp"
#include "Type.hpp"

TEST(TransformersTest, ConstructorTest) {
    Alliance alliance("Autobots");
    Type type("Autobot");

    Transformers transformer("Optimus Prime", 200, 150, type, &alliance);

    EXPECT_EQ(transformer.getName(), "Optimus Prime");

    EXPECT_EQ(transformer.getPower(), 200);

    EXPECT_EQ(transformer.getPower(), 200);
}

TEST(TransformersTest, NameTest) {
    Alliance alliance("Decepticons");
    Type type("Decepticon");
    Transformers transformer("Megatron", 250, 200, type, &alliance);

    EXPECT_EQ(transformer.getName(), "Megatron");

    transformer.setName("Galvatron");

    EXPECT_EQ(transformer.getName(), "Galvatron");
}

TEST(TransformersTest, PowerTest) {
    Alliance alliance("Автоботы");
    Type type("Autobot");
    Transformers transformer("Bumblebee", 100, 50, type, &alliance);

    EXPECT_EQ(transformer.getPower(), 100);

    transformer.setPower(120);

    EXPECT_EQ(transformer.getPower(), 120);
}


