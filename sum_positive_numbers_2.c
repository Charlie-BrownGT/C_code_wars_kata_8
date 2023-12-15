#include <stddef.h>

int positive_sum(const int *values, size_t count){
    
  int sum = 0;
  int i = 0;
  
  while(i < count){
    if(values[i] > 0){
      sum = sum + values[i];
    }
    i++;
  }
  
  return sum;
  
  }