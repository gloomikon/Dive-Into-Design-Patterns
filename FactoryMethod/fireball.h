#ifndef FIREBALL_H
#define FIREBALL_H

#include "weapon.h"

class FireBall : public Weapon
{
public:
    virtual void makeAttack() override
    {
        std::cout << "FireBall burns like hell!" << std::endl;
    }
};




#endif // FIREBALL_H
