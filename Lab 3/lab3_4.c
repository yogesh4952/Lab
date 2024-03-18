//Write a program to enter the number of days and convert it into years,months and days.

#include <stdio.h>

int main()
{
    int days, years, months, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;

  remainingDays = days % 365;

    months = remainingDays / 30;

    remainingDays %= 30;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", remainingDays);

    return 0;
}
