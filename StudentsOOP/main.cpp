#include <iostream>
#include "Group.h"
#include "Student.h"



int main()
{

	Group p15 ("p15");

	p15.addStudent({ "Vasia", 23, Gender::MALE });
	p15.addStudent({ "Kamila", 24, Gender::FEMALE });

	for (int i{ 0 }; i < 21; ++i) {
		p15.getStudentByID(1).pushGrade(i);
	}

	p15.getStudentByID(0).render();
	p15.getStudentByName("Kamila").render();

	return 0;
}