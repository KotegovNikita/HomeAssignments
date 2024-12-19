/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment5 */
#include "Transformers.hpp"

Transformers::Transformers(std::string n, int p, int a, Alliance* al)
    : name(n), power(p), armor(a), alliance(al) {}

void Transformers::transform() const {
    std::cout << "Transformer: transform()\n";
}

void Transformers::openFire() const {
    std::cout << "Transformer: openFire()\n";
}

void Transformers::ulta() const {
    std::cout << "Transformer: ulta()\n";
}
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
Transformers::~Transformers() = default;

