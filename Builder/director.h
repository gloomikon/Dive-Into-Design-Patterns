#pragma once
#ifndef DIRECTOR_H
# define DIRECTOR_H
# include "carBuilder.h"
# include "sportEngine.h"
# include "electroEngine.h"
class Director
{
public:
	void makeSportsCar(Builder *builder)
	{
		builder->reset();
		builder->setSeats(2);
		builder->setEngine(new SportEngine);
		builder->setGPS(true);
		builder->setTripComputer(true);
	}
	void makeElectroCar(Builder *builder)
	{
		builder->reset();
		builder->setSeats(4);
		builder->setEngine(new ElectroEngine);
		builder->setGPS(true);
		builder->setTripComputer(true);
	}
};
#endif // !DIRECTOR_H
