// WAP to find the given number is divisible by 5 and not by 10 using the nested if else statement.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d", &a);

    if (a % 5 == 0 && a % 10 != 0)
    {
        printf("The give number is divisible by 5 but not by 10", a);
    }
    else if (a % 5 != 0)
    {
        printf("The given number is not divisible by 5");
    }

    else
    {
        printf("\n");
    }
    return 0;
}