#include "Airplane.h"

Airplane::Airplane()	{
	fuel = 0;
	timeQueued = 0;
}

Airplane::Airplane(int fuel, int timeQueued) {
	//initialize  variables
	this->fuel = fuel;
	this->timeQueued = timeQueued;
}

int Airplane::getTimeQueued() {
	//returns time plane was added to queue
	return timeQueued;//timeQueued;
}
int Airplane::getFuel() {
	//areturns amount of fuel when plane was queued
	return fuel;//fuel;
}
