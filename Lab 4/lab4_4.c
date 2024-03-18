//WAP to calculate and display the sum of the digits presesnt in the given number//

#include<stdio.h>
int main()
{
   int a,remainder; 
   printf("Enter a Number: ");
   scanf("%d",&a);
   int sum=0;
   for(int i=a;i>0;i=i/10){
      
  remainder=i%10;
  sum+=remainder;
  
 
  }
   printf("%d",sum);
  
  return 0;
   }