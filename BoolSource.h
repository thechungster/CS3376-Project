#ifndef BOOLSOURCE_H // guards
#define BOOLSOURCE_H
class BoolSource {

private:
	double queueProb;

public:
	BoolSource(double prob);
	bool enterQueue();
};
#endif
