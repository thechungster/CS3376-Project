#ifndef Airplane
#define Airplane
class Airplane {
	private:
			int fuel;
			int timeQueued;
	public:
			Airplane(int x, int y);
			int getTimeQueued();
			int getFuel();
};
#endif
