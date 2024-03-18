// Write a program to convert temperature in Centigrade(C) to Fahrenheit(F). [HINT : f=1.8c+32]

#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the Temperature in Centigrade: ");
    scanf("%f", &c);

    f = 1.8 * c + 32;

    printf("The temperature in Fahrenheit is %.2f", f);

    return 0;
}