#include <iostream>
#include "director.h"
#include "carBuilder.h"

int main()
{
	Director *director = new Director;
	CarBuilder *carBuilder = new CarBuilder;

	//Here we build SportCar
	Car *sportCar = director->makeSportsCar(carBuilder);
	//And here we build ElectroCar
	Car *electroCar = director->makeElectroCar(carBuilder);

	delete director;
	delete carBuilder;
	delete sportCar;
	delete electroCar;
	return 0;
}