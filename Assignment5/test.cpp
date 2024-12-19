#include <gtest/gtest.h>
#include <sstream>

#include "transformer.hpp"
#include "autobot.hpp"
#include "decepticon.hpp"
#include "alliance.hpp"  // Подключаем реальный класс Alliance

TEST(Transformer, CheckFireJump) {
    Alliance alliance("Autobots");  // Используем реальный объект Alliance
    Transformers hero("Hero", 100, 50, &alliance);

    hero.openFire();
    hero.transform();
    hero.ulta();
    
    ASSERT_EQ(hero.getName(), "Hero");
    ASSERT_EQ(hero.getPower(), 100);
    ASSERT_EQ(hero.getAlliance()->getName(), "Autobots");
}

TEST(Transformer, CheckAmmoFuelName) {
    Alliance alliance("Autobots");
    Transformers hero("Hero", 100, 50, &alliance);
    hero.setPower(70);

    EXPECT_EQ(hero.getPower(), 70);
    EXPECT_EQ(hero.getName(), "Hero");
    EXPECT_EQ(hero.getAlliance()->getName(), "Autobots");
}

TEST(Autobot, CheckFire) {
    Alliance alliance("Decepticons");
    Autobot hero("Optimus", 200, 100, &alliance, "Decepticon");

    hero.openFire();

    EXPECT_EQ(hero.getName(), "Optimus");
    EXPECT_EQ(hero.getPower(), 200);
    EXPECT_EQ(hero.getAlliance()->getName(), "Decepticons");
}

TEST(Autobot, CheckPowerColorName) {
    Alliance alliance("Decepticons");
    Autobot hero("Optimus", 200, 100, &alliance, "Decepticon");
    hero.setHostility("Autobot");
    hero.setHealth(1000);

    EXPECT_EQ(hero.getHostility(), "Autobot");
    EXPECT_EQ(hero.getHealth(), 1000);
    EXPECT_EQ(hero.getName(), "Optimus");
}

TEST(Decepticon, DecCheckFireJump) {
    Alliance alliance("Autobots");
    Decepticon enemy("Megatron", 300, 150, &alliance, "Autobot");

    enemy.openFire();
    enemy.transform();
    enemy.ulta();

    EXPECT_EQ(enemy.getName(), "Megatron");
    EXPECT_EQ(enemy.getHostility(), "Autobot");
}

TEST(Decepticon, CheckNameSharpLen) {
    Alliance alliance("Autobots");
    Decepticon enemy("Megatron", 300, 150, &alliance, "Autobot");

    enemy.setHostility("Decepticon");
    enemy.setHealth(500);
    
    EXPECT_EQ(enemy.getName(), "Megatron");
    EXPECT_EQ(enemy.getHealth(), 500);
    EXPECT_EQ(enemy.getHostility(), "Decepticon");
}

TEST(Minicon, CheckWork) {
    Alliance alliance("Autobots");
    Instrument pickaxe(100, 50);
    Minicon builder("Barak", &pickaxe);
    builder.setSize(100);
    builder.setEnergy(1000);

    ASSERT_TRUE(builder.work());
}

TEST(Minicon, CheckNameEnergy) {
    Alliance alliance("Autobots");
    Instrument pickaxe(100, 50);
    Minicon builder("Barak", &pickaxe);
    builder.setSize(100);
    builder.setEnergy(1000);

    EXPECT_EQ(builder.getName(), "Barak");
    EXPECT_EQ(builder.getEnergy(), 1000);
}

TEST(Transformer, CheckOutput) {
    Alliance alliance("Autobots");
    Transformers hero("Hero", 100, 50, &alliance);
    
    std::ostringstream strs;
    strs << hero;
    std::string s = strs.str();

    EXPECT_EQ(s, "Hero 100 50");
}

TEST(Autobot, CheckOutput) {
    Alliance alliance("Decepticons");
    Autobot hero("Optimus", 200, 100, &alliance, "Decepticon");

    std::ostringstream strs;
    strs << hero;
    std::string s = strs.str();

    EXPECT_EQ(s, "Optimus 200 100 Decepticon");
}

TEST(Decepticon, CheckOutput) {
    Alliance alliance("Autobots");
    Decepticon enemy("Megatron", 300, 150, &alliance, "Autobot");

    std::ostringstream strs;
    strs << enemy;
    std::string s = strs.str();

    EXPECT_EQ(s, "Megatron 300 150 Autobot");
}

TEST(Minicon, CheckComparison) {
    Alliance alliance("Autobots");
    Instrument pickaxe2(100, 50);
    Minicon minc1("Barak1", &pickaxe2);
    minc1.setEnergy(50);
    minc1.setSize(2);
    Minicon minc2("Barak2", &pickaxe2);
    minc2.setEnergy(33);
    minc2.setSize(3);

    ASSERT_FALSE(minc2 > minc1);
}

