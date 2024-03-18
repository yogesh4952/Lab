//Write a C program to find the addition of arrays.
#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],result[3][3],i,j;
    printf("Enter Element of first array:\n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter a%d%d element:",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    printf("Enter Element of second array:\n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter a%d%d element: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    printf("Result :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


}