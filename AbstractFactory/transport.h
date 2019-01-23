#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include "elf.h"

class Transport
{
public:
    virtual void goTo(Elf *elf, int x, int y) = 0;
    virtual ~Transport() {}
};

#endif // TRANSPORT_H
