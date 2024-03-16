#include <iostream>
#include <string>
#include <vector>
#include <limits>

#include "calculations.h"
#include "general.h"
#include "goal_setting.h"
#include "projects.h"
#include "schedule.h"
#include "skills.h"

using namespace std;

void displayAccountTypes()
{
    cout << "Select account type:\n";
    cout << "1. Study Account\n";
    cout << "2. Career Account\n";
    cout << "3. Project Account\n";
}

int main()
{
    Calculations userCalculations;
    General userGeneralInfo;
    GoalSetting userGoals;
    Projects userProjects;
    Schedule userSchedule;
    Skills userSkills;

    cout << "Welcome to the Life Dev!" << endl;

    string username;
    cout << "Enter your username: ";
    cin >> username;
    userGeneralInfo.setUsername(username);

    displayAccountTypes();
    int accountChoice;
    cin >> accountChoice;
    vector<string> accountTypes = {"Study", "Career", "Project"};
    if (accountChoice > 0 && accountChoice <= accountTypes.size())
    {
        vector<string> selectedAccountType = {accountTypes[accountChoice - 1]};
        userGeneralInfo.setAccountType(selectedAccountType);
    }
    else
    {
        cout << "Invalid account type selected. Defaulting to Study Account.\n";
        vector<string> defaultAccountType = {"Study"};
        userGeneralInfo.setAccountType(defaultAccountType);
    }

    string focus;
    cout << "Enter your focus area (e.g., Calculus, Physics, English): ";
    cin >> focus;
    userGeneralInfo.setFocus(focus);

    // Initial day setup
    userSchedule.setSchedule(1, 0.0, "01/01/2024", "12/31/2024");

    while (true)
    {
        cout << "\nWhat would you like to do today? (Enter number)" << endl;
        cout << "1. Add a goal\n2. Add a skill\n3. Add a project\n4. List goals\n5. List skills\n6. List projects\n7. Display current day and schedule\n8. End the day\n9. Exit" << endl;

        int choice = 0;
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, try again.\n";
            continue;
        }

        string input;
        switch (choice)
        {
        case 1:
            cout << "Enter a goal: ";
            cin.ignore();
            getline(cin, input);
            userGoals.addGoal(input);
            break;
        case 2:
            cout << "Enter a skill: ";
            cin.ignore();
            getline(cin, input);
            userSkills.addSkill(input);
            break;
        case 3:
            cout << "Enter a project: ";
            cin.ignore();
            getline(cin, input);
            userProjects.addProject(input);
            break;
        case 4:
            cout << "Goals:\n";
            for (const auto &goal : userGoals.getGoals())
            {
                cout << "- " << goal << " (" << userGoals.getGoalStatus() << ", " << userGoals.getProficiency() << ")" << endl;
            }
            break;
        case 5:
            userSkills.listSkills();
            break;
        case 6:
            cout << "Projects:\n";
            for (const auto &project : userProjects.getProjects())
            {
                cout << "- " << project << " (" << userProjects.getProjectStatus() << ")" << endl;
            }
            break;
        case 7:
            cout << "Current Day: " << userSchedule.getDayNum() << endl;
            cout << "Schedule from " << userSchedule.getStartDate() << " to " << userSchedule.getEndDate() << endl;
            cout << "Estimated time for tasks today: " << userSchedule.getEstimateTime() << " hours\n";
            break;
        case 8:
            userSchedule.endDay();
            cout << "The day has ended. Current day is now: " << userSchedule.getDayNum() << endl;
            break;
        case 9:
            cout << "Exiting. Goodbye!\n";
            return 0;
        default:
            cout << "Invalid input.\n";
            break;
        }
    }
}