#include "TakeoffQueue.h"
#include <stddef.h> // to define null

class Airplane;

TakeoffQueue::TakeoffQueue(){
	end = NULL;
	start = NULL;
}

void TakeoffQueue::enqueue(Airplane* plane){
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

Airplane* TakeoffQueue::dequeue()	{
	node *temp = new node;

	if (start == NULL)	{
		return temp->plane;///this is wrong
	}

	else{
		temp = start;
		start = start->next;

		return temp->plane;
	}

}

bool TakeoffQueue::isEmpty() {
	if (start == NULL) {
		return false;
	}
	else {
		return true;
	}
}