#include <string>
using namespace std;

class General { // Change class to struct
    public:
        string username;
        string accountType; // Choice between study, career, and project
        string focus; // Example: Math
    
    General(); // Constructor
    // Constructs must always be public
    // Classes are private by default, while structs are public by default
};

General::General() { // Default constructor
    username = "";
    accountType = "";
    focus = "";
};