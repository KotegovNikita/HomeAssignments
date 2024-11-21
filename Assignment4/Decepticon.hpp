#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP

#include <string>
#include <iostream>
#include "Transformers.hpp"

class Decepticon : public Transformers
{
private:
    std::string hostility;
    int health;
public:
    Decepticon(std::string n, int p, int a, Alliance* al, std::string hostility);
    Decepticon(int p, int a);

    std::string getHostility() const;
    void setHostility(const std::string& h);
    int getHealth() const;
    void setHealth(int he);
    Alliance* getAlliance() const;

    bool operator>(const Decepticon& other) const;
    bool operator<(const Decepticon& other) const;
    bool operator>=(const Decepticon& other) const;
    bool operator<=(const Decepticon& other) const;

    friend std::ostream& operator<<(std::ostream& out, const Decepticon& d);
};

#endif
