#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

using std::cout; 
using std::endl;

int Main(){
	//random number info
	srand(time(nullptr));

	int numberA = 5;
	int* pointerToA = &numberA;

	cout << *pointerToA << endl;

	numberA = 74;

	cout << *pointerToA << endl;
	cout << numberA << endl;

	return 0;
}