#include "Autobot.hpp"

Autobot::Autobot(std::string n, int p, int a, Alliance* al, std::string hostility)
    : Transformers(n, p, a, Type("Autobot"), al), hostility(hostility), health(100) {}

Autobot::Autobot(int p, int a)
    : Transformers("Optimus Prime", p, a, Type("Autobot"), nullptr), hostility("Neutral"), health(100) {}

std::string Autobot::getHostility() const
{
    return hostility;
}

void Autobot::setHostility(const std::string& h)
{
    hostility = h;
}

int Autobot::getHealth() const
{
    return health;
}
Alliance* Autobot::getAlliance() const
{
    return alliance;
}

void Autobot::setHealth(int he)
{
    health = he;

}

bool Autobot::operator>(const Autobot& other) const
{
    return getPower() > other.getPower();
}

bool Autobot::operator<(const Autobot& other) const
{
    return getPower() < other.getPower();
}

bool Autobot::operator>=(const Autobot& other) const
{
    return getPower() >= other.getPower();
}

bool Autobot::operator<=(const Autobot& other) const
{
    return getPower() <= other.getPower();
}


std::ostream& operator<<(std::ostream& out, const Autobot& a)
{
    out << "Autobot power: " << a.getPower() << ", Health: " << a.getHealth();
    return out;
}

