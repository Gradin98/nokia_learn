#include "Caine.h"
#include <iostream>

Dog::Dog(std::string name) : name(name)
{
	
}

Dog::~Dog() {}

std::string Dog::getName()
{
	return this->name;
}

void Dog::afisare()
{
	std::cout << "nume: " << this->name;
}


