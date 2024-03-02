#ifndef GENERAL_H
#define GENERAL_H

#include <string>
#include <vector>
using namespace std;

class General
{
private:
    std::string username;
    std::vector<std::string> accountType; // Choice between study, career, and project
    std::string focus;                    // Example: Math
public:
    General(); // Constructor
    General(const std::string &username, const std::vector<std::string> &accountType, const std::string &focus);

    // Mutators
    void setUsername(const std::string &username);
    void setAccountType(const std::vector<std::string> &accountType);
    void setFocus(const std::string &focus);

    // Accessors
    std::string getUsername() const;
    std::vector<std::string> getAccountType() const;
    std::string getFocus() const;

    // Other
    void shareFocus(General &other);
};

/*General::General()
{ // Default constructor
    username = "";
    accountType = {""};
    focus = "";
};*/

// Classes are private by default, while structs are public by default
// Constructs must always be public
// Getters (usually 1 line long) & setters

#endif