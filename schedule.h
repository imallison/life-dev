#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <string>
using namespace std;

class Schedule
{
public:
    int dayNum;
    double estimateTime;
    std::string startDate;
    std::string endDate;

    Schedule();
    int getDayNum() const { return dayNum; }
    double getEstimateTime() const { return estimateTime; }
    std::string getStartDate() const { return startDate; }
    std::string getEndDate() const { return endDate; }

    void setSchedule(int day, double time, const std::string &start, const std::string &end);
    void endDay();
};

// Schedule::Schedule()
// {
//     dayNum = 0;
//     estimateTime = 0.0;
//     startDate = "";
//     endDate = "";
// };

#endif