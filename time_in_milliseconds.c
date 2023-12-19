int past(int hours, int minutes, int seconds) {

    int total_sec = 0;
    int total_mins = 0;
    int total_hours = 0;
    int total = 0;

    total_sec = seconds * 1000;
    total_mins = minutes * 60000;
    total_hours = hours * 3600000;

    total = total_sec + total_mins + total_hours;

    return total;
}