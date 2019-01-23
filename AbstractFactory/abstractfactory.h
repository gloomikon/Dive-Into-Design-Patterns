#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "elf.h"
#include "transport.h"

class AbstractFactory
{
public:
    virtual Elf *createElf(std::string name) = 0;
    virtual Transport *createTransport() = 0;
    virtual ~AbstractFactory() {}
};

#endif // ABSTRACTFACTORY_H
