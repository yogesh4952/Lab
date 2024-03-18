//WAP which reads any two integer values from the user and  calculates sum,difference and product using switch statement

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integer values: ");
    scanf("%d %d", &num1, &num2);

    int choice;
    printf("Enter your choice:\n");
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum: %d\n", num1 + num2);
            break;
        case 2:
            printf("Difference: %d\n", num1 - num2);
            break;
        case 3:
            printf("Product: %d\n", num1 * num2);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
