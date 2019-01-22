#ifndef ARROW_H
#define ARROW_H

#include "weapon.h"

class Arrow : public Weapon
{
public:
    Arrow() {}
    virtual void makeAttack() override
    {
        std::cout << "Arrow is flying and damaging the house!" << std::endl;
    }
};

#endif // ARROW_H
