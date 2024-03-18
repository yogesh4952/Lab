#include <stdio.h>

int main() {
    int num1, num2, hcf, lcm, temp;
    
    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Find HCF
    int a = num1;
    int b = num2;
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    
    // Find LCM
    lcm = (num1 * num2) / hcf;
    
    // Display the results
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    
    return 0;
}
