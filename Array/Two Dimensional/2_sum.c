//Write a C program to find the sum of all elements in a 2D array.
#include<stdio.h>
int main(){
    int mat1[2][3],mat2[2][3];
    //Here we take the input two matrix with size 2x3 from the users
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("Enter a%d%d element: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("Enter a%d%d element: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    //Here we add the two matrix
    int sum=0;
   for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
         
         sum=mat1[i][j]+mat2[i][j];
        }
    }
    printf("Sum = %d",sum);
    return 0;

}