#include <iostream>
using namespace std;

int main() {
	int* array = new int[5];
	for (int i = 0; i < 5; ++i) {
		array[i] = 5 - i;
	}
	
	for (int i = 0; i < 5; ++i) {
		cout << "Array[" << i << "] is " << array[i] << endl;
	}
	
	delete [] array;
}