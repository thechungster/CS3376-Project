#include "StatKeeper.h"

using namespace std;

class StatKeeper	{
	private:
	 int planesCrashed;
	 int planesLanded;
	 int totalLandingTime;
	 int totalTakeoffTime;

	//getter method to how many planes have landed
	public:
	 int getPlanesLanded()	{
		return planesLanded;
	}

	//getter method to how many planes have crashed/
	 int getPlanesCrashed()	{
		return planesCrashed;
	}

	// increments 1 to the amount of planes that have landed
	 void addPlanesLanded()	{
		planesCrashed++;
		return;
	}

	// increments 1 to the amount of planes that have crashed
	 void addPlanesCrashed()	{
		planesLanded++;
		return;
	}

	// add to the amount of time a plane has been in the air, wanting ot land
	 void addTotalLandingTime(Airplane myPlane)	{
		return;
	}

	// add to the amount of time a plane has been on the runway, wanting to take off
	 void addTotalTakeoffTime(Airplane myPlane)	{
		return;
	}

}

