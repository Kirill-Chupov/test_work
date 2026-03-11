#include <iostream>
#include <vector>
#include <memory>

#include "generators.h"

using Generators = std::vector<std::unique_ptr<CodeGenerator>>;

Generators InitGen() {
    Generators generators;

    generators.push_back(std::make_unique<JavaGenerator>());
    generators.push_back(std::make_unique<CppGenerator>());
    generators.push_back(std::make_unique<PhpGenerator>());

    return generators;
}

void UseGen(const Generators& gen) {
    for(auto it = gen.begin(); it != gen.end(); ++it) {
        if (*it != nullptr) {
            auto code = it->get()->generateCode();
            auto detail = it->get()->someCodeRelatedThing();

            std::cout << "Genarated code: " << code << std::endl;
            std::cout << "Language detail: " << detail << std::endl;
            std::cout << std::endl;
        }
    }
}

int main() {
    Generators gen = InitGen();
    UseGen(gen);
}
