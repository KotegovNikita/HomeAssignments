#ifndef TRANSFORMERS_HPP
#define TRANSFORMERS_HPP

#include <string>
#include "Type.hpp"
#include "Alliance.hpp"

class Transformers {
private:
    std::string name;
    int power;
    int armor;
    Type type;
    Alliance* alliance;

public:
    Transformers(std::string n, int p, int a, Type t, Alliance* al);
    std::string getName() const;
    void setName(const std::string& n);
    int getPower() const;
    void setPower(int a);
    ~Transformers();
};

#endif
