#ifndef ELF_H
#define ELF_H

#include "iostream"

class Elf
{
private:
    std::string name;
public:
    Elf(std::string name): name{name} {}
    std::string getName() { return name; }
    virtual void action() = 0;
    virtual ~Elf() {}
};

#endif // ELF_H
