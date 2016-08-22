#include <iostream>
#include <vector>
#include "Chapter2.h"

void PrintVector(std::vector<int>& v, std::string msg) {
	std::cout << msg << std::flush;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << ' ';
	}   std::cout << std::endl;
}

void InsertionSort(std::vector<int>& v) {
	PrintVector(v, "Before sorting: ");	
	
	for (int i = 1; i < v.size(); ++i) {
		// Set the position of array in question's value as the 'key'
		int key = v[i]; 
		
		int j = i - 1;
		/*!
		 * Push up each value that is larger than the key to the right.
		 */
		while (j >= 0 && v[j] > key) {
			v[j + 1] = v[j];
			--j;
		}
		v[j + 1] = key;
	}
	
	PrintVector(v, "After sorting: ");
}
