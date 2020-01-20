#include "CaineCuPete.h"
#include <iostream>

int CaineCuPete::getNrPete()
{
	return this->nrPete;
}

void CaineCuPete::afisare()
{
	std::cout << "nume: " << this->name << std::endl;
	std::cout << "nr de pete: " << this->nrPete << std::endl;
}