#pragma once
#include <vector>
#include <string>
#include "Student.h"

class Group
{
private:
	std::string groupTitle{ "no_group_title" };
	std::vector<Student> students;
public:
	Group(std::string title);

	std::string getTitle();

	void addStudent(Student student);

	Student& getStudentByID(int id);

	Student& getStudentByName(std::string name);

};

