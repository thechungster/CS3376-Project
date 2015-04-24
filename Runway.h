#ifndef RUNWAY_H
#define RUNWAY_H

class Runway{
	bool empty;
	int currentMinute;

	public:
		Runway();
		bool isEmpty();
		void setNotEmpty();
		void setEmpty();
		void incrementMinute();

};


#endif
