#ifndef WEAPON_H
#define WEAPON_H

#include "iostream"

class Weapon
{
public:
    virtual void makeAttack() = 0;
    virtual ~Weapon() {}
};

#endif // WEAPON_H
