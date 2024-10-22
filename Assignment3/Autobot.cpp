#include "Autobot.hpp"

Autobot::Autobot(std::string n, int p, int a, Alliance* al, std::string hostility)
    : Transformers(n, p, a, Type("Autobot"), al), hostility(hostility), health(100) {}

std::string Autobot::getHostility() const {
    return hostility;
}

void Autobot::setHostility(const std::string& h) {
    hostility = h;
}

int Autobot::getHealth() const {
    return health;
}

void Autobot::setHealth(int he) {
    health = he;
}

