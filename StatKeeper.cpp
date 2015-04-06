#include "StatKeeper.h"

using namespace std;

	//getter method to how many planes have landed
	
	 int StatKeeper::getPlanesLanded()	{
		return planesLanded;
	}

	//getter method to how many planes have crashed/
	 int StatKeeper::getPlanesCrashed()	{
		return planesCrashed;
	}

	// increments 1 to the amount of planes that have landed
	 void StatKeeper::addPlanesLanded()	{
		planesCrashed++;
		return;
	}

	// increments 1 to the amount of planes that have crashed
	 void StatKeeper::addPlanesCrashed()	{
		planesLanded++;
		return;
	}

	// add to the amount of time a plane has been in the air, wanting ot land
	 void StatKeeper::addTotalLandingTime(Airplane myPlane)	{
		return;
	}

	// add to the amount of time a plane has been on the runway, wanting to take off
	 void StatKeeper::addTotalTakeoffTime(Airplane myPlane)	{
		return;
	}



