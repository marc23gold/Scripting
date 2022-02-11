#include "student.h"

Student::Student() {
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays[], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    for (int i = 0; i < 3; ++i) {
    this->numDays[i] = numDays[i];
    }
    this->degreeProgram = degreeProgram;
}

Student::~Student(){}

    void Student::setStudentID(string studentID) {this->studentID = studentID;};
    void Student::setFirstName(string firstName) {this->firstName = firstName;}
    void Student::setLastName(string lastName) {this->lastName = lastName;}
    void Student::setEmailAddress(string emailAddress) {this->emailAddress = emailAddress;}
    void Student::setAge(int age) {this->age = age;}
    void Student::setNumDays(const double numDays[]){
        for(int i = 0; i < 3; ++i) {
            this->numDays[i] = numDays[i];
        }
    }
    void Student::setDegreeProgram(DegreeProgram degreeProgram) {this ->degreeProgram = degreeProgram;}

    string Student::getStudentID() {return this->studentID;}
    string Student::getFirstName() {return this->firstName;}
    string Student::getLastName() {return this->lastName;}
    string Student::getEmailAddress() {return this->emailAddress;}
    int Student::getAge() {return this->age;}
    const double* Student::getNumDays() {return this->numDays;}
    DegreeProgram Student::getDegreeProgram() {return this->degreeProgram;}

