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

	Diary(const Diary& diary) :
		gradesSize{ diary.gradesSize },
		gradesCount{ diary.gradesCount },
		grades{ new int[diary.gradesSize] }
		
	{
		for (int i{ 0 }; i < diary.gradesSize; ++i) {
			grades[i] = diary.grades[i];
		}
	}

	//coping_operator?

	void pushGrade(int grade);

	int getGradesCount();

	void renderGrades();

	~Diary();
};