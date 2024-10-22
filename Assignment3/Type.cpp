#include "Type.hpp"

Type::Type(std::string n) : name(n) {}

std::string Type::getName() {
    return name;
}
