#include <ios>
#include <string>
using namespace std;

int main() {

    const string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,[firstname],[lastname],[emailaddress],[age], [numberofdaystocomplete3courses],SOFTWARE"
    };

    cout << "Marcxime Prosper " << "WGU student ID" << "course title" << "programmming language" << endl;
    
    Roster classRoster;

    /* add each student to classRoster */ 

    /*convert pseudo code 
    classRoster.printAll();
    classRoster.printInvalidEmails();*/ 
    
  

   /*loop through classRosterArray and for each element:
   classRoster.printAverageDaysInCourse(current_object's student id)*/


   /* for the current_oject's student id, use a getter for the classRosterArray to
   access the student id*/
   
   /* classRoster.printByDegreeProgram(SOFTWARE);
      classRoster.remove("A3");
      classRoster.printAll();
      classRoster.remove("A3");

      the above line should print a message saying such a student with this ID was not found */


  /* Implement the destructor to release the memory that was allocated dynamically is Roster */

    return 0
}