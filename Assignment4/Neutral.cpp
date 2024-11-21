#include "Neutral.hpp"

Neutral::Neutral(std::string n, int p, int a, Alliance* al, std::string purpose)
    : Transformers(n, p, a, Type("Neutral"), al), purpose(purpose) {}

Neutral::Neutral(int p, int a)
    : Transformers("Ratchet", p, a, Type("Neutral"), nullptr), purpose("Treatment") {}

std::string Neutral::getPurpose() const
{
    return purpose;
}

void Neutral::setPurpose(const std::string& p)
{
    purpose = p;
}

std::ostream& operator<<(std::ostream& out, const Neutral& n)
{
    out << "Neutral power: " << n.getPower() << ", Purpose: " << n.getPurpose();
    return out;
}

bool Neutral::operator>(const Neutral& other) const
{
    return getPower() > other.getPower();
}

bool Neutral::operator<(const Neutral& other) const
{
    return getPower() < other.getPower();
}

bool Neutral::operator>=(const Neutral& other) const
{
    return getPower() >= other.getPower();
}

bool Neutral::operator<=(const Neutral& other) const
{
    return getPower() <= other.getPower();
}

