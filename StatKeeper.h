#ifndef StatKeeper
#define StatKeeper
 int planesCrashed;
 int planesLanded;
 int totalLandingTime;
 int totalTakeoffTime;

 public:
	int getPlanesLanded();
	int getPlanesCrashed();
	void addPlanesLanded();
	void addPlanesCrashed();
	void addTotalLandingTime(Airplane  myPlane);
	void addTotalTakeoffTime(Airplane myPlane);
#endif