#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <vector>

template <typename T>
class MyClass {
public:
    MyClass(T obj) : obj_(obj) {}

    bool foo() {
        return obj_.bar(number_, vec_);
    }

    int number_ = 5;
    std::vector<float> vec_ = {1.0, 2.0, 3.0};

private:
    T obj_;
};

template <>
class MyClass<int> {
public:
    MyClass(int obj) : obj_(obj) {}

    bool foo() {
        return true;
    }

private:
    int obj_;
};

template <>
class MyClass<double> {
public:
    MyClass(double obj) : obj_(obj) {}
    
    bool foo() {
        return false;
    }
private:
    double obj_;
};

class Class1 {
public:
    bool bar(int x, std::vector<float>&) {
        return x > 0;
    }
    int c_i_1() { return 1; }
    float c_i_2() { return 1.1f; }
    void c_i_3() {}
};

class Class2 {
public:
    bool bar(int, std::vector<float>& vec) {
        return !vec.empty();
    }
    int c_i_1() { return 2; }
    float c_i_2() { return 2.2f; }
    void c_i_3() {}
};

class Class3 {
public:
    bool bar(int x, std::vector<float>& vec) {
        return x == -static_cast<int>(vec.size());
    }
    int c_i_1() { return 3; }
    float c_i_2() { return 3.3f; }
    void c_i_3() {}
};
#endif
