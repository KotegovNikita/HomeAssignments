#ifndef MAIN_HPP
#define MAIN_HPP

#include <vector>
#include <iostream>
#include <gtest/gtest.h>

template <typename T1, typename T2>
class MyTClass {
private:
    int number;
    std::vector<float> vec;
    T1 inst1;
    T2 inst2;
public:
    MyTClass(int _num, const std::vector<float>& _v, const T1& _obj1, const T2& _obj2);
    bool foo();
};

template<typename T>
class MyTClass<int, T> {
private:
    int number;
    std::vector<float> vec;
    int inst1;
    T inst2;
public:
    MyTClass(int _num, const std::vector<float>& _v, int _inst1, const T& _obj);
    bool foo();
};

template<typename T>
class MyTClass<double, T> {
private:
    int number;
    std::vector<float> vec;
    double inst1;
    T inst2;
public:
    MyTClass(int _num, const std::vector<float>& _v, double _inst1, const T& _obj);
    bool foo();
};

class Class1 {
public:
    bool bar(int num, const std::vector<float>& vec);
    int c_1_1();
    float c_1_2();
    void c_1_3();
};

class Class2 {
public:
    bool bar(int num, const std::vector<float>& vec);
    int c_2_1();
    float c_2_2();
    void c_2_3();
};

class Class3 {
public:
    bool bar(int num, const std::vector<float>& vec);
    int c_3_1();
    float c_3_2();
    void c_3_3();
};

class MyTClassTest : public ::testing::Test {
public:
    Class1 cl1;
    Class2 cl2;
    Class3 cl3;

    MyTClass<Class1, int> createClass1Test(int num, const std::vector<float>& vec, int inst1);
    MyTClass<Class2, int> createClass2Test(int num, const std::vector<float>& vec, int inst1);
    MyTClass<Class3, int> createClass3Test(int num, const std::vector<float>& vec, int inst1);
};

#endif

