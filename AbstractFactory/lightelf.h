#ifndef LIGHTELF_H
#define LIGHTELF_H

#include "elf.h"

class LightElf : public Elf
{
public:
    LightElf(std::string name) : Elf(name) {}
    virtual void action() override
    {
        std::cout << "I am a light elf!" << std::endl;
    }
};

#endif // LIGHTELF_H
