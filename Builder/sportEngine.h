#pragma once
#ifndef SPORTENGINE_H
# define SPORTENGINE_H
# include "Engine.h"

class SportEngine : public Engine
{
public:
	SportEngine() : Engine(1000, 450, 10, 28, 0) {}
};

#endif // SPORTENGINE_H

