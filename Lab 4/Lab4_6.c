//WAP to convert decimal number system to binary number system.

#include<stdio.h>
int main()
{
    int a,i,bin=0,place=1,digit;
    printf("Deximal Number:");
    scanf("%d",&a);
    while(a){
        digit=a%2;
        a=a/2;
        bin=bin+(digit*place);
        place=place*10;
      }
    printf("%d",bin);
    
     
       
             
    
    return 0;
}