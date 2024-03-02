#include <iostream>
#include <string>
#include <vector>

#include "general.h"

// get and set username
// select accountType from a vector of types
// get and set focus;

// Default constructor
General::General() : username(""), accountType(), focus("") {}

// Constructor
General::General(const std::string &username, const std::vector<std::string> &accountType, const std::string &focus)
    : username(username), accountType(accountType), focus(focus) {}

// Mutators
void General::setUsername(const std::string &username)
{
    this->username = username;
}

void General::setAccountType(const std::vector<std::string> &accountType)
{
    this->accountType = accountType;
}

void General::setFocus(const std::string &focus)
{
    this->focus = focus;
}

// Accessors
std::string General::getUsername() const
{
    return username;
}

std::vector<std::string> General::getAccountType() const
{
    return accountType;
}

std::string General::getFocus() const
{
    return focus;
}

// Other
void General::shareFocus(General &other)
{
    this->focus = other.getFocus(); // An example of how two instances might interact
}