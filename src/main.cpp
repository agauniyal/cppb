#include "dog.h"
#include <iostream>

int main()
{
	std::cout << "Let's create a new Dog\n";
	Dog peter("peter");
	std::cout << peter.bark();
	return 0;
}

