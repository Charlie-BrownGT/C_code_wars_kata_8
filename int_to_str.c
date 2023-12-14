#include <stdio.h>

const char* number_to_string(int number) {
    char *s;
    asprintf(&s, "%d", number);
    return s;
}