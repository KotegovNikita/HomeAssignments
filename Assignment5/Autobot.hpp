#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP

#include <string>
#include "Transformers.hpp"

class Autobot : public Transformers {
private:
    std::string hostility;
    int health;
public:
    void transform() const override;
    void openFire() const override;
    void ulta() const override;

    Autobot(std::string n, int p, int a, Alliance* al, std::string hostility);
    std::string getHostility() const;
    void setHostility(const std::string& h);
    int getHealth() const;
    void setHealth(int he);
    Alliance* getAlliance() const; 
};

#endif
