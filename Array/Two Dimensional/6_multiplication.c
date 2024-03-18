#include <stdio.h>

// Function to perform array multiplication
void arrayMultiplication(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

// Function to display the contents of an array
void displayArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Define arrays
    int rows = 3;
    int cols = 3;
    int arr1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7},
                      {6, 5, 4},
                      {3, 2, 1}};
    int result[3][3];

    // Perform array multiplication
    arrayMultiplication(rows, cols, arr1, arr2, result);

    // Display original arrays and result
    printf("Array 1:\n");
    displayArray(rows, cols, arr1);
    printf("\nArray 2:\n");
    displayArray(rows, cols, arr2);
    printf("\nResult of multiplication:\n");
    displayArray(rows, cols, result);

    return 0;
}
