#ifndef TAKEOFFQUEUE_H // guards
#define TAKEOFFQUEUE_H
#include "Airplane.h"


struct node{
	Airplane* plane;
	
	struct node *next;
};
class TakeoffQueue {

private:
	node *end;
	node *start;
	double queueProb;

public:
	TakeoffQueue();
	void enqueue(Airplane* plane);
	Airplane dequeue();
	bool enterQueue();
};
#endif
