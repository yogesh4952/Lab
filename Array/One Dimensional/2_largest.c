//Write a C program to find the largest element in an array.
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    //Initializing the value of temp to first element of array
    for(int i=0;i<size;i++){
        if(arr[i]>temp)
        //Here we check each term is either greater or not. if it is then the value isassigned in temp var;
    
        {
            temp=arr[i];
        }
    }
    printf("Largest=%d",temp);
    return 0;
}