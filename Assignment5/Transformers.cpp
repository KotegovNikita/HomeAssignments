#include "Transformers.hpp"

Transformers::Transformers(std::string n, int p, int a, Alliance* al)
    : name(n), power(p), armor(a), alliance(al) {}

std::string Transformers::getName() const {
    return name;
}

void Transformers::setName(const std::string& n) {
    name = n;
}

int Transformers::getPower() const {
    return power;
}

void Transformers::setPower(int a) {
    power = a;
}
Alliance* Transformers::getAlliance() const {
    return alliance;
}

