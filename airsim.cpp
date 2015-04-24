#include <iostream>
#include "Airplane.h"
#include "BoolSource.h"
#include "Runway.h"
#include "StatKeeper.h"

using namespace std;

int main(int argc, char **argv)	{
	if (argc != 7)	{ // if there are not 7 arguments, exit
		cout << "wrong number of arguments, exiting now" << endl;
		exit(1);
	}

	else if (atof(argv[2]) > 1 || atof(argv[3]) > 1)	{ // make sure probability is in percentage
		cout << "probability should be between 0 and 1" << endl;
		exit(1);
	}
	//instantiate all the variables/objects needed
	Runway* runway = new Runway((int)argv[0], (int)argv[1]);	
	BoolSource* landingBool = new BoolSource(atof(argv[2]));
	BoolSource* takeoffBool = new BoolSource(atof(argv[3]));
	int startTime = (int)argv[4];
	int endTime = (int)argv[5];
	int crashTime = (int)argv[6];

	//create forloop and run program
	for (int currentMinute = startTime; currentMinute > endTime; --currentMinute)	{
		if (landingBool->enterQueue)	{// check if plane should enter the landing queue
			Airplane newPlane = new Airplane();
		}

		if (takeoffBool->enterQueue)	{// check if plane should enter takeoff queue

		}
	}

	
}
