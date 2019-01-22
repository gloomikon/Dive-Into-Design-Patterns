#ifndef DRAGON_H
#define DRAGON_H

#include "enemy.h"
#include "fireball.h"

class Dragon : public Enemy
{
public:
    virtual Weapon *createWeapon() override
    {
        return new FireBall;
    }
};

#endif // DRAGON_H
