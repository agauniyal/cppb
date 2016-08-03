#include "dog.h"

Dog::Dog(std::string dogName)
{
	name = dogName;
	++age;
}

std::string Dog::getName()
{
	return name;
}

int Dog::getAge()
{
	return age;
}

std::string Dog::bark()
{
	return "Woof Woof!!";
}

