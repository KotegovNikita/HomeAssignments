/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment4 */
#ifndef ALLIANCE_HPP
#define ALLIANCE_HPP

#include <string>

class Alliance
{
private:
    std::string name;
public:
    Alliance(std::string n);
    std::string getName();
};

#endif
