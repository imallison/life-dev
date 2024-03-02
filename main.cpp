#include <iostream>
#include <string>
#include <vector>

#include "calculations.h"
#include "general.h"
#include "goal_setting.h"
#include "projects.h"
#include "schedule.h"
#include "skills.h"

// #include "development/goal_setting.h"
// #include "development/projects.h"
// #include "development/skills.h"
// #include "general/general.h"
// #include "scheduling/calculations.h"
// #include "scheduling/schedule.h"

using namespace std;

int main()
{
    General userGeneralInfo;
    Schedule userSchedule;
    GoalSetting userGoals;
    Skills userSkills;
    Projects userProjects;
    Calculations userCalculations;
    cout << "Welcome to the Development Tracker!" << endl;

    cout << "Enter your username: ";
    string username;
    cin >> username;

    cout << "Enter your focus area (single word, e.g., Math): ";
    string focus;
    cin >> focus;
    userGeneralInfo.setFocus(focus);

    int choice = 0;
    while (true)
    {
        cout << "\nWhat would you like to do today? (Enter number)" << endl;
        cout << "1. Add a goal\n2. Add a skill\n3. Add a project\n4. End the day\n5. Exit" << endl;
        if (cin >> choice) // Ensures input is a number
        {
            string input;

            switch (choice)
            {
            case 1:
            {
                cout << "Enter a goal: ";
                string goal;
                getline(cin, goal);
                userGoals.addGoal(goal);
                break;
            }
            case 2:
            {
                cout << "Enter a skill: ";
                string skill;
                getline(cin, skill);
                userSkills.addSkill(skill);
                break;
            }
            case 3:
            {
                cout << "Enter a project: ";
                string project;
                getline(cin, project);
                userProjects.addProject(project);
                break;
            }
            case 4:
                userSchedule.endDay();
                cout << "The day has ended. Time for a fresh start tomorrow!" << endl;
                break;
            case 5:
                cout << "Exiting. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid option, try again." << endl;
                break;
            }
        }
    }
    // // Test
    // General test1;
    // cout << "Default: " << test1.getUsername() << ", Focus: " << test1.getFocus() << endl;

    // vector<string> accountTypes = {"study", "career"};
    // General test2("testuser1", accountTypes, "Math");
    // cout << "Overloaded: " << test2.getUsername() << ", Focus: " << test2.getFocus() << endl;

    // test1.shareFocus(test2);
    // cout << "Shared. Test 1's Focus: " << test1.getFocus() << ", test 2's Focus: " << test2.getFocus() << endl;

    return 0;
}