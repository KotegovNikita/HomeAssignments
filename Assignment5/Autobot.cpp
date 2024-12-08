#include "Autobot.hpp"

Autobot::Autobot(std::string n, int p, int a, Alliance* al, std::string hostility)
    : Transformers(n, p, a, al), hostility(hostility), health(100) {}

std::string Autobot::getHostility() const {
    return hostility;
}

void Autobot::setHostility(const std::string& h) {
    hostility = h;
}

int Autobot::getHealth() const {
    return health;
}
Alliance* Autobot::getAlliance() const {
    return alliance;
}

void Autobot::setHealth(int he) {
    health = he;
}

void Autobot::transform() const {
    std::cout << "Autobot: transform()\n";
}

void Autobot::openFire() const {
    std::cout << "Autobot: openFire()\n";
}

void Autobot::ulta() const {
    std::cout << "Autobot: ulta()\n";
}
