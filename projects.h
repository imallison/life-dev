#include <string>
#include <vector>
using namespace std;

class Projects {
    public:
        std::vector<string> projects;
        string projectStatus;
    
    Projects();
};

Projects::Projects() {
    projects = {""};
    projectStatus = "";
};