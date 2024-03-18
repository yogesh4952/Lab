//Write a C program to check if an array contains a specific element.
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int fisrtarr[size],secondarr[size];

    for(int i=0;i<size;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&fisrtarr[i]);
}
    
   for(int i=0;i<size;i++){
    secondarr[i]=fisrtarr[i];
   }

   printf("The elements of copied array are : \n");
   for(int i=0;i<size;i++){
    printf(" Element no.%d is %d \n",i+1,secondarr[i]);
   }
   return 0;
}