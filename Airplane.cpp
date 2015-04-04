#include "Airplane.h"
using namespace std;

class Airplane {

	private int fuel;
	private int timeQueued;

	public Airplane(int x, int y) {
		//initialize variables
	}

	public int getTimeQueued() {
		//returns time plane was added to queue
		return timeQueued;
	}

	public int getFuel() {
		//returns amount of fuel when plane was queued
		return fuel;
	}

}