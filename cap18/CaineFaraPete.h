#pragma once
#include "Caine.h"

class CaineFaraPete :
	public Dog
{
	private:
		const std::string culoare;
	public:
		CaineFaraPete(std::string nume, std::string culoare) : culoare(culoare), Dog(nume) {}
		~CaineFaraPete() = default;
		std::string getCuloare();
		void afisare() override;
};

