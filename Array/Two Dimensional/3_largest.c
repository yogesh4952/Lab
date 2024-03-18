//Write a C program to find the largest element in a 2D array.
#include<stdio.h>
int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter elements %d of am 2D Array : ",i+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    int largest=arr[0][0],isThere;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
      if(arr[i][j]>largest){
        largest=arr[i][j];
      }
        }
       
    }
    printf("%d is the largest",largest);
}