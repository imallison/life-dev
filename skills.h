#ifndef SKILLS_H
#define SKILLS_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Skills
{
private:
    vector<string> desiredSkills;

public:
    Skills();
    void addSkill(const string &skill);
    vector<string> getSkills() const;
    void listSkills() const;
};

// Skills::Skills()
// {
//     desiredSkills = {""};
// };

#endif