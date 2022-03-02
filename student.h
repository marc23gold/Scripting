#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include "degree.h"
/* In the Student class:
    StudentID,
    firstName,
    lastName,
    emailAddress,
    age,
    array of number of days to complete each course,
    degree program */
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
    void setNumDays(const int numDays[]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    const int* getNumDays();
    DegreeProgram getDegreeProgram();

    

    ~Student();

    private:
    //studentID
    string studentID;
    //first name
    string firstName;
    //last name
    string lastName;
    //email address
    string emailAddress;
    //age
    int age;
    //array of number of days to complete the course
    //delete later: prices is numdays
    int numDays[3];
    //degree program of type degreeprogram
    DegreeProgram degreeProgram;

}; 