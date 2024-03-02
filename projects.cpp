#include "projects.h"

// Constructor
Projects::Projects() {}

void Projects::addProject(const std::string &project)
{
    projects.push_back(project);
}

void Projects::updateProjectStatus(const std::string &status)
{
    projectStatus = status;
}

std::vector<std::string> Projects::getProjects() const
{
    return projects;
}

std::string Projects::getProjectStatus() const
{
    return projectStatus;
}