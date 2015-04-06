CC = g++

all : Airplane airsim BoolSource Runway StatKeeper

Airplane : Airplane.h Airplane.cpp
	$(CC) -c Airplane.cpp

BoolSource : BoolSource.h BoolSource.cpp
	$(CC) -c BoolSource.cpp

Runway : Runway.h Runway.cpp
	$(CC) -c Runway.cpp

StatKeeper : StatKeeper.h StatKeeper.cpp
	$(CC) -c StatKeeper.cpp

airsim : airsim.cpp
	$(CC) -c airsim.cpp
	$(CC) -o $@ airsim.cpp

clean : 
	rm Airplane.o airsim.o airsim BoolSource.o Runway.o StatKeeper.o 

