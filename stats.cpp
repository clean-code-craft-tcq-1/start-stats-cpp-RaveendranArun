#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& val) {
    
    Stats retStats;
    float sum = 0;
    
    /* Find the avarage */
    for (auto i = val.begin(); i != val.end(); ++i)
        sum += *i;
    retStats.average = sum / (float)val.size();
    
    return retStats;
}
