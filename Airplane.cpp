#include "Airplane.h"

Airplane::Airplane()	{
	fuel = 0;
	timeQueued = 0;
}

Airplane::Airplane(int fue, int timeQueue) {
	//initialize  variables
	this->fuel = fue;
	this-> timeQueued= timeQueue;
	//	this->timeQueued = timeQueued;
}

int Airplane::getTimeQueued() {
	//returns time plane was added to queue
	return this->timeQueued;//timeQueued;
}
int Airplane::getFuel() {
	//areturns amount of fuel when plane was queued
	return fuel;//fuel;
}
