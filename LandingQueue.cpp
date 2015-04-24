#include "LandingQueue.h"
#include "Airplane.h"
#include <stddef.h> // to define null

LandingQueue::LandingQueue(){
	end = NULL;
	start = NULL;
}

void LandingQueue::enqueue(Airplane plane){
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

Airplane LandingQueue::dequeue()	{
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