#pragma once
#include <string>

#ifndef CURS_H_
#define CURS_H_

class Curs
{
	private:
		const std::string nume;
		const float nota;
	public:
		Curs(std::string nume, float nota);
		~Curs();
		std::string getNume();
		float getNota();
		Curs& operator=(Curs arg) noexcept;
};

#endif


