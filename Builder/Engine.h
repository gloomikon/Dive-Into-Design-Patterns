#pragma once
#ifndef ENGINE_H
# define ENGINE_H

class Engine
{
private:
	double power;
	double speed;
	double efficiency;
	double fConsumption;
	double eConsumption;
public:
	Engine(double power, double speed, double efficiency, double fConsumption, double eConsumption):
		power{ power }, speed{ speed }, efficiency{ efficiency }, fConsumption{ fConsumption }, eConsumption{ eConsumption } {}
	//some Funcs;
	~Engine() {}
};
#endif // !ENGINE_H
