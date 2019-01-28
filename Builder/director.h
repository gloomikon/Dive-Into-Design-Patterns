#ifndef DIRECTOR_H
# define DIRECTOR_H
# include "carBuilder.h"
# include "sportEngine.h"
# include "electroEngine.h"
# include "car.h"
class Director
{
public:
	Car *makeSportsCar(CarBuilder *builder)
	{
		builder->reset();
		builder->setSeats(2);
		builder->setEngine(new SportEngine);
		builder->setGPS(true);
		builder->setTripComputer(true);
		return builder->getResult();
	}
	Car *makeElectroCar(CarBuilder *builder)
	{
		builder->reset();
		builder->setSeats(4);
		builder->setEngine(new ElectroEngine);
		builder->setGPS(true);
		builder->setTripComputer(true);
		return builder->getResult();
	}
};
#endif // !DIRECTOR_H
