#include "Decepticon.hpp"

Decepticon::Decepticon(std::string n, int p, int a, Alliance* al, std::string hostility)
    : Transformers(n, p, a, Type("Decepticon"), al), hostility(hostility), health(100) {}

Decepticon::Decepticon(int p, int a)
    : Transformers("Megatron", p, a, Type("Decepticon"), nullptr), hostility("Hostile"), health(100) {}

std::string Decepticon::getHostility() const
{
    return hostility;
}

void Decepticon::setHostility(const std::string& h)
{
    hostility = h;
}

int Decepticon::getHealth() const
{
    return health;
}

void Decepticon::setHealth(int he)
{
    health = he;
}
Alliance* Decepticon::getAlliance() const
{
    return alliance;
}

std::ostream& operator<<(std::ostream& out, const Decepticon& d)
{
    out << "Decepticon power: " << d.getPower() << ", Health: " << d.getHealth();
    return out;
}

bool Decepticon::operator>(const Decepticon& other) const
{
    return getPower() > other.getPower();
}

bool Decepticon::operator<(const Decepticon& other) const
{
    return getPower() < other.getPower();
}

bool Decepticon::operator>=(const Decepticon& other) const
{
    return getPower() >= other.getPower();
}

bool Decepticon::operator<=(const Decepticon& other) const
{
    return getPower() <= other.getPower();
}

