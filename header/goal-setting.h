#include <string>
#include <vector>
using namespace std;

class GoalSetting {
    public:
        std::vector<string> goals;
        string goalStatus;
        string proficiency;
    
    GoalSetting();
};

GoalSetting::GoalSetting() {
    goals = {""};
    goalStatus = "";
    proficiency = "";
};