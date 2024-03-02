#include "calculations.h"

// completionPercentage = goalCounter / goals (length of the vector)
// daysUntil += 1 whenever user types "End day" (not case sensitive)
// efficiencyCalc = formula that will use completionPercentage, estimateTime, and efficiencyGoal
// efficiencyGoal: set how efficient you want to be on a scale of 1-5
// Setters and getters for private members as needed
// to calculate how “efficient” the user is based on their goals

Calculations::Calculations() : daysUntil(0), completionPercentage(0.0), efficiencyCalc(0.0), efficiencyGoal(0.0) {}

void Calculations::endDay()
{
    efficiencyCalc = (completionPercentage / 100) * efficiencyGoal;
}

void Calculations::calcCompletionPercentage(int completedGoals, int totalGoals)
{
    if (totalGoals > 0)
    {
        completionPercentage = (static_cast<double>(completedGoals) / totalGoals) * 100;
    }
    else
    {
        completionPercentage = 0;
    }
}

void Calculations::calcEfficiency(double estimateTime, double actualTime)
{
    efficiencyCalc = estimateTime / actualTime;
}