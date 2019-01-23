#include <iostream>
#include<string>
#include "elf.h"
#include "transport.h"
#include "lightfactory.h"
#include "darkfactory.h"

int main()
{
    int choice;
    std::string name;
    AbstractFactory *factory;
    Elf *elf;
    Transport *transport;

    std::cout << "Dark Legion(1) LightLegion(2) : ";
    std::cin >> choice;
    if (choice == 1)
        factory = new DarkFactory;
    else if (choice == 2)
        factory = new LightFactory;
    else
    {
        std::cout << "Incorrect input!";
        return -1;
    }
    std::cout << "Enter Elf's name : ";
    std::cin >> name;
    //Creating
    elf = factory->createElf(name);
    transport = factory->createTransport();
    //Acting
    transport->goTo(elf, 23, 11);
    elf->action();
    //Deleting
    delete elf;
    delete transport;
    delete factory;
    return 0;
}
