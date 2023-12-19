#include <stdbool.h>

bool better_than_average(const int class_points[], int class_size, int your_points) {
  
    int sum = 0;
    int average = 0;

    for (int i = 0; i < class_size; i++){
        sum = sum + class_points[i];
    }

    average = sum / class_size;

    if (your_points > average){
        return true;
    }
    else if (your_points < average){
        return false;
    }
}