//Program to reverse the number. Example 321 ->; 123, 1234 -> 321

#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
