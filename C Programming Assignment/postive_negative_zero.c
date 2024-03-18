/*Positive, Negative, or Zero: Write a program to determine whether a given number is positive,
negative, or zero.*/
/*Name:Yogesh Shah
  Sem:1st
  Roll No:19*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d is Postive Value", a);
    }
    if (a < 0)
    {
        printf("%d is Negative Value ", a);
    }
    if (a == 0)
    {
        printf("%d is Zero", a);
    }
    return 0;
}
