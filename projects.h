#ifndef PROJECTS_H
#define PROJECTS_H

#include <string>
#include <vector>

class Projects
{
private:
    std::vector<std::string> projects;
    std::string projectStatus;

public:
    Projects(); // Constructor

    void addProject(const std::string &project);
    void updateProjectStatus(const std::string &status);

    std::vector<std::string> getProjects() const;
    std::string getProjectStatus() const;
};

// Projects::Projects()
// {
//     projects = {""};
//     projectStatus = "";
// };

#endif