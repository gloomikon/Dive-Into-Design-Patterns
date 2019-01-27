#include "pch.h"
#include <iostream>
#include "director.h"
#include "carBuilder.h"

int main()
{
	Director *director = new Director;
	CarBuilder *carBuilder = new CarBuilder;

	//Here we build SportCar
	director->makeSportsCar(carBuilder);
	Car *sportCar = carBuilder->getResult();
	//And here we build ElectroCar
	director->makeElectroCar(carBuilder);
	Car *electroCar = carBuilder->getResult();

	delete director;
	delete carBuilder;
	delete sportCar;
	delete electroCar;
	return 0;
}