#include "Runway.h"

using namespace std;

class Runway{
	
	private bool empty;

	//constructor
	Runway()	{
		empty = true;
	}

	//return if there is plane taking off
	public bool isEmpty()	{
		return empty;
	}

	//plane has entered runway, starting takeoff
	public void setNotEmpty()	{
		empty = false;
	}

	// plane has finished taking off
	public void setEmpty()	{
		empty = true;
	}

}

