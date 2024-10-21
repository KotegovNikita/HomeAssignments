#include <iostream>
#include <string>

class Type {
private:
    std::string name;
public:
    Type(std::string n) : name(n) {}
    std::string getName() {
        return name;
    }
};

class Alliance {
private:
    std::string name;
public:
    Alliance(std::string n) : name(n) {}
    std::string getName() {
        return name;
    }
};

class Transformers {
private:
    std::string name;
    int power;
    int armor;
    Type type;
    Alliance* alliance;

public:
    Transformers(std::string n, int p, int a, Type t, Alliance* al)
        : name(n), power(p), armor(a), type(t), alliance(al) {}

    std::string getName() const {
        return name;
    }
    void setName(const std::string& n) {
    name = n;
    }
    int getPower() const {
        return power;
    }
    void setPower(int a) {
    power = a;
    }
    ~Transformers() {}
};

class Autobot: public Transformers {
private:
    std::string hostility;
    int health;
public:
    Autobot(std::string n, int p, int a, Alliance* al, std::string hostility)
        : Transformers(n, p, a, Type("Autobot"), al), hostility(hostility), health(100) {}

    std::string getHostility() const {
        return hostility;
    }
    void setHostility(const std::string& h) {
        hostility = h;
    }

    int getHealth() const {
        return health;
    }
    void setHealth(int he) {
        health = he;
    }
};


class Decepticon: public Transformers {
private:
    std::string hostility;
    int health;
public:
    Decepticon(std::string n, int p, int a, Alliance* al, std::string hostility)
        : Transformers(n, p, a, Type("Decepticon"), al), hostility(hostility), health(100) {}

    std::string getHostility() const {
        return hostility;
    }
    void setHostility(const std::string& h) {
        hostility = h;
    }

    int getHealth() const {
        return health;
    }
    void setHealth(int he) {
        health = he;
    }
};

class Neutral: public Transformers {
private:
    std::string purpose;
public:
    Neutral(std::string n, int p, int a, Alliance* al, std::string purpose)
        : Transformers(n, p, a, Type("Neutral"), al), purpose(purpose) {}

    std::string getPurpose() const {
        return purpose;
    }
    void setPurpose(const std::string& p) {
        purpose = p;
    }
};
