// Wap to calculate the gravitational force between two masses.Declare the mass as double data types and gravitational Constan G as constatnt//

#include <stdio.h>
#include <math.h>
int main()
{
    const double G = 6.067 * pow(10, -11);
    double m1, m2, force, distance;
    printf("Enter the masses of two body : \n");
    scanf("%lf %lf", &m1, &m2);
    printf("Enter the distance between two bodies :");
    scanf("%lf", &distance);

    force = (G * m1 * m2) / pow(distance, 2);
    printf("The value of gravitational force between two bodies : %lf", force);
    return 0;
}