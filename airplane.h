#ifndef AIRPLANE_H
#define AIRPLANE_H
class Airplane {
	private:
			int fuel;
			int timeQueued;
	public:
			Airplane(int fuel);
			int getTimeQueued();
			int getFuel();
};
#endif
