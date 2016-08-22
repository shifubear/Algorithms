# -*- Makefile -*-

Main: build/main.o build/Timer.o build/Chapter2.o
	g++ build/main.o build/Timer.o build/Chapter2.o -o Main 
	mv Main bin/
	
build/main.o: src/main.cpp src/Timer.h src/Chapter2.h
	g++ -c src/main.cpp
	mv *.o build/
	
build/Timer.o: src/Timer.cpp src/Timer.h
	g++ -c src/Timer.cpp
	mv *.o build/

build/Chapter2.o: src/Chapter2.cpp src/Chapter2.h
	g++ -c src/Chapter2.cpp
	mv *.o build/