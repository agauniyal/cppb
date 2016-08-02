#include <iostream>
#include <string>
#include "dog.h"

Dog::Dog(std::string dogName)
{
	name = dogName;
	++age;
	std::cout << "A new dog is born with name: " << name << "\n";
	std::cout << "Current age: " << age << "\n";
}

void Dog::bark()
{
	std::cout << "Woof Woof!\n";
}
