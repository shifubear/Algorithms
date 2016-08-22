#include "Timer.h"
#include <iostream>

Timer::Timer() {
	mStartTime = clock();
}

void Timer::start() {
	mStartTime = clock();
}

void Timer::stop() {
	double duration = ( std::clock() - mStartTime ) / (double) CLOCKS_PER_SEC;
	std::cout << "Process completed in " << duration << " seconds.\n";
}

void Timer::stop(std::string msg) {
	double duration = ( std::clock() - mStartTime ) / (double) CLOCKS_PER_SEC;
	std::cout << msg << " completed in " << duration << " seconds.\n";
}