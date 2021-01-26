#include <vector>
#include <algorithm>
#include <iterator>

typedef struct _stats
{
    float average;
    float min;
    float max;
}Stats;

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& val);
}
