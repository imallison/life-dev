#include "schedule.h"

Schedule::Schedule() : dayNum(0), estimateTime(0.0), startDate(""), endDate("") {}

void Schedule::setSchedule(int day, double time, const std::string &start, const std::string &end)
{
    dayNum = day;
    estimateTime = time;
    startDate = start;
    endDate = end;
}

void Schedule::endDay()
{
    dayNum += 1;
    estimateTime = 0.0;
}