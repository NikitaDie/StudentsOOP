#include "Diary.h"

void Diary::pushGrade(int grade) { //check
	if (gradesCount == gradesSize) {
		gradesSize *= 2;
		int* tmp_grades{ new int[gradesSize] };

		for (int i{ 0 }; i < gradesCount; ++i) {
			tmp_grades[i] = grades[i];
		}

		delete[] grades;

		tmp_grades[gradesCount] = grade;
		++gradesCount;

		grades = tmp_grades;

	}
	else {
		grades[gradesCount] = grade;
		++gradesCount;
	}
}

int Diary::getGradesCount()
{
	return this->gradesCount;
}

void Diary::renderGrades() {
	for (int i{ 0 }; i < gradesCount; ++i) {
		std::cout << grades[i] <<" ";
	}
}

Diary::~Diary() {
	if (this->grades != nullptr)
		delete[] this->grades;
}
