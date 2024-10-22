#include "Decepticon.hpp"

Decepticon::Decepticon(std::string n, int p, int a, Alliance* al, std::string hostility)
    : Transformers(n, p, a, Type("Decepticon"), al), hostility(hostility), health(100) {}

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
