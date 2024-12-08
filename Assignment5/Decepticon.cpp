#include "Decepticon.hpp"

Decepticon::Decepticon(std::string n, int p, int a, Alliance* al, std::string hostility)
    : Transformers(n, p, a, al), hostility(hostility), health(100) {}

std::string Decepticon::getHostility() const {
    return hostility;
}

void Decepticon::setHostility(const std::string& h) {
    hostility = h;
}

int Decepticon::getHealth() const {
    return health;
}

void Decepticon::setHealth(int he) {
    health = he;
}
Alliance* Decepticon::getAlliance() const {
    return alliance;
}

void Decepticon::transform() const {
    std::cout << "Decepticon: transform()\n";
}

void Decepticon::openFire() const {
    std::cout << "Decepticon: openFire()\n";
}

void Decepticon::ulta() const {
    std::cout << "Decepticon: ulta()\n";
}
