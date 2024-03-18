#include<stdio.h>

// Function to calculate nth Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to display Fibonacci series up to nth term
void displayFibonacci(int n) {
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        displayFibonacci(n);
    }

    return 0;
}
