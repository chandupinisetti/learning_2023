#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;
    int seconds1, seconds2, timeDiff;

  
    seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;

    
    seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    
    timeDiff = seconds2 - seconds1;

    if (timeDiff < 0)
        timeDiff += 24 * 3600; 


    diff.hours = timeDiff / 3600;
    timeDiff = timeDiff % 3600;
    diff.minutes = timeDiff / 60;
    diff.seconds = timeDiff % 60;

    return diff;
}

int main() {
    struct Time time1, time2, diff;

    printf("Enter time1 (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter time2 (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

   
    diff = calculateTimeDifference(time1, time2);

    
    printf("Time difference: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}
