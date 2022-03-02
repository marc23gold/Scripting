#include "roster.h"

//Demonstrate the program's requuired functionalility by adding a main function in main.cpp
int main() {

  //Course title, programming language used, WGU student ID, and name
   cout << "Scripting and Programming - Applications — C867 " << endl;
   cout <<  "C++ " << endl;
   cout << "WGU Student ID: 009463957 " << endl;
   cout << "Marcxime Prosper " << endl;
   cout << endl;

    /*modify the studentData Table to include your personal information as the last item*/
    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Marcxime,Prosper,mprosp5@wgu.edu,21,14,34,90,SOFTWARE"
    };

  const int numStudents = 5;
    
  //create an instance of the roster class called class roster
  Roster classRoster;

  //add each student to classRoster
  for (int i = 0; i < numStudents; i++) {
    classRoster.parseandadd(studentData[i]);
    }
  cout << endl;
    
    cout << "Displaying all students:" << endl;
    classRoster.printAll();
    cout << endl;

    
    cout << "Displaying invalid emails:" << endl;
    classRoster.printInvalidEmails();
    cout << endl;


   //loop through classRosterArray and display
   cout << "Displaying the average days in course per student:" << endl;
   for (int i = 0; i < numStudents; i++) {
    classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->Student::getStudentID());
    } 
  cout << endl;

    cout << "Displaying by degree program software:" << endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << endl;
    
    cout << "Removing A3" << endl;
    classRoster.remove("A3");
    cout << endl;


    classRoster.printAll();

    cout << "Removing A3 again" << endl;
    classRoster.remove("A3");
    cout << endl;

    cout << "Destructor releasing the memory that was allocated dynamically in Roster" << endl;

    return 0;
}