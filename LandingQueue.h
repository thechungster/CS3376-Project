#ifndef LANDINGQUEUE_H // guards
#define LANDINGQUEUE_H
#include "Airplane.h"
struct node{
	Airplane* plane;

	struct node *next;
};
class LandingQueue {

private:
	node *end;
	node *start;
	double queueProb;

public:
	LandingQueue();
	void enqueue(Airplane* plane);
	Airplane dequeue();
	bool enterQueue();
};
#endif
