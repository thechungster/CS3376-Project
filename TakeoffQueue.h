#ifndef TAKEOFFQUEUE_H // guards
#define TAKEOFFQUEUE_H
#include "Airplane.h"
#include "LandingQueue.h"


class TakeoffQueue {

private:
	node *end;
	node *start;
	double queueProb;

public:
	TakeoffQueue();
	void enqueue(Airplane* plane);
	Airplane* dequeue();
	bool enterQueue();
	bool isEmpty();
};
#endif
