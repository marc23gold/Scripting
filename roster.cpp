#include "roster.h"


Roster::Roster(){}

/*define the add function 
 that sets the Student class variables */
void Roster::add( string studentID, string firstName, string lastName, string emailAddress, int age, int numdays1, int numdays2, int numdays3, DegreeProgram degreeProgram) {
    int daysInClass[3] = {numdays1, numdays2, numdays3};
    //create a student object for each student in the data table and populate classRosterArray
    classRosterArray[++index] = new Student(studentID, firstName, lastName, emailAddress, age, daysInClass, degreeProgram);
    cout << "Student " << index + 1 << " being added" << endl;
}


//Parse each set of data identified in the studentData Table
void Roster::parseandadd(string studentData) {
    DegreeProgram degreeProgram = DegreeProgram::SOFTWARE;
    if (studentData.back() == 'Y') {
        degreeProgram = DegreeProgram::SECURITY;
    }
    else if(studentData.back() == 'K') {
        degreeProgram == DegreeProgram::NETWORK;
    }


    int right = studentData.find(",");
    string studentID = studentData.substr(0, right);
    int left = right + 1;

    right = studentData.find(",", left);
    string firstName = studentData.substr(left, right - left);
    left = right + 1;

    right = studentData.find(",", left);
    string lastName = studentData.substr(left, right - left);
    left = right + 1;

    right = studentData.find(",", left);
    string emailAddress = studentData.substr(left, right - left);
    left = right + 1;

    right = studentData.find(",", left);
    int age = stod(studentData.substr(left, right - left));
    left = right + 1;
    
    right = studentData.find(",", left);
    int numdays1 = stoi(studentData.substr(left, right - left));
    left = right + 1;

    right = studentData.find(",", left);
    int numdays2 = stoi(studentData.substr(left, right - left));
    left = right + 1;

    right = studentData.find(",", left);
    int numdays3 = stoi(studentData.substr(left, right - left));
    left = right + 1;

    //Add each student object to classRosterArray
    add(studentID, firstName, lastName, emailAddress, age, numdays1, numdays2, numdays3, degreeProgram);

}





void Roster::printAll() {

    for ( int i = 0; i <= Roster::index; ++i) {

        Roster::classRosterArray[i]->Print();

    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for(int i = 0; i<=Roster::index; ++i) {
        if(Roster::classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->Print();
        }
    }
}

void Roster::printInvalidEmails() {
    for(int i = 0; i <= Roster::index; ++i) {
        
        string id = Roster::classRosterArray[i] -> getEmailAddress();
        if (id.find('@') == string::npos || id.find(".") == string::npos || id.find(" ") != string::npos) {
            cout << id << " is invalid." << endl;
        }
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    for(int i = 0; i <= Roster::index; ++i) {
        if (classRosterArray[i]->getStudentID()==studentID) {
            cout << studentID << ":";
            cout << (classRosterArray[i]->getNumDays()[0] + classRosterArray[i]->getNumDays()[1] + classRosterArray[i]->getNumDays()[2]) / 3.0 << endl;
        }
    }
}

void Roster::remove(string studentID) {

    bool ok = false;
    for(int i = 0; i < Roster::index; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            if (i < numStudents - 1) {
                Student* temp = classRosterArray[i];
                classRosterArray[i] = classRosterArray[numStudents - 1];
                classRosterArray[numStudents - 1] = temp;
            }

            Roster::index--;
        }
    }
    if(ok) {
        cout << "Student " << studentID << "removed" << endl;
        printAll();
    }
}

    Roster::~Roster() {
        for(int i = 0; i < numStudents; ++i) {
            cout << "Destructor called" << classRosterArray[i]->getStudentID() << endl;
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
        }
    }



    
/*define the remove function that removes students from the
roster by studentID if the student ID does not exist, the function
prints an error message indicating that the student was not found */

/* define printALL function that prints a complete tab seperated list of student
data in the provided format A1 [tab]
the function should loop through all the students in classRosterArray and call the print()
function for each student*/

/* define printAverageDaysInCouse(string studentID) that correctly prints a student's average
number of days in three courses. The student is indentified by the studentID parameter*/

/*define printInvalidEmails() that verifies student email addresses and displays all invalid email
addresses to the user*/

/* define  printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program
specified by an enumerated type */
