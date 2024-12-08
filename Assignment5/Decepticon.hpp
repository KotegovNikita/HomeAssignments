#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP

#include <string>
#include "Transformers.hpp"

class Decepticon : public Transformers {
private:
    std::string hostility;
    int health;
public:
    void transform() const override;
    void openFire() const override;
    void ulta() const override;

    Decepticon(std::string n, int p, int a, Alliance* al, std::string hostility);
    std::string getHostility() const;
    void setHostility(const std::string& h);
    int getHealth() const;
    void setHealth(int he);
    Alliance* getAlliance() const;
};

#endif
