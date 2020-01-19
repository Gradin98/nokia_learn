#include "Student.h"
#include <iostream>
#include <algorithm>
#include <vector>

Student::Student() {}

Student::Student(std::string nume, int an) {
	this->an = an;
	this->nume = nume;
	this->medie = 0.00;
}

Student::~Student() {}

int Student::getAn()
{
	return this->an;
}

std::string Student::getNume() {
	return this->nume;
}

float Student::getMedie() {
	return this->medie;
}

void Student::setAn(int an) {
	this->an = an;
}

void Student::setMedie(float medie) {
	this->medie = medie;
}

void Student::addCurs(std::string nume, float nota) {
	auto curs = Curs(nume, nota);
	this->cursuri.push_back(curs);
	this->generateMedie();
}

void Student::addCursuri(std::list<Curs> cursuri) {
	this->cursuri = cursuri;
	this->generateMedie();
}

std::list<Curs> Student::getCursuri() {
	return this->cursuri;
}

void Student::afisare() {
	std::cout << "Student: " << this->nume << "   an: " << this->an << std::endl;
	std::cout << "\tMedie:" << this->medie << std::endl;
	std::cout << "\tCursuri: " << std::endl;

	for (auto curs : this->cursuri) {
		std::cout << "\t- " << curs.getNume()
			<< " : " << curs.getNota() << std::endl;
	}
}

void Student::generateMedie() {
	float sum = 0;

	for (auto curs : this->cursuri) {
		sum += curs.getNota();
	}

	this->medie = sum / this->cursuri.size();
}

bool Student::operator> (const Student& other) const {
	if (medie == other.medie) {
		return nume < other.nume;
	}
	return medie < other.medie;
}

bool Student::sortByName(const Student& a, const Student& b)
{
	return a.medie < b.medie;
}











