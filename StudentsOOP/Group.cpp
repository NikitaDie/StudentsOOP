#include "Group.h"

Group::Group(std::string title) :
    groupTitle{ title }
{}

std::string Group::getTitle()
{
	return this->groupTitle;
}

void Group::addStudent(Student student) {
	this->students.push_back(student);
}

Student& Group::getStudentByID(int id){

    int l = 0, r = this->students.size() - 1;

    while (r > l) {
        int m = (l + r) / 2;

        if (this->students[m].getID() < id) {
            l = m + 1;
        }
        else if (this->students[m].getID() > id) {
            r = m - 1;
        }
        else {
            return this->students[m];
        }
    }



    if (this->students[l].getID() == id) {
        return this->students[l];
    }
    else {
        std::cout << "This ID doesn`t exist." << "\n";
        std::cout << "New ID: ";
        std::cin >> id;
        return getStudentByID(id);
    }
   
}

Student& Group::getStudentByName(std::string name) {

    for (int i{ 0 }; i < this->students.size(); ++i) {
        if (this->students[i].getName() == name) {
            return this->students[i];
        }
    }

    std::cout << "This Name doesn`t exist." << "\n";
    std::cout << "New Name: ";
    std::cin >> name;
    return getStudentByName(name);
}

