#ifndef TRANSFORMERS_HPP
#define TRANSFORMERS_HPP

#include <iostream>
#include <string>
#include "Alliance.hpp"

class Transformers {
private:
    std::string name;
    int power;
    int armor;
protected:
    Alliance* alliance;

public:
    virtual void transform() const;
    virtual void openFire() const;
    virtual void ulta() const;

    virtual ~Transformers();

    Transformers(std::string n, int p, int a, Alliance* al);
    std::string getName() const;
    void setName(const std::string& n);
    int getPower() const;
    void setPower(int a);
    Alliance* getAlliance() const;
};

#endif

