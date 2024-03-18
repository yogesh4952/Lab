#include<stdio.h>
int main()
{
    int a,num,i,j;
    printf("ENter a Number: ");
    scanf("%d",&a);
    num=a;
    for(i=num;i>0;i++){
        {
        for(j=1;j<11;j++){
            printf("%d*%d=%d",num,j,num*j);
        }
    }
    }}