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
    Calculations userCalculations;
    General userGeneralInfo;
    GoalSetting userGoals;
    Projects userProjects;
    Schedule userSchedule;
    Skills userSkills;

    cout << "Welcome to the Development Tracker!" << endl;

    string username, focus;
    cout << "Enter your username: ";
    getline(cin, username);
    userGeneralInfo.setUsername(username);

    cout << "Enter your focus area (e.g., Software Development, Data Science): ";
    getline(cin, focus);
    userGeneralInfo.setFocus(focus);

    while (true)
    {
        cout << "\nWhat would you like to do today? (Enter number)" << endl;
        cout << "1. Add a goal\n2. Add a skill\n3. Add a project\n4. List goals\n5. List skills\n6. List projects\n7. End the day\n8. Exit" << endl;

        int choice = 0;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter a goal (single word): ";
            string goal;
            cin >> goal;
            userGoals.addGoal(goal);
        }
        else if (choice == 2)
        {
            cout << "Enter a skill (single word): ";
            string skill;
            cin >> skill;
            userSkills.addSkill(skill);
        }
        else if (choice == 3)
        {
            cout << "Enter a project (single word): ";
            string project;
            cin >> project;
            userProjects.addProject(project);
        }
        else if (choice == 5)
        {
            cout << "Skills:\n";
            userSkills.listSkills();
        }
        else if (choice == 7)
        {
            cout << "The day has ended.\n";
        }
        else if (choice == 8)
        {
            cout << "Exiting. Goodbye!\n";
            break; // Exit the loop
        }
        else
        {
            cout << "Invalid input.\n";
        }
    }

    return 0;
}

// // Test
// General test1;
// cout << "Default: " << test1.getUsername() << ", Focus: " << test1.getFocus() << endl;

// vector<string> accountTypes = {"study", "career"};
// General test2("testuser1", accountTypes, "Math");
// cout << "Overloaded: " << test2.getUsername() << ", Focus: " << test2.getFocus() << endl;

// test1.shareFocus(test2);
// cout << "Shared. Test 1's Focus: " << test1.getFocus() << ", test 2's Focus: " << test2.getFocus() << endl;