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
		std::vector<Curs> cursuri;
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
		void addCursuri(std::vector<Curs> cursuri);
		std::vector<Curs> getCursuri();
		void afisare();
		bool operator>(const Student& other) const;
		//Student& operator=(Student& arg) noexcept;
		void* operator new(size_t size);
		bool static sortByMedie(const Student& a, const Student& b);


};

#endif


