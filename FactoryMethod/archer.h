#ifndef ARCHER_H
#define ARCHER_H

#include "enemy.h"
#include "arrow.h"

class Archer : public Enemy
{
public:
    virtual Weapon *createWeapon() override
    {
        return new Arrow;
    }
};

#endif // ARCHER_H
