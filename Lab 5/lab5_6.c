// Calculate the power of a number using recursion

#include<stdio.h>

// Function to calculate power of a number recursively
int power(int base, int exponent) {
    // Base case
    if (exponent == 0)
        return 1;
    // Recursive case
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    // Calculate power using the power() function
    int result = power(base, exponent);
    
    // Display the result
    printf("%d raised to the power %d is %d\n", base, exponent, result);
    
    return 0;
}
