#include <stddef.h>

int sum_array(const int *values, size_t count) 
{
 int i;
 int sum = 0;
 for(i=0; i<count; i++) {
    sum = sum + values[i];
  }
  return sum;
}