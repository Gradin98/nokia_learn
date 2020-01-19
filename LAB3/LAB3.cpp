// LAB3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include <list>
#include <vector>
#include <algorithm>

float RandomFloat(float a, float b);
std::vector<Curs> generateCoursList();
void sortStudenti(std::vector<Student>& studenti);
void checkMedie(const std::vector<Student>& studenti);
void removeFromList(std::vector<Student>& studenti);


int main()
{
	std::vector<Student> studenti;
	auto student1 = Student("gigel marian", 3);
	student1.addCursuri(generateCoursList());
	auto student2 = Student("gigel marian2", 3);
	student2.addCursuri(generateCoursList());
	auto student3 = Student("gigel marian3", 3);
	student3.addCursuri(generateCoursList());
	auto student4 = Student("gigel marian4", 3);
	student4.addCursuri(generateCoursList());
	auto student5 = Student("gigel marian5", 3);
	student5.addCursuri(generateCoursList());


	studenti.push_back(student1);
	studenti.push_back(student2);
	studenti.push_back(student3);
	studenti.push_back(student4);
	studenti.push_back(student5);
	
	

	for (auto student : studenti) {
		student.afisare();
	}

	sortStudenti(studenti);

	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl;

	for (auto student : studenti) {
		student.afisare();
	}

	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl;
	checkMedie(studenti);
	
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl;

	removeFromList(studenti);
	
	for (auto student : studenti) {
		student.afisare();
	}
}

float RandomFloat(float a, float b) {
	float random = ((float)rand()) / (float)RAND_MAX;
	float diff = b - a;
	float r = random * diff;
	return a + r;
}

std::vector<Curs> generateCoursList() {
	std::vector<Curs> cursuri;
	

	for (auto i = 0; i < 10; i++) {
		auto curs = Curs("curs " + std::to_string(i), RandomFloat(1, 10));
		/*std::cout << curs.getNume();*/
		cursuri.push_back(curs);
	}

	return cursuri;
}

void sortStudenti(std::vector<Student>& studenti) {
	std::sort(studenti.begin(), studenti.end(), Student::sortByMedie);

	
}

void checkMedie(const std::vector<Student>& studenti) {
	for (auto student : studenti) {
		if (student.getMedie() > 8 && student.getAn() == 3) {
			student.afisare();
		}
	}
}

void removeFromList(std::vector<Student>& studenti) {

	auto i = std::begin(studenti);

	while (i != std::end(studenti)) {
		// Do some stuff
		if (i->getMedie() < 5)
			i = studenti.erase(i);
		else
			++i;
	}
}