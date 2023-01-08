#pragma once
#include <iostream>
#include "Diary.h"

class Student
{
private:
	int id;
	std::string name{ "no_name" };
	short age{ 0 };
	Gender gender{ Gender::MALE };

	Diary diary;

public:
	Student(std::string name, short age, Gender gender) :
		id{ ++MAX_ID },
		name{ name },
		age{ age },
		gender{ gender }
	{}

	int getID();

	std::string getName();

	void pushGrade(int grade);

	void render();

	//~Student();
	
};

