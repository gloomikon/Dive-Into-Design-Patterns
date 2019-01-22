#ifndef AXE_H
#define AXE_H

#include "weapon.h"

class Axe : public Weapon
{
public:
    virtual void makeAttack() override
    {
        std::cout << "Attack with an axe crashes someone's head!" << std::endl;
    }
};

#endif // AXE_H
