#pragma once
#include <string>
#include <list> 
#include "Curs.h"
#include <vector>

#ifndef STUDENT_H_
#define STUDENT_H_

class Student
{
	private:
		std::string nume;
		int an;
		std::list<Curs> cursuri;
		float medie;
		void generateMedie();

	public:
		Student();
		Student(std::string nume, int an);
		virtual ~Student();
		int getAn();
		std::string getNume();
		float getMedie();
		void setAn(int an);
		void setMedie(float medie);
		void addCurs(std::string nume, float nota);
		void addCursuri(std::list<Curs> cursuri);
		std::list<Curs> getCursuri();
		void afisare();
		bool operator>(const Student& other) const;

		bool static sortByName(const Student& a, const Student& b);


};

#endif


