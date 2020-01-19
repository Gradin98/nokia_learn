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

Student::~Student() = default;

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

void Student::addCursuri(std::vector<Curs> cursuri) {
	this->cursuri = cursuri;
	this->generateMedie();
}

std::vector<Curs> Student::getCursuri() {
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

void* Student::operator new(size_t size)
{
	void * p = malloc(size); 
	return p;
}

bool Student::sortByMedie(const Student& a, const Student& b)
{
	return a.medie > b.medie;
}














