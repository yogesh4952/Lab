//WAP to swap two numbers using bitwise operator//

#include <stdio.h>

void swapNumbers(int *a, int *b) {
    // Using XOR to swap the values without using a temporary variable
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Displaying the numbers before swapping
    printf("Before swapping: First number = %d, Second number = %d\n", num1, num2);

    // Swapping the numbers
    swapNumbers(&num1, &num2);

    // Displaying the numbers after swapping
    printf("After swapping: First number = %d, Second number = %d\n", num1, num2);

    return 0;
}
