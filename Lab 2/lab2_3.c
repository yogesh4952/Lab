// Take the population of 3 different districts and find the average population without losing the data. Lastly, perform the explicit type conversion to find the number of people//

#include<stdio.h>
int main()
{
int a,b,c;
double average;
printf("Enter the population of Kailali : ");
scanf("%d",&a);
printf("\nEnter the population of Kanchanpur : ");
scanf("%d",&b);
printf("\nEnter the population of Dadeldhura : ");
scanf("%d",&c);

average= (a+b+c)/3;
printf("The average population of these 3 district is: %lf ",average);
printf("\nThe average population of these 3 district is: %d ",(int)average);

// int totalpeople=average;
// printf("\n%d",totalpeople);
return 0;
}