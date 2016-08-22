# -*- Makefile -*-

Main: build/main.o build/Timer.o
	g++ build/main.o build/Timer.o -o Main 
	mv Main bin/
	
build/main.o: src/main.cpp src/Timer.h
	g++ -c src/main.cpp
	mv *.o build/
	
build/Timer.o: src/Timer.cpp src/Timer.h
	g++ -c src/Timer.cpp
	mv *.o build/
