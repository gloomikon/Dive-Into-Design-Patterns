#pragma once

#ifndef BUILDER_H
# define BUILDER_H
# include <iostream>
# include "Engine.h"

class Builder
{
public:
	virtual void reset() = 0;
	virtual void setSeats(int number) = 0;
	virtual void setEngine(Engine *engine) = 0;
	virtual void setTripComputer(bool tripComputer) = 0;
	virtual void setGPS(bool gps) = 0;
	~Builder() {}
};
#endif // !BUILDER_H
