#include <string>
using namespace std;
class Student {
    public:
    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays[], string degreeProgram);
    void Print();

    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setNumDays(int numDays);
    void setDegreeProgram(string degreeProgram);

    void getStudentID();
    void getFirstName();
    void getLastName();
    void getEmailAddress();
    void getAge();
    void getNumDays();
    void getDegreeProgram();

    private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int numDays[3];
    string degreeProgram;

}; 