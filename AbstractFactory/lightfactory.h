#ifndef LIGHTFACTORY_H
#define LIGHTFACTORY_H

#include "abstractfactory.h"
#include "lightelf.h"
#include "lighttransport.h"

class LightFactory : public AbstractFactory
{
public:
    virtual Elf *createElf(std::string name) override
    {
        return new LightElf(name);
    }
    virtual Transport *createTransport() override
    {
        return new LightTransport;
    }
};

#endif // LIGHTFACTORY_H
