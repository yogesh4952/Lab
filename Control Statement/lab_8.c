//Write a program to count the digits in a number.
#include<stdio.h>
int main()
{
    int count=0,num,remainder;
    printf("Number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        remainder=num%10;
        count++;
        num=num/10;
    }
    printf("The number of digit is %d",count);
    return 0;
}
