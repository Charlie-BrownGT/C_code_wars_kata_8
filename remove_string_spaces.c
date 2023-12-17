#include <stdlib.h>

char *no_space(char *strin) {
  char *tmp = malloc(strlen(strin) + 1);
  char *start = tmp;
  
  while (*strin != '\0') {
    if (*strin != ' ') {
      *tmp++ = *strin;
    }
    strin++;
  }
  *tmp = '\0';
  
  return start;
}