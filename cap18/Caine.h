#pragma once
#include <string>

class Dog
{
	protected:
		const std::string name;
	public:
		Dog(std::string name);
		virtual ~Dog();
		std::string getName();
		virtual void afisare();
};

