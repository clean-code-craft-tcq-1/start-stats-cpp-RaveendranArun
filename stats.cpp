#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& val) {
    
    Stats retStats;
    float sum = 0;
    int len = 0;
    
    /* Find the size of the vector */
    len = val.size();
    
    if (len)
    {
        /* Find the avarage */
        for (auto i = val.begin(); i != val.end(); ++i)
            sum += *i;
        retStats.average = sum / (float)val.size();

        /* Find the minimum of the vector */
        retStats.min = *min_element(val.begin(), val.end());
        
        /* Find the maximum of the vector */
        retStats.max = *max_element(val.begin(), val.end());  
    }
    else
    {
        /* If the length is zero, then all the fields of 
         * computedStats (average, max, min) must be
         * NAN (not-a-number), as defined in math.h
         */
        retStats.average = NAN;
        retStats.min = NAN;
        retStats.max = NAN;
    }
    
    return retStats;
}
