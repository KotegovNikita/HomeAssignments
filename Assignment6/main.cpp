#include "main.hpp"

int main() {
    Class1 class1;
    MyClass<Class1> myClass1(class1);
    std::cout << "MyClass<Class1>::foo() = " << myClass1.foo() << std::endl;

    Class2 class2;
    MyClass<Class2> myClass2(class2);
    std::cout << "MyClass<Class2>::foo() = " << myClass2.foo() << std::endl;

    Class3 class3;
    MyClass<Class3> myClass3(class3);
    std::cout << "MyClass<Class3>::foo() = " << myClass3.foo() << std::endl;

    MyClass<int> myIntClass(5);
    std::cout << "MyClass<int>::foo() = " << myIntClass.foo() << std::endl;

    MyClass<double> myDoubleClass(3.14);
    std::cout << "MyClass<double>::foo() = " << myDoubleClass.foo() << std::endl;

    return 0;
}

