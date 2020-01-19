// LAB3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include <list>
#include <vector>
#include <algorithm>

float RandomFloat(float a, float b);
std::list<Curs> generateCoursList();
void sortStudenti(std::vector<Student> studenti);



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

}

float RandomFloat(float a, float b) {
	float random = ((float)rand()) / (float)RAND_MAX;
	float diff = b - a;
	float r = random * diff;
	return a + r;
}

std::list<Curs> generateCoursList() {
	std::list<Curs> cursuri;
	

	for (auto i = 0; i < 10; i++) {
		auto curs = Curs("curs " + std::to_string(i), RandomFloat(1, 10));
		/*std::cout << curs.getNume();*/
		cursuri.push_back(curs);
	}

	return cursuri;
}

void sortStudenti(std::vector<Student> studenti) {
	//struct studentCompare
	//{
	//	bool operator()(Student const& a, Student const& b)
	//	{
	//		return a.getMedie() > b.getMedie();
	//	}
	//};

	
	std::sort(studenti.begin(), studenti.end(), Student::sortByName);

	std::cout << "ceva";
}
