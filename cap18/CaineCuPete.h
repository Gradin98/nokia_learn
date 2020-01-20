#pragma once
#include "Caine.h"
class CaineCuPete :
	public Dog
{
	private:
		const int nrPete;
	public:
		CaineCuPete(std::string name, int nrPete) : nrPete(nrPete), Dog(name) {}
		~CaineCuPete() = default;
		int getNrPete();
		void afisare() override;
};

