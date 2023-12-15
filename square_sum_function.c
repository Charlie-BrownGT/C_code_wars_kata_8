#include <stddef.h>

int square_sum(const int values[/* count */], size_t count)
{
	int i = 0;
    int sum = 0;
    int square = 0;

    while(i < count){
        
        square = values[i] * values[i];
        sum = sum + square;
        i++;
    }
    
    return sum;
}