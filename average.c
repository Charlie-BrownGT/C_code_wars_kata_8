double find_average(const double array[/* length */], unsigned length)
{

    if (length == 0){
        return 0;
    }

    double total = 0;
    double average = 0;
    int i = 0;

    while (i < length){
        total += array[i];

        i++;
    }

    average = total / length;

    return average;

}