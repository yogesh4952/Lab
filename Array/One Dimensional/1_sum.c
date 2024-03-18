//Write a C program to find the sum of all elements in an array.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an Array: ");
    scanf("%d",&size);
   int  arr[size];

    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];

    }
    printf("Sum of all element = %d",sum);
    return 0;
}