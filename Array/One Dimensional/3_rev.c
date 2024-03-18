// Write a C program to reverse the elements of an array.
#include<stdio.h>
int main()
{
    int size,i,j;
    printf("Enter the size of any array: ");
    scanf("%d",&size);

    int arr[size];
    for( i=0;i<size;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);

    }
    printf("Reversed array: ");
    for( i=size-1;i>=0;i--){
        printf("%d\t",arr[i]);

    }
    return 0;
}