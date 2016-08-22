#include <iostream>
#include <string>
#include <vector>
#include "Timer.h"
#include "Chapter2.h"
typedef std::vector<int> int_vec; 

void RandInit(int_vec& v) {
	for (int i = 0; i < v.size(); ++i) {
		v[i] = rand() % v.size() + 1;
	}
}

bool getInput(size_t& n) {
	std::cout << "Please input the size of the vector > " << std::flush;
	std::cin >> n;
	return n > 0 ? true : false;
}

int main() {
	srand( time(NULL)); // RANDOM SEEEEEEEEEEEEED
	Timer timer;
	size_t size;
	while (getInput(size)) {
		int_vec vector(size); // Declares a vector of integers
	
		RandInit(vector);
	
		timer.start();
		InsertionSort(vector);
		timer.stop("Insertion Sort");
	}
}
