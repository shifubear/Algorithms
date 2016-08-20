Main: main.o Timer.o
	g++ -o Main main.o Timer.o
	
main.o: main.cpp
	g++ -c main.cpp
	
Timer.o: Timer.cpp Timer.h
	g++ -c Timer.cpp