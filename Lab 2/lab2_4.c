// WAP to find the area and perimeter of the rectangle//

#include <stdio.h>
int main()
{
    int l, b , area ,perimeter;
    printf("Enter a Length and Breadth:\n");
    scanf("%d %d",&l, & b);

    area=l*b;
    printf("%d is the area of rectangle\n",area);

    perimeter=2*(l+b);
    printf("%d is the perimeter of rectangle ",perimeter);

    return 0;


}