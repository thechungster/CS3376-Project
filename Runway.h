#ifndef RUNWAY_H
#define RUNWAY_H

class Runway{
	bool empty;
	int landTime;
	int takeoffTime;
	int currentMinute;

	public:
		Runway(int land, int takeoff);
		bool isEmpty(); // returns true if there are no planes landing or taking off
		void setNotEmpty();
		void setEmpty();
		void incrementMinute();

};


#endif
