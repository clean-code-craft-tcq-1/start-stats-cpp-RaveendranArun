#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>

using namespace std;

typedef struct _stats
{
    float average;
    float min;
    float max;
}Stats;

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& val);
}

class IAlerter
{
    public:
        virtual void setAlert(bool alertStatus) = 0;
};

class EmailAlert : public IAlerter
{
    public:
        EmailAlert();
        bool emailSent;
        virtual void setAlert(bool alertStatus);
        
};

class LEDAlert : public IAlerter
{
    public:
        LEDAlert();
        bool ledGlows;
        virtual void setAlert(bool alertStatus);
};

class StatsAlerter
{
    private:
        float m_maxThreshold;
        std::vector<IAlerter*> m_alerter;
    
     public:
        StatsAlerter(const float maxThreshold, std::vector<IAlerter*>& alertList);
        void checkAndAlert(const std::vector<float>& val);
};
