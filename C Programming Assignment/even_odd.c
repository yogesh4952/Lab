// Even or Odd: Write a program to check whether a given number is even or odd.//
  /*Name:Yogesh Shah
  Sem:1st
  Roll No:19*/

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter first number : ");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("%d is even", num1);
    }
    else
    {
        printf("%d is odd", num1);
    }
    return 0;
}