#include <string>
#include <vector>
using namespace std;

struct Skills {
    public:
        std::vector<string> desiredSkills;
    
    Skills();
};

Skills::Skills() {
    desiredSkills = {""};
};