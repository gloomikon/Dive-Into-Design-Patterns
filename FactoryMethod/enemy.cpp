#include "archer.h"
#include "viking.h"
#include "dragon.h"

Enemy *Enemy::createEnemy(int choice)
{
    if (choice == 1)
        return new Archer;
    if (choice == 2)
        return new Viking;
    if (choice == 3)
        return new Dragon;
    return nullptr;
}

Enemy::~Enemy()
{

}
