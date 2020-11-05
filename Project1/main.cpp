#include <cstdlib>
#include <iostream>
#include <ctime>

int main()
{
	int age = 0;

	std::cout << "Samurai" <<45<< std::endl;

	printf("hello%d\n", 25);

	std::cout << "Howold are you" << std::endl;
	std::cin >> age;
	if (age >= 13) {
		std::cout << "welcome to the website" << std::endl;
	}
	else {
		std::cout << "no babies allowed" << std::endl;
	}
	return 0;
}