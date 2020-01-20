#include <iostream>
#include <vector>
#include "Caine.h"
#include "CaineCuPete.h"
#include "CaineFaraPete.h"

int main()
{
	std::vector<Dog*> lista;

	lista.push_back(new Dog("nume 1"));
	lista.push_back(new CaineCuPete("nume 2", 5));
	lista.push_back(new CaineFaraPete("nume 3", "maro"));

	for(auto& dog : lista)
	{
		dog->afisare();
	}
}
