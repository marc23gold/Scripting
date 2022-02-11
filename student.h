#pragma once
using namespace std;
#include <string>
#include <iostream>
#include <iomanip>
#include "degree.h"

class Student {
    public:

    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays[], DegreeProgram degreeProgram);
    void Print();

    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setNumDays(const double numDays[]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    const double* getNumDays();
    DegreeProgram getDegreeProgram();

    const static int daysArray = 3; 

    ~Student();

    private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    double numDays[daysArray];
    DegreeProgram degreeProgram;

}; 