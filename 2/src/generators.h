#pragma
#include <string>

using namespace std::literals;


class CodeGenerator {
public:
    virtual ~CodeGenerator() = default;
    virtual std::string generateCode() const = 0;
    virtual std::string someCodeRelatedThing() const = 0;
};

class JavaGenerator : public CodeGenerator {
public:
    std::string generateCode() const override {
        return "JavaCode"s;
    }

    std::string someCodeRelatedThing() const override {
        return "JavaGarbage"s;
    }
};

class CppGenerator : public CodeGenerator {
public:
    std::string generateCode() const override {
        return "CppCode"s;
    }

    std::string someCodeRelatedThing() const override {
        return "CppPointer"s;
    }
};

class PhpGenerator : public CodeGenerator {
public:
    std::string generateCode() const override {
        return "PhpCode"s;
    }

    std::string someCodeRelatedThing() const override {
        return "PhpPage"s;
    }
};