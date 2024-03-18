// Write a program to input seconds and convert it into hours, minutes and seconds.

#include <stdio.h>

int main() {
    int seconds, hours, minutes, remaining_seconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    remaining_seconds = seconds % 60;

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", remaining_seconds);

    return 0;
}
