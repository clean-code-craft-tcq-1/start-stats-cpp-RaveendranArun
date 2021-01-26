#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& val) {
    
    Stats retStats;
    float sum = 0;
    
    /* Find the avarage */
    for (auto i = val.begin(); i != val.end(); ++i)
        sum += *i;
    retStats.average = sum / (float)val.size();
    
    /* Find the minimum of the vector */
    retStats.min = *min_element(val.begin(), val.end());
    /* Find the maximum of the vector */
    retStats.max = *max_element(arr.begin(), arr.end());
    
    return retStats;
}
