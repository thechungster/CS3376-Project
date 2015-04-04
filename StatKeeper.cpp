
using namespace std;

class StatKeeper()	{
	private int planesCrashed;
	private int planesLanded;

	public int getPlanesLanded()	{
		return planesLanded;
	}

	public int getPlanesCrashed()	{
		return planesCrashed;
	}

	public void addPlanesLanded()	{
		planesCrashed++;
		return;
	}

	public void addPlanesCrashed()	{
		planesLanded++;
		return;
	}
}

