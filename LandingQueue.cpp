#include "LandingQueue.h"
#include <stddef.h> // to define null

class Airplane;

LandingQueue::LandingQueue(){
	end = NULL;
	start = NULL;
}

void LandingQueue::enqueue(Airplane* plane){
	node *temp = new node;

	temp->plane = plane;
	temp->next = NULL;

	if (start == NULL)	{
		start = end = temp;
		end->next = NULL;
	}

	else{
		end->next = temp;
		end = temp;
		end->next = NULL;
	}

}

Airplane* LandingQueue::dequeue()	{
	node *temp = new node;

	if (start == NULL)	{
		return NULL;///this is wrong
	}

	else{
		temp = start;
		start = start->next;

		return temp->plane;
	}
}

bool LandingQueue::isEmpty() {
	if (start == NULL) {
		return false;
	}
	else {
		return true;
	}
}