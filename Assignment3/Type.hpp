#ifndef TYPE_HPP
#define TYPE_HPP

#include <string>

class Type {
private:
    std::string name;
public:
    Type(std::string n);
    std::string getName();
};

#endif
