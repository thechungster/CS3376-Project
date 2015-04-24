#include "Runway.h"

using namespace std;


//constructor
Runway::Runway(int land, int takeoff)	{
	landTime = land;
	takeoffTime = takeoff;
	emptyAt = 0;
	empty = true;
	currentMinute = 0;
}

//return if there is plane taking off
 bool Runway::isEmpty()	{
	return empty;
}

//plane has entered runway, starting landing
 void Runway::startLanding()	{
	 emptyAt = currentMinute += landTime;
}

// start a plane takeoff
 void Runway::startTakeoff()	{
	 emptyAt = currentMinute += takeoffTime;
}

 //increment current minute and check if runway should be empty
 void Runway::incrementMinute()	{
	 currentMinute++;
	 if (emptyAt == currentMinute)	{
		 empty = true;
	 }
 }


