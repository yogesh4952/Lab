//WAP to display the following Fibonacci series : 1 1 2 3 5….. upto nth term
#include<stdio.h>
int main(){
    int a=1,b=1,c=0,num;
    printf("UpTo: ");
    scanf("%d",&num);
    
        for(int i=0;i<=num;i++)
        {
            printf("%d\t",c);
            a=b;
            b=c;
            c=a+b;

        }
    
    return 0;
}