//WAP a program to input two matrices, add two matrices and display in proper format
#include<stdio.h>
int main(){
    int mat1[2][3],sum[2][3];
    int i,j;
    printf("Enter the elements of first matrix\n");
    for(i=0;i<2;i++){
        for( j=0;j<3;j++){
        printf("Enter the a%d%d element: ",i+1,j+1);
        scanf("%d",&mat1[i][j]);
     }
    }
    
   
   int mat2[2][3];
    printf("Enter the elements of second matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("Enter the a%d%d element: ",i+1,j+1);
        scanf("%d",&mat2[i][j]);
     }
    }

   for( i=0;i<2;i++){
    for( j=0;j<3;j++)
    {
        int sum[i][j];
        sum[i][j]=mat1[i][j] + mat2[i][j];
         printf("%d\t",sum[i][j]);
    }
    printf("\n");
   }
}