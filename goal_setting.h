#ifndef GOAL_SETTING_H
#define GOAL_SETTING_H

#include <string>
#include <vector>
using namespace std;

class GoalSetting
{
private:
    std::vector<std::string> goals; // Define
    std::string proficiency;
    std::string status;

public:
    GoalSetting();

    // Goals
    void addGoal(const std::string &goal);
    std::vector<std::string> getGoals() const;

    // Proficiency
    std::string getProficiency() const;
    void setProficiency(const std::string &level);

    // Status
    std::string getGoalStatus() const;
    void updateGoalStatus(const std::string &status);
};

// GoalSetting::GoalSetting()
// {
//     goalCounter = 0;
//     goals = {""};
//     goalStatus = "";
//     proficiency = "";
// };

#endif