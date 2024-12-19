#include "main.hpp"

template <typename T1, typename T2>
MyTClass<T1, T2>::MyTClass(int _num, const std::vector<float>& _v, const T1& _obj1, const T2& _obj2)
    : number(_num), vec(_v), inst1(_obj1), inst2(_obj2) {}

template <typename T1, typename T2>
bool MyTClass<T1, T2>::foo() {
    return inst1.bar(number, vec);
}

template<typename T>
MyTClass<int, T>::MyTClass(int _num, const std::vector<float>& _v, int _inst1, const T& _obj)
    : number(_num), vec(_v), inst1(_inst1), inst2(_obj) {}

template<typename T>
bool MyTClass<int, T>::foo() {
    return true;
}

template<typename T>
MyTClass<double, T>::MyTClass(int _num, const std::vector<float>& _v, double _inst1, const T& _obj)
    : number(_num), vec(_v), inst1(_inst1), inst2(_obj) {}

template<typename T>
bool MyTClass<double, T>::foo() {
    return false;
}

bool Class1::bar(int num, const std::vector<float>& vec) {
    return num > 0;
}

int Class1::c_1_1() {
    std::cout << "c_1_1\n";
    return 1;
}

float Class1::c_1_2() {
    std::cout << "c_1_2\n";
    return 0.1;
}

void Class1::c_1_3() {
    std::cout << "c_1_3\n";
}

bool Class2::bar(int num, const std::vector<float>& vec) {
    return !vec.empty();
}

int Class2::c_2_1() {
    std::cout << "c_2_1\n";
    return 2;
}

float Class2::c_2_2() {
    std::cout << "c_2_2\n";
    return 0.2;
}

void Class2::c_2_3() {
    std::cout << "c_2_3\n";
}

bool Class3::bar(int num, const std::vector<float>& vec) {
    return num == -int(vec.size());
}

int Class3::c_3_1() {
    std::cout << "c_3_1\n";
    return 3;
}

float Class3::c_3_2() {
    std::cout << "c_3_2\n";
    return 0.3;
}

void Class3::c_3_3() {
    std::cout << "c_3_3\n";
}

MyTClass<Class1, int> MyTClassTest::createClass1Test(int num, const std::vector<float>& vec, int inst1) {
    return MyTClass<Class1, int>(num, vec, cl1, inst1);
}

MyTClass<Class2, int> MyTClassTest::createClass2Test(int num, const std::vector<float>& vec, int inst1) {
    return MyTClass<Class2, int>(num, vec, cl2, inst1);
}

MyTClass<Class3, int> MyTClassTest::createClass3Test(int num, const std::vector<float>& vec, int inst1) {
    return MyTClass<Class3, int>(num, vec, cl3, inst1);
}

TEST_F(MyTClassTest, Class1FooReturnsTrue) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    auto myClass1 = createClass1Test(5, vec, 10);
    EXPECT_TRUE(myClass1.foo());
}

TEST_F(MyTClassTest, Class1FooReturnsFalse) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    auto myClass1 = createClass1Test(-5, vec, 10);
    EXPECT_FALSE(myClass1.foo());
}

TEST_F(MyTClassTest, Class2FooReturnsTrue) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    auto myClass2 = createClass2Test(1, vec, 10);
    EXPECT_TRUE(myClass2.foo());
}

TEST_F(MyTClassTest, Class2FooReturnsFalse) {
    std::vector<float> vec = {};
    auto myClass2 = createClass2Test(-5, vec, 10);
    EXPECT_FALSE(myClass2.foo());
}

TEST_F(MyTClassTest, Class3FooReturnsTrue) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    auto myClass3 = createClass3Test(-3, vec, 10);
    EXPECT_TRUE(myClass3.foo());
}

TEST_F(MyTClassTest, Class3FooReturnsFalse) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    auto myClass3 = createClass3Test(3, vec, 10);
    EXPECT_FALSE(myClass3.foo());
}

TEST_F(MyTClassTest, IntSpecializationReturnsTrue) {
    MyTClass<int, Class1> myIntClass(0, {}, 0, cl1);
    EXPECT_TRUE(myIntClass.foo());
}

TEST_F(MyTClassTest, DoubleSpecializationReturnsFalse) {
    MyTClass<double, Class1> myDoubleClass(0, {}, 0.0, cl1);
    EXPECT_FALSE(myDoubleClass.foo());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

