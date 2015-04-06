CC = g++

all : Airplane airsim BoolSource Runway StatKeeper

Airplane : airplane.h Airplane.cpp
	$(CC) -c Airplane.cpp

BoolSource : BoolSource.h BoolSource.cpp
	$(CC) -c BoolSource.cpp

Runway : Runway.h Runway.cpp
	$(CC) -c Runway.cpp

StatKeeper : StatKeeper.h StatKeeper.cpp
	$(CC) -c StatKeeper.cpp

airsim : airsim.cpp
	$(CC) -c airsim.cpp

clean : 
	rm Airplane airsim BoolSource Runway StatKeeper 

