#include <iostream>
#include "Timer.h"
#include "Chapter2.h"

int main() {
	srand( time(NULL));
	Timer timer;
	timer.start();
	
	for (int i = 0; i < 1000; ++i) {
		if (i % 5 == 0) {
			std::cout << "Number: " << i << "\n";
		}
	}
	
	timer.stop();
}