#include "Neutral.hpp"

Neutral::Neutral(std::string n, int p, int a, Alliance* al, std::string purpose)
    : Transformers(n, p, a, Type("Neutral"), al), purpose(purpose) {}

std::string Neutral::getPurpose() const {
    return purpose;
}

void Neutral::setPurpose(const std::string& p) {
    purpose = p;
}
