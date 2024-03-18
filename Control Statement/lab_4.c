//Create a for loop to print the multiplication table of a given number.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Multiplication Table upto: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Multiplication table of %d\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}