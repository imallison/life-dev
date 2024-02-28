#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <string>
using namespace std;

class Schedule
{
public:
    int dayNum;
    double estimateTime;
    string startDate;
    string endDate;

    Schedule();
};

Schedule::Schedule()
{
    dayNum = 0;
    estimateTime = 0.0;
    startDate = "";
    endDate = "";
};

#endif