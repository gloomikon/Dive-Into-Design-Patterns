#ifndef VIKING_H
#define VIKING_H

#include "enemy.h"
#include "axe.h"

class Viking : public Enemy
{
public:
    virtual Weapon *createWeapon() override
    {
        return new Axe;
    }
};

#endif // VIKING_H
