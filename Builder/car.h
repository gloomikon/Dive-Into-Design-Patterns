#pragma once
#ifndef CAR_H
# define CAR_H
# include <iostream>
# include "Engine.h"
class Car
{
private:
	int seats;
	Engine *engine;
	bool gps;
	bool tripComputer;
public:
	Car(): gps{false}, tripComputer{false} {}
	void setSeats(int seats) { this->seats = seats; }
	void setEngine(Engine *engine) { this->engine = engine; }
	void setGPS(bool gps) { this->gps = gps; }
	void setTripComputer(bool tripComputer) { this->tripComputer = tripComputer; }
	~Car() { delete engine; }
};
#endif // !CAR_H
