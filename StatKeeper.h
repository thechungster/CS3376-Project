#ifndef STATKEEPER_H
#define STATKEEPER_H
#include "Airplane.h"

class StatKeeper{
private:
	 int planesCrashed;
	 int planesLanded;
	 int totalLandingTime;
	 int totalTakeoffTime;

 public:
	int getPlanesLanded();
	int getPlanesCrashed();
	void addPlanesLanded();
	void addPlanesCrashed();
	void addTotalLandingTime(int time);
	void addTotalTakeoffTime(int time);
};
#endif
