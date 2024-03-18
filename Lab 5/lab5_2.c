//WAP to input 2X3 matrix and display in transpose form that is 3X2 matrix.
#include<stdio.h>

void main(){
    int mat[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("enter the a%d%d element:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ",mat[j][i]);
        }
    printf("\n");
    }
   
}