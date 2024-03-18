//Display the multiplication table of any number of any number given by the user

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=10; i++){
        printf("The multipilication table of %d\n",i);
        for(j=1;j<=10;j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
        printf("\n");

    }
    return 0;
}