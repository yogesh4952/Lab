//Write a C program to find the transpose of a 2D square array.
#include<stdio.h>
int main(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter the a%d%d element: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Your entered matrix is: \n ");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
           
        }
        printf("\n");
    }
    printf("Transpose is: \n");
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[j][i]);
           
        }
        printf("\n");
    }
}