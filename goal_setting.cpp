#include "goal_setting.h"

GoalSetting::GoalSetting() : status("Not Started"), proficiency("Beginner") {}

void GoalSetting::addGoal(const std::string &goal)
{
    goals.push_back(goal);
}

void GoalSetting::updateGoalStatus(const std::string &status)
{
    this->status = status;
}

void GoalSetting::setProficiency(const std::string &proficiency)
{
    this->proficiency = proficiency;
}

std::vector<std::string> GoalSetting::getGoals() const
{
    return goals;
}

std::string GoalSetting::getGoalStatus() const
{
    return status;
}

std::string GoalSetting::getProficiency() const
{
    return proficiency;
}