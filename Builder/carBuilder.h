#pragma once
#ifndef CARBUILDER_H
# define CARBUILDER_H
# include "builder.h"
# include "car.h"

class CarBuilder : public Builder
{
private:
	Car *car;
public:
	virtual void reset() override final
	{
		car = new Car;
	}
	virtual void setSeats(int number) override final
	{
		car->setSeats(number);
	}
	virtual void setEngine(Engine *engine) override final
	{
		car->setEngine(engine);
	}
	virtual void setTripComputer(bool tripComputer) override final
	{
		car->setTripComputer(tripComputer);
	}
	virtual void setGPS(bool gps) override final
	{
		car->setGPS(gps);
	}
	Car *getResult()
	{
		return car;
	}
};

#endif // !CARBUILDER_H

