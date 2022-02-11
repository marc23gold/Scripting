#pragma once
#include "student.h"
#include <string> 

class Roster{
public:

    Roster();

    Student** getStudents();

    void parse(string line);

    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    
private:

    int lastIndex = -1;
    const static int numStudents = 5;
    //create an arrt of pointers, classRosterArray, to hold the data provided in the studentDataTable
    Student* classRosterArray[numStudents] = {nullptr, nullptr, nullptr, nullptr, nullptr};
};