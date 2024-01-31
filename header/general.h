#include <string>
using namespace std;

struct General { // Change class to struct
    public:
        string username;
        string accountType; // Choice between study, career, and project
        string focus; // Example: Math
    
    General(); // Constructor
};

General::General() { // Default constructor
    username = "";
    accountType = "";
    focus = "";
};