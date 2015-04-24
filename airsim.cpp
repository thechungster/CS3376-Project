#include <iostream>
#include "Airplane.h"
#include "BoolSource.h"
#include "Runway.h"
#include "StatKeeper.h"
#include "LandingQueue.h"
#include "TakeoffQueue.h"
#include <time.h>

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
	LandingQueue* landQueue = new LandingQueue();
	TakeoffQueue* takeoffQueue = new TakeoffQueue();
	BoolSource* landingBool = new BoolSource(atof(argv[2]));
	BoolSource* takeoffBool = new BoolSource(atof(argv[3]));
	StatKeeper* stats = new StatKeeper();
	int startTime = (int)argv[4];
	int endTime = (int)argv[5];
	int crashTime = (int)argv[6];
	srand(time(NULL));
	double randomFuel;

	//create forloop and run program
	for (int currentMinute = startTime; currentMinute > endTime; --currentMinute)	{
		if (landingBool->enterQueue)	{// check if plane should enter the landing queue
			randomFuel = (double)((rand() % 30) + 30); // get random number between 30 and 60
			Airplane* newPlane = new Airplane(randomFuel, currentMinute);
			landQueue->enqueue(newPlane);
			
		}

		if (takeoffBool->enterQueue)	{// check if plane should enter takeoff queue
			randomFuel = (double)((rand() % 30) + 30); // get random number between 30 and 60
			Airplane* newPlane = new Airplane(randomFuel, currentMinute);
			takeoffQueue->enqueue(newPlane);
		}

		//check if runway is empty
		if (runway->isEmpty())	{
			Airplane landingPlane = landQueue->dequeue; // dequeue a landing queue plane and check if crashed
			if ((landingPlane.getTimeQueued + landingPlane.getFuel) <= currentMinute){ // if plane has not crashed
				stats->addTotalLandingTime(currentMinute - landingPlane.getTimeQueued);
			}
			else{
				stats->addPlanesCrashed;
			}
		}
		
		runway->incrementMinute;
	}

	
}
