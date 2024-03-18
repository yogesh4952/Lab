/*Quadratic Equation Roots: Write a program to solve a quadratic equation and find its roots (real
or imaginary).*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float d, e, descriminant;
    printf("In ax2+bx+c\n");

    printf("Enter the value of a: \n");
    scanf("%f", &a);
    printf("Enter the value of b: \n");
    scanf("%f", &b);
    printf("Enter the value of c: \n");
    scanf("%f", &c);

    descriminant = b * b - 4 * a * c;
    // printf("%f\n", d);
    d = (-b + sqrt(descriminant)) / (2 * a);

    e = (-b - sqrt(descriminant)) / (2 * a);

    printf("The value of x is %f and %f\n", d, e);

    printf("Here we check the roots are either imaginary or real\n");

    int root1 = pow(b, 2) - 4 * a * c;
    printf("The value of root1 is %d\n", root1);

    if (root1 > 0)
    {
        printf("%d is real\n", root1);
    }
    else if (root1 == 0)
    {
        printf("%d is equal", root1);
    }
    else
    {
        printf("%d is imaginary", root1);
    }
    return 0;
}