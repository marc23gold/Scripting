#include "student.h"

Student::Student() {
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    this->degreeProgram = DegreeProgram::SECURITY;
    for (int i = 0; i < 3; ++i) {
        this-> numDays[i] = 0;
    }
}

//constructor member initialization
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

    //setter functions
    void Student::setStudentID(string studentID) {this->studentID = studentID;};
    void Student::setFirstName(string firstName) {this->firstName = firstName;}
    void Student::setLastName(string lastName) {this->lastName = lastName;}
    void Student::setEmailAddress(string emailAddress) {this->emailAddress = emailAddress;}
    void Student::setAge(int age) {this->age = age;}
    void Student::setNumDays(const int numDays[]){
        for(int i = 0; i < 3; ++i) {
            this->numDays[i] = numDays[i];
        }
    }
    void Student::setDegreeProgram(DegreeProgram degreeProgram) {this->degreeProgram = degreeProgram;}

    //getter functions
    string Student::getStudentID() {return this->studentID;}
    string Student::getFirstName() {return this->firstName;}
    string Student::getLastName() {return this->lastName;}
    string Student::getEmailAddress() {return this->emailAddress;}
    int Student::getAge() {return this->age;}
    const int* Student::getNumDays() {return this->numDays;}
    DegreeProgram Student::getDegreeProgram() {return this->degreeProgram;}

    void Student::Print() {
        cout << this->studentID<<'\t';
        cout << this->firstName << '\t';
        cout << this->lastName << '\t';
        cout << this->emailAddress << '\t';
        cout << this->age << '\t';
        //prints the first, second, and third day in the numDays array and so on
        cout << this->numDays[0] << '\t';
        cout << this->numDays[1] << '\t';
        cout << this->numDays[2] << '\t';
        //converting the enumeratied integer that would otherwise be outputted to output a string instead
        cout << degreeProgramS[(int)this->degreeProgram];
        cout << endl;
    }

