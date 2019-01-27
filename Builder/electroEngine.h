#pragma once
#ifndef ELECTROENGINE_H
# define ELECTROENGINE_H
# include "Engine.h"

class ElectroEngine : public Engine
{
public:
	ElectroEngine() : Engine(800, 300, 12, 0, 33) {}
};
#endif // !ELECTROENGINE_H
