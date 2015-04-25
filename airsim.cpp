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
	clock_t beginTime, endingTime; // instantiate clocks that keep track of program run time;
	beginTime = clock();
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
	bool foundLanding = false;
	int startTime = (int)argv[4];
	int endTime = (int)argv[5];
	int crashTime = (int)argv[6];
	int currentMinute;
	srand(time(NULL));
	double randomFuel;

	//create forloop and run program
	for (currentMinute = startTime; currentMinute > endTime; --currentMinute)	{
		foundLanding = false;
		if (landingBool->enterQueue())	{// check if plane should enter the landing queue
			randomFuel = ((rand() % 30) + 30); // get random number between 30 and 60
			Airplane* newPlane = new Airplane(randomFuel, currentMinute);
			landQueue->enqueue(newPlane);
		}// end if

		if (takeoffBool->enterQueue())	{// check if plane should enter takeoff queue
			randomFuel = ((rand() % 30) + 30); // get random number between 30 and 60
			Airplane* newPlane = new Airplane(randomFuel, currentMinute);
			takeoffQueue->enqueue(newPlane);
		}// end if

		//check if runway is empty
		if (runway->isEmpty())	{
			
			while (!landQueue->isEmpty() && !foundLanding)	{ // there are things in landing queue and nothing is landing
				Airplane* landingPlane = landQueue->dequeue(); // dequeue a landing queue plane and check if crashed 
				if ((landingPlane->getTimeQueued() - landingPlane->getFuel()) < currentMinute){ // if plane has not crashed
					stats->addTotalLandingTime((currentMinute - landingPlane->getTimeQueued())); // tell stat keeper how long its been in queue
					stats->addPlanesLanded(); // tell statkeeper plane has landed
					foundLanding = true; // to quit while loop
				}// end if
				else{
					stats->addPlanesCrashed();
				}// end else
			}// end while

			//check if landqueue is empty, takeoffqueue is empty and if plane is landing then add a takeoff queue
			if (landQueue->isEmpty() && !foundLanding && !takeoffQueue->isEmpty())	{
				Airplane* takeoffPlane = takeoffQueue->dequeue(); // get next takeoff plane in queue
				stats->addTotalTakeoffTime(currentMinute - takeoffPlane->getTimeQueued()); // tell statkeeper how long its been in queue
				stats->addPlanesTakenoff();
			}
		}// end if


		runway->incrementMinute();
	}//end for

	// check for crashed planes
	while (!landQueue->isEmpty())	{//while there are still planes in queue
		Airplane* nextPlane = landQueue->dequeue();
		if ((nextPlane->getTimeQueued() - nextPlane->getFuel()) < currentMinute) {// if plane has crashed
			stats->addPlanesCrashed();
		}
	}
	//check for crashed planes and then print output
	endingTime = clock();

	cout << "The total simulation time was " << (endingTime - beginTime) << " seconds" << endl;
	cout << "There were " << stats->getPlanesTakenoff() <<  " that took off" << endl;
	cout << "There were " << stats->getPlanesLanded() << " that landed" << endl;
	cout << "There were " << stats->getPlanesCrashed() << "that crashed" << endl;
	cout << "The planes waited in the takeoff queue for an average of " << (stats->getTakeoffTimeTotal() / stats->getPlanesTakenoff()) << " seconds" << endl;
	cout << "The planes waited in the landing queue for an average of " << (stats->getLandingTimeTotal() / stats->getPlanesLanded()) << " seconds" << endl;
	
}
