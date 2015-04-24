#ifndef RUNWAY_H
#define RUNWAY_H
#include "Airplane.h"

class Runway{
private:
	bool empty;
	int landTime;
	int takeoffTime;
	int currentMinute;

	public:
		Runway(int land, int takeoff);
		bool isEmpty(); // returns true if there are no planes landing or taking off
		void startLanding(Airplane Plane);
		void startTakeoff(Airplane Plane);
		void incrementMinute();

};


#endif
