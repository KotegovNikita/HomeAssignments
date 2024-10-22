#ifndef NEUTRAL_HPP
#define NEUTRAL_HPP

#include <string>
#include "Transformers.hpp"

class Neutral : public Transformers {
private:
    std::string purpose;  // Цель или миссия нейтрального трансформера
public:
    Neutral(std::string n, int p, int a, Alliance* al, std::string purpose);
    std::string getPurpose() const;
    void setPurpose(const std::string& p);
};

#endif

