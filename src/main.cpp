#include <iostream>
#include "dog.h"

int main()
{
	std::cout << "Let's create a new Dog\n";
	Dog peter("peter");
	peter.bark();
	return 0;
}
