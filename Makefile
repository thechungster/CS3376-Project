CC = g++

all : Airplane airsim BoolSource Runway StatKeeper LandingQueue TakeoffQueue

Airplane : Airplane.h Airplane.cpp
	$(CC) -c Airplane.cpp

BoolSource : BoolSource.h BoolSource.cpp
	$(CC) -c BoolSource.cpp

Runway : Runway.h Runway.cpp
	$(CC) -c Runway.cpp

StatKeeper : StatKeeper.h StatKeeper.cpp
	$(CC) -c StatKeeper.cpp

LandingQueue : LandingQueue.h LandingQueue.cpp
	$(CC) -c LandingQueue.cpp

TakeoffQueue : TakeoffQueue.h TakeoffQueue.cpp
	$(CC) -c TakeoffQueue.cpp

airsim : airsim.cpp
	$(CC) -c airsim.cpp
	$(CC) -o $@ airsim.cpp

clean : 
	rm Airplane.o airsim.o airsim BoolSource.o Runway.o StatKeeper.o 

