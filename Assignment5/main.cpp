#include "Autobot.hpp"
#include "Decepticon.hpp"
#include <vector>
#include <memory>
#include <iostream>

int main() {
    // Создание объектов с передачей параметров конструкторам
    Autobot autobot("Autobot", 100, 50, nullptr, "AutobotHostility");
    autobot.transform();
    autobot.openFire();
    autobot.ulta();

    Decepticon decepticon("Decepticon", 200, 75, nullptr, "DecepticonHostility");
    decepticon.transform();
    decepticon.openFire();
    decepticon.ulta();

    // Создание указателя на базовый класс
    Transformers* t = &autobot;
    t->transform();
    t->openFire();
    t->ulta();

    t = &decepticon;
    t->transform();
    t->openFire();
    t->ulta();

    // Создание вектора с указателями на объекты разных типов
    std::vector<std::unique_ptr<Transformers>> transformers;
    for (int i = 0; i < 3; ++i) {
        transformers.emplace_back(std::make_unique<Autobot>("Autobot", 100, 50, nullptr, "AutobotHostility"));
        transformers.emplace_back(std::make_unique<Decepticon>("Decepticon", 200, 75, nullptr, "DecepticonHostility"));
    }

    // Вызов виртуальных методов через общий интерфейс
    for (const auto& transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ulta();
    }

    return 0;
}

