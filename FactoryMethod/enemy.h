#ifndef ENEMY_H
#define ENEMY_H

#include "weapon.h"

class Enemy
{
private:
    Weapon  *weapon;
public:
    void attack()
    {
        weapon = createWeapon();
        weapon->makeAttack();
        delete weapon;
    }
    virtual Weapon *createWeapon() = 0;
    static Enemy *createEnemy(int choice);
    virtual ~Enemy() = 0;
};

#endif // ENEMY_H
