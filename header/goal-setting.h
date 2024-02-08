#include <string>
#include <vector>
using namespace std;

class GoalSetting {
    public:
        int goalCounter;
        std::vector<string> goals;
        string goalStatus;
        string proficiency;
    
    GoalSetting();
};

GoalSetting::GoalSetting() {
    goalCounter = 0;
    goals = {""};
    goalStatus = "";
    proficiency = "";
};