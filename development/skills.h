#ifndef SKILLS_H
#define SKILLS_H

#include <string>
#include <vector>
using namespace std;

class Skills
{
public:
    std::vector<string> desiredSkills;

    Skills();
};

Skills::Skills()
{
    desiredSkills = {""};
};

#endif