using namespace std;

class Calculations {
public:
    Calculations();

    void endDay();

    void calcCompletionPercentage(int goalCounter, int totalGoals);
    void calcEfficiency(double estimateTime);
    void getEfficiencyCalc() const;
    void setEfficiencyCalc(double goal);
    

private:
    int daysUntil;
    double completionPercentage;
    double efficiencyCalc;
    double efficiencyGoal;
};

Calculations::Calculations() {
    daysUntil = 0;
    completionPercentage = 0.0;
    efficiencyCalc = 0.0;
    efficiencyGoal = 0.0;
};