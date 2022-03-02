#pragma once
#include "student.h"


class Roster{
public:

    Roster();

    Student** getStudents();

    void parse(string line);

    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays1, int numDays2, int numDays3, DegreeProgram degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    //delelte later: check if a destructor is actually necessary
    ~Roster();
    
private:

    int index = -1;
    const static int numStudents = 5;
    //create an array of pointers, classRosterArray, to hold the data provided in the studentDataTable
    Student* classRosterArray[numStudents] = {nullptr, nullptr, nullptr, nullptr, nullptr};
};