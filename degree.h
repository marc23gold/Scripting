// Define an enumerated data Type DegreeProgram for the degree programs 
// containing the data types values SECURITY, NETWORK, and SOFTWARE
#pragma once
#include <string>
using namespace std;
//enumeration of DegreeProgram
enum DegreeProgram {
    SECURITY,NETWORK,SOFTWARE 
};

static const string degreeProgramS[] = {"SECURITY", "NETWORK", "SOFTWARE"};

//delete later: BookType = DegreeProgram and bookTypeStrings[] = degreeProgramS