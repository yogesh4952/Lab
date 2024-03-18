//Write a program that uses a for loop to calculate the sum and average of an array of integers.

#include<stdio.h>
int main()
{
    int n;
    printf("Size: ");
    scanf("%d",&n);
    int size[n];
    int sum=0,average;
    printf("Enter  Numbers: \n");
for(int i=0;i<n;i++){
        scanf("%d",&size[i]);
        sum=sum+size[i];
        average=sum/n;

}
    printf("Sum= %d\n",sum);
    printf("Average = %d",average);
  
  }