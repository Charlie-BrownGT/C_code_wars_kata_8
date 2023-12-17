#include <stddef.h>

void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum)
{
    for(size_t i = 0; i < count; i ++) {
        if (values[i] > 0)
            *positivesCount += 1;
        else if (values[i] < 0)
            *negativesSum += values[i];
    }    
}