#pragma once
#include <iostream>
#include "common.h"

class Diary
{
private:
	int gradesSize{ INIT_GRADES_COUNT };
	int gradesCount{ 0 };
	int* grades{ nullptr };

public:
	Diary() :
		grades{ new int[INIT_GRADES_COUNT] }
	{}

	//coping_operator?

	void pushGrade(int grade);

	int getGradesCount();

	void renderGrades();

	~Diary();
};