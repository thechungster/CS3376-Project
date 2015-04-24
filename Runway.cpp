#include "Runway.h"

using namespace std;


//constructor
Runway::Runway(int land, int takeoff)	{
	landTime = land;
	takeoffTime = takeoff;
	empty = true;
	currentMinute = 0;
}

//return if there is plane taking off
 bool Runway::isEmpty()	{
	return empty;
}

//plane has entered runway, starting takeoff
 void Runway::startLanding(Airplane plane)	{
	empty = false;
}

// plane has finished taking off
 void Runway::startTakeoff(Airplane plane)	{
	empty = false;
}

 void Runway::incrementMinute()	{
	 currentMinute++;
 }


