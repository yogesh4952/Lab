//WAP to find whether the number is odd or even using a ternary operator.//

#include<stdio.h>
int main()
{
    int num1;
    printf("Enter a Number:");
    scanf("%d",&num1);

    if(num1%2==0)
    {
        printf("%d is even number",num1);

    }
    else{
        printf("%d is odd number ",num1);
    }

    return 0;
}