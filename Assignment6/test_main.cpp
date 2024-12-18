#include "test_main.hpp"

TEST(MyClassTest, TestClass1True) {
    Class1 class1;
    MyClass<Class1> myClass1(class1);
    bool result = myClass1.foo();
    ASSERT_TRUE(result); 
    std::cout << "MyClass<Class1>::foo() = " << result << std::endl;  
}

TEST(MyClassTest, TestClass1False) {
    Class1 class1;
    MyClass<Class1> myClass1(class1);
    myClass1.number_ = -5;
    bool result = myClass1.foo();
    ASSERT_FALSE(result); 
    std::cout << "MyClass<Class1>::foo() = " << result << std::endl; 
}

TEST(MyClassTest, TestClass2True) {
    Class2 class2;
    MyClass<Class2> myClass2(class2);
    bool result = myClass2.foo();
    ASSERT_TRUE(result);  
    std::cout << "MyClass<Class2>::foo() = " << result << std::endl; 
}

TEST(MyClassTest, TestClass2False) {
    Class2 class2;
    MyClass<Class2> myClass2(class2);
    myClass2.vec_.clear(); 
    bool result = myClass2.foo();
    ASSERT_FALSE(result);  
    std::cout << "MyClass<Class2>::foo() = " << result << std::endl;  
}

TEST(MyClassTest, TestClass3True) {
    Class3 class3;
    MyClass<Class3> myClass3(class3);
    bool result = myClass3.foo();
    ASSERT_TRUE(result); 
    std::cout << "MyClass<Class3>::foo() = " << result << std::endl;  
}

TEST(MyClassTest, TestClass3False) {
    Class3 class3;
    MyClass<Class3> myClass3(class3);
    myClass3.number_ = 5;
    myClass3.vec_ = {1.0f};  
    bool result = myClass3.foo();
    ASSERT_FALSE(result);  
    std::cout << "MyClass<Class3>::foo() = " << result << std::endl;  
}

TEST(MyClassTest, TestIntSpecialization) {
    MyClass<int> myIntClass(5);
    bool result = myIntClass.foo();
    ASSERT_TRUE(result);  
    std::cout << "MyClass<int>::foo() = " << result << std::endl;  /
}

TEST(MyClassTest, TestDoubleSpecialization) {
    MyClass<double> myDoubleClass(3.14);
    bool result = myDoubleClass.foo();
    ASSERT_FALSE(result);  
    std::cout << "MyClass<double>::foo() = " << result << std::endl;  
}

