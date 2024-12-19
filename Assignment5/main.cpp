/* Nikita Kotegov st128906@student.spbu.ru Group B81 Assignment5 */
#include "Autobot.hpp"
#include "Decepticon.hpp"
#include "Transformers.hpp"
#include <vector>
#include <memory>
#include <iostream>

int main() {
    Autobot autobot("Autobot", 100, 50, nullptr, "AutobotHostility");
    autobot.transform();
    autobot.openFire();
    autobot.ulta();

    Decepticon decepticon("Decepticon", 200, 75, nullptr, "DecepticonHostility");
    decepticon.transform();
    decepticon.openFire();
    decepticon.ulta();

    Transformers baseTransformer("Transformer", 150, 60, nullptr);
    baseTransformer.transform();
    baseTransformer.openFire();
    baseTransformer.ulta();

    std::vector<std::unique_ptr<Transformers>> transformers;
    for (int i = 0; i < 3; ++i) {
        transformers.emplace_back(std::make_unique<Transformers>("Transformer", 150, 60, nullptr));
        transformers.emplace_back(std::make_unique<Autobot>("Autobot", 100, 50, nullptr, "AutobotHostility"));
        transformers.emplace_back(std::make_unique<Decepticon>("Decepticon", 200, 75, nullptr, "DecepticonHostility"));
    }

    for (const auto& transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ulta();
    }

    return 0;
}

