#include "Airplane.h"
using namespace std;

class Airplane {

	private:
	 int fuel;
	 int timeQueued;

	public:
	 Airplane(int x, int y) {
		//initialize variables
	}

	 int getTimeQueued() {
		//returns time plane was added to queue
		return timeQueued;
	}

	 int getFuel() {
		//returns amount of fuel when plane was queued
		return fuel;
	}

}