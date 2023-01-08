#include "Student.h"


void Student::setGroupTitle(std::string groupTitle)
{
	this->groupTitle = groupTitle;
}

void Student::pushGrade(int grade)
{
	diary.pushGrade(grade);
}


void Student::render()
{
	std::cout << "id: " << this->id << " name: " << this->name << " age: " << this->age;
	std::cout << " gender: " << (char)this->gender << '\n';
	std::cout << "group: " << this->groupTitle << '\n';

	std::cout << "GRADES: ";
	if (this->diary.getGradesCount() == 0) {
		std::cout << "grades are empty...";
	}
	else {
		this->diary.renderGrades();
	}
		

	std::cout << "\n============\n\n";
}

