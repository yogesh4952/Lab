/*WAP that reads marks of five subjects and calculates total marks and
percentage. Also awards the division on the basis of following criteria.
Percentage Division
p>=75 Distinction
p>=60 and <75 First Division
p>=45 and <60 Second Division
p>35 and <45 Third Division
Otherwise Failed
[Hints: Pass marks and full marks for each subject are 40 and 100
respectively]*/

#include <stdio.h>
int main() 
{
    int a, b, c, d, e, f;
    float g;
    printf("Enter the marks of Maths:");
    scanf("%d", &a);
    printf("Enter the marks of Computer:");
    scanf("%d", &b);
    printf("Enter the marks of Phyics:");
    scanf("%d", &c);
    printf("Enter the marks of Chemistry:");
    scanf("%d", &d);
    printf("Enter the marks of Nepali:");
    scanf("%d", &e);

    f = (a + b + c + d + e);
    printf("Your total marks is %d", f);
    g = (f / 5);
    printf("\nYour perecentage is %.2f\n", g);

    if (g >= 75 && g <= 100)
    {
        printf("You get the Distinction");
    }
    else if (g >= 60 && g < 75)
    {
        printf("\nYou get the first Division");
    }
    else if (g >= 45 && g < 60)
    {
        printf("\nYou get the Second Division");
    }
    else if (g > 35 && g < 45)
    {
        printf("\nYou get the Third Division");
    }
    else if (g > 100)
    {
        printf("\nInvalid");
    }
    else
    {
        printf("Fail");
    }
}