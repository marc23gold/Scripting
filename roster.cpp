#include "roster.h"
//create a student object for each student in the data table and populate classRosterArray

//Parse each set of data identified in the studentData Table
void Roster::parse(string studentData) {
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
    

    int daysInCourse[3];

    for(int i=0; i <3; ++i) {

        left = right + 1;
        right = studentData.find(",", left);
        daysInCourse[i] = stod(studentData.substr(left, right - left));

    }

    add(studentID, firstName, lastName, emailAddress, age, daysInCourse[0], daysInCourse[1], daysInCourse[2], degreeProgram);

}

//Add each student object to classRosterArray

/*define the add function 
 that sets the Student class variables */
void Roster::add( string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    int daysInClass[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
    classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInClass, degreeProgram);
    cout << "Book added to class roster at row" << lastIndex + 1 << endl;
}


void Roster::printAll() {

    for ( int i = 0; i <= Roster::lastIndex; ++i) {

        Roster::classRosterArray[i]->Print();

    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for(int i = 0; i<=Roster::lastIndex; ++i) {
        if(Roster::classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->Print();
        }
    }
}

void Roster::printInvalidEmails() {
    for(int i = 0; i <= Roster::lastIndex; ++i) {

        string id = Roster::getStudents()[i] -> getEmailAddress();
        if (id.find('@') == string::npos || id.find(".") == string::npos || id.find(" ") != string::npos) {
            cout << id << " is invalid." << endl;
        }
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    for(int i = 0; i <= Roster::lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID()==studentID) {
            cout << studentID << ":";
            cout << (classRosterArray[i]->getNumDays()[0] + classRosterArray[i]->getNumDays()[1] + classRosterArray[i]->getNumDays()[2]) / 3.0 << endl;
        }
    }
}

void Roster::remove(string studentID) {

    bool ok = false;
    for(int i = 0; i < Roster::lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            if (i < numStudents - 1) {
                Student* temp = classRosterArray[i];
                classRosterArray[i] = classRosterArray[numStudents - 1];
                classRosterArray[numStudents - 1] = temp;
            }

            Roster::lastIndex--;
        }
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
