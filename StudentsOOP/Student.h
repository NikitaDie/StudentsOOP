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
	std::string groupTitle{ "no_group_title" };

	Diary diary;

public:
	// TODO: group title in ctor???
	Student(std::string name, short age, Gender gender) :
		id{ ++MAX_ID },
		name{ name },
		age{ age },
		gender{ gender }
	{}

	void setGroupTitle(std::string groupTitle);

	void pushGrade(int grade);

	void render();

	//~Student();
	
};

