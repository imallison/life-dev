#include "skills.h"

// Constructor
Skills::Skills() {}

void Skills::addSkill(const string &skill)
{
    desiredSkills.push_back(skill);
}

vector<string> Skills::getSkills() const
{
    return desiredSkills;
}

void Skills::listSkills() const
{
    cout << "Skills List:" << endl;
    for (const auto &skill : desiredSkills)
    {
        cout << "- " << skill << endl;
    }
}