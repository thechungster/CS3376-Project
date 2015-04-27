#include "StatKeeper.h"
#include "Airplane.h"


	StatKeeper::StatKeeper()	{
		planesLanded = 0;
		planesTakenoff = 0;
		planesCrashed = 0;
		totalLandingTime = 0;
		totalTakeoffTime = 0;
	}

	//getter method to how many planes have landed
	
	 double StatKeeper::getPlanesLanded()	{
		return planesLanded;
	}

	//getter method to how many planes have crashed/
	 int StatKeeper::getPlanesCrashed()	{
		return planesCrashed;
	}

	 double StatKeeper::getPlanesTakenoff()	{
		 return planesTakenoff;
	 }

	 double StatKeeper::getTakeoffTimeTotal()	{
		 return totalTakeoffTime;
	 }

	 double StatKeeper::getLandingTimeTotal()	{
		 return totalLandingTime;
	 }

	// increments 1 to the amount of planes that have landed
	 void StatKeeper::addPlanesLanded()	{
		planesLanded++;
		return;
	}

	// increments 1 to the amount of planes that have crashed
	 void StatKeeper::addPlanesCrashed()	{
		planesCrashed++;
		return;
	}

	// add to the amount of time a plane has been in the air, wanting ot land
	 void StatKeeper::addTotalLandingTime(int time)	{
		 totalLandingTime += time;
	}

	// add to the amount of time a plane has been on the runway, wanting to take off
	 void StatKeeper::addTotalTakeoffTime(int time)	{
		 totalTakeoffTime += time;
	}

	 void StatKeeper::addPlanesTakenoff()	{
		 planesTakenoff++;
	 }



