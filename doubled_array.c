#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size){

    int *dynamicArray;
    int number_of_elements = size;
    dynamicArray = (int *)malloc(number_of_elements * sizeof(int));

    if (dynamicArray == NULL){
        return 1;
    }

    int i = 0;
    int placeholder = 0;

    while (i < size){

        placeholder = 2 * arr[i];
        dynamicArray[i] = placeholder;

        i++;
    }

    return dynamicArray;

}