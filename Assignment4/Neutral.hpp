#ifndef NEUTRAL_HPP
#define NEUTRAL_HPP

#include <string>
#include <iostream>
#include "Transformers.hpp"

class Neutral : public Transformers
{
private:
    std::string purpose;
public:
    Neutral(std::string n, int p, int a, Alliance* al, std::string purpose);
    Neutral(int p, int a);

    std::string getPurpose() const;
    void setPurpose(const std::string& p);

    bool operator>(const Neutral& other) const;
    bool operator<(const Neutral& other) const;
    bool operator>=(const Neutral& other) const;
    bool operator<=(const Neutral& other) const;

    friend std::ostream& operator<<(std::ostream& out, const Neutral& n);
};

#endif

