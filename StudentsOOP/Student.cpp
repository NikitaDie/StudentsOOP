#include "Student.h"

int Student::getID() {
	return this->id;
}

std::string Student::getName()
{
	return this->name;
}

void Student::pushGrade(int grade) {
	diary.pushGrade(grade);
}

void Student::render() {

	std::cout << "id: " << this->id << " name: " << this->name << " age: " << this->age;
	std::cout << " gender: " << (char)this->gender << '\n';

	std::cout << "GRADES: ";
	if (this->diary.getGradesCount() == 0) {
		std::cout << "grades are empty...";
	}
	else {
		this->diary.renderGrades();
	}
		

	std::cout << "\n============\n\n";
}

