// WAP to calculate and display real roots of a quadratic equation. [Hint: check (b^2-4ac)>0 for real roots.

#include<stdio.h>
#include<math.h>

int main()

{
            int a,b,c,result;
            printf("Enter three Number:");
            scanf("%d%d%d",&a,&b,&c);
            result=pow(b,2)-4*a*c;
            if(result>0){
                printf("The roots are real");
                double root1 = (-b + sqrt(result)) / (2.0 * a);
                double root2 = (-b - sqrt(result)) / (2.0 * a);
                printf("Root 1: %.2f\n", root1);
                printf("Root 2: %.2f\n", root2);

            }
           
            else if(result==0){
               printf("The roots are real and equal\n");
               double root = -b / (2.0 * a);
               printf("Root: %.2f\n", root);
            }
            else{
                printf("Roots are imaginary");
            }
            return 0;
    }





