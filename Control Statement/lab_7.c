//Write a program to get the sum of digits in a number. Example 12345, sum=1+2+3+4+5=15
#include<stdio.h>
int main()
{
    int sum=0,remainder,num;
    printf("Number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        num=num/10;
        sum= remainder+sum;
    }

    
    printf("Sum= %d",sum);
    return 0;
}