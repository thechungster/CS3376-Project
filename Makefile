OBJS = Airplane.o airsim.o BoolSource.o LandingQueue.o Runway.o StatKeeper.o TakeoffQueue.o
CC = g++

all: $(OBJS)
	$(CC) -o Simulation $(OBJS)

Airplane.o: Airplane.cpp Airplane.h
	$(CC) -c Airplane.cpp

airsim.o: airsim.cpp Airplane.h BoolSource.h Runway.h StatKeeper.h LandingQueue.h TakeoffQueue.h
	$(CC) -c airsim.cpp

BoolSource.o: BoolSource.cpp BoolSource.h
	$(CC) -c BoolSource.cpp

LandingQueue.o: LandingQueue.cpp LandingQueue.h Airplane.h
	$(CC) -c LandingQueue.cpp

Runway.o: Runway.cpp Runway.h Airplane.h
	$(CC) -c Runway.cpp

StatKeeper.o: StatKeeper.cpp Airplane.h
	$(CC) -c StatKeeper.cpp

TakeoffQueue.o: TakeoffQueue.cpp Airplane.h LandingQueue.h
	$(CC) -c TakeoffQueue.cpp
	
clean:
	rm -f $(OBJS)
