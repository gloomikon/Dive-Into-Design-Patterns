#ifndef DARKFACTORY_H
#define DARKFACTORY_H

#include "abstractfactory.h"
#include "darkelf.h"
#include "darktransport.h"

class DarkFactory : public AbstractFactory
{
public:
    virtual Elf *createElf(std::string name) override
    {
        return new DarkElf(name);
    }
    virtual Transport *createTransport() override
    {
        return new DarkTransport;
    }
};

#endif // DARKFACTORY_H
