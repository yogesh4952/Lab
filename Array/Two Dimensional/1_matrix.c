//Write a C program to print a 2D array in matrix format.
#include<stdio.h>
int main(){
   
    int row,column;
    printf("Enter the row and column of the matrix: \n");
    scanf("%d%d",&row,&column);

  int  mat1[row][column];

  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        printf("Enter a%d%d element : ",i+1,j+1);
        scanf("%d",&mat1[i][j]);
    }
    printf("\n");

  }
  //For printing

  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        printf("%d\t",mat1[i][j]);
    }
    printf("\n");
  }
return 0;

}