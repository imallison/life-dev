#include <string>
#include <vector>
using namespace std;

class General { // Change class to struct
    public:
        string username;
        std::vector<string> accountType; // Choice between study, career, and project
        string focus; // Example: Math
    
    General(); // Constructor
    // Classes are private by default, while structs are public by default
    // Constructs must always be public
    // Getters (usually 1 line long) & setters
};

General::General() { // Default constructor
    username = "";
    accountType = {""};
    focus = "";
};