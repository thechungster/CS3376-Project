#include "Airplane.h"

Airplane::Airplane(int fuel = 60) {
	//initialize  variables
	this->fuel = fuel;
	timeQueued = 0;
}

int Airplane::getTimeQueued() {
	//returns time plane was added to queue
	return timeQueued;//timeQueued;
}
int Airplane::getFuel() {
	//areturns amount of fuel when plane was queued
	return fuel;//fuel;
}
