#include "Curs.h"

Curs::Curs(std::string nume, float nota) :
	nume(nume), nota(nota) {
}

Curs::~Curs(){}

std::string Curs::getNume() {
	return this->nume;
}

float Curs::getNota() {
	return this->nota;
}

Curs& Curs::operator=(Curs arg) noexcept
{
	std::swap(*this, arg);
	return *this;
}

