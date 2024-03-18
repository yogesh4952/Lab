//Write a C program to check if an array contains a specific element.
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int arr[size];

    //We take input here
    for(int i=0;i<size;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int isThere=0;
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    for(int i=0;i<size;i++){
        if(arr[i]==a){
            isThere=1;
          
            break;
        }
       
    }

    if(isThere==1){
        printf("The element you entered(%d) is in the array\n",a);
    }
    else{
        printf("%d is not in the array",a);
    }
}