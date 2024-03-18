//Write a program to find if the number is Armstrong or not. Example: 1634 (1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634)
#include<stdio.h>
#include<math.h>

int main()
{
    int remainder,num,sum=0,count=0;
    

    printf("Number: ");
    scanf("%d",&num);
    int originalNum=num;
 
   //This count the digit
    while(num!=0)
    {
        // remainder=num%10;
        count++;
        num=num/10;
       
    }
    printf("Count=%d\n",count);
    num=originalNum;
    //calculate the armstrong
    while(num!=0)
    {
        remainder=num%10;
  
      sum = sum+pow(remainder,count);;
        num/=10;

    }
      printf("Calculated Num= %d\n",sum);
    if(sum==originalNum){
        printf("Armstrong");}
     else
    {
        printf("Not an Armstrong");
    }
    
  
    return 0;
}