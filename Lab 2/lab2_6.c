// WAP to find the largest of 3numbers//

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter a 1st Number: ");
    scanf("%d", &num1);
    printf("Enter a 2nd  Number: ");
    scanf("%d", &num2);
    printf("Enter a 3rd Number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is the highest number", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is the highest number", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("%d is the highest number", num3);
    }
}