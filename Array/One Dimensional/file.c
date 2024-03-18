#include<stdio.h>

void add(int mat1[2], int mat2[2]);

int main() {
    int mat1[2], mat2[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter the 2 elements of first array:  ");
        scanf("%d", &mat1[i]);
    }

    for (int i = 0; i < 2; i++) {
        printf("Enter the 2 elements of second array:  ");
        scanf("%d", &mat2[i]);
    }

    add(mat1, mat2);
    return 0;
}

void add(int mat1[2], int mat2[2]) {
    int i, sum = 0;
    float average;

    for (i = 0; i < 2; i++) {
        sum += mat1[i] + mat2[i];
    }

    average = (float)sum / 4; 
    
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}
