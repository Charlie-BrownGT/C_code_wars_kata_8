#include <stddef.h>

int square_sum(const int values[/* count */], size_t count)
{
	int i = 0;
    int sum = 0;
    int square = 0;

    for(i=0; i<count; i++) {

    square = values[i] * values[i];
    sum = sum + square;

    }
    
    return sum;
}