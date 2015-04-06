#include "Runway.h"

using namespace std;

//constructor
Runway::Runway()	{
	empty = true;
}

//return if there is plane taking off

 bool Runway::isEmpty()	{
	return empty;
}

//plane has entered runway, starting takeoff
 void Runway::setNotEmpty()	{
	empty = false;
}

// plane has finished taking off
 void Runway::setEmpty()	{
	empty = true;
}


