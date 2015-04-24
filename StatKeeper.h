#ifndef STATKEEPER_H
#define STATKEEPER_H
#include "Airplane.h"

class StatKeeper{
private:
	 int planesCrashed;
	 double planesLanded;
	 double planesTakenoff;
	 double totalLandingTime;
	 double totalTakeoffTime;

 public:
	 StatKeeper();
	double getPlanesLanded();
	int getPlanesCrashed();
	double getPlanesTakenoff();
	double getTakeoffTimeTotal();
	double getLandingTimeTotal();
	void addPlanesTakenoff();
	void addPlanesLanded();
	void addPlanesCrashed();
	void addTotalLandingTime(int time);
	void addTotalTakeoffTime(int time);
};
#endif
