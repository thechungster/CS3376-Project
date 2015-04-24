#include <stdlib.h>
#include <time.h>       /* time */
#include "BoolSource.h"

BoolSource::BoolSource(double prob)	{
	queueProb = prob;
}


// determines whether or not a plane will enter the landing queue given the probability
bool BoolSource::enterQueue() {
	srand(time(NULL));
	double random = (double(rand() % 101) / 100); // Get a double between 0 and 1

	if (queueProb <= random)	{
		return true;
	}

	return false;
}
