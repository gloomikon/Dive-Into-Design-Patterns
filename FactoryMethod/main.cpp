#include "archer.h"
#include "viking.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<Enemy*> enemies;

    int choice;
    do
    {
        std::cout << "Archer(1) Viking(2) Dragon(3) Exit(0) : ";
        std::cin >> choice;
        if (!choice)
            break ;
        enemies.push_back(Enemy::createEnemy(choice));
    } while (choice);

    for (auto &enemy : enemies) {
        enemy->attack();
        delete enemy;
    }
    return (0);
}
