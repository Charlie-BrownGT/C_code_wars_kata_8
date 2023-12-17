#include <stddef.h>
#include <inttypes.h>
#include <stdio.h>

void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
  if (n == 0)
  {
    digits[0] = 0;
    *length_out = 1;
  }
  else
  {
    *length_out = 0;
    while (n > 0)
    {
      digits[*length_out] = n % 10;
      n /= 10;
      *length_out += 1;
    }
  }
}