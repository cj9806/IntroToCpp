#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() 
{
	//use the time as a seed for the random number
	srand(time(nullptr));
	//generate the number
	string random_int = to_string(rand() % 11 + 0);
	//create guess varible
	string guess = "";
	cout << "I'm thinking of a number between 1 and 10,try and guess" << endl;
	while (guess != random_int) {
		cin >> guess;
		if (guess == random_int) {
			cout << "congatulations you guessed correct" << endl;
		}
		else if (guess == "m" || guess == "M") {
			cout << "yes" << endl;
			cout << "The number I was thinking of was the letter 'M'" << endl;
			break;
		}
		else cout << "you guessed incorrectly" << endl;
	}
	return 0;
}