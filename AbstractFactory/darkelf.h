#ifndef DARKELF_H
#define DARKELF_H

#include "elf.h"

class DarkElf : public Elf
{
public:
    DarkElf(std::string name) : Elf(name) {}
    virtual void action() override
    {
        std::cout << "I am a dark elf!" << std::endl;
    }
};

#endif // DARKELF_H
