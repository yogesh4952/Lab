#include<stdio.h>

void input(int arr[2][3]);
void sum(int arr1[2][3], int arr2[2][3]);

int main() {
    int arr1[2][3], arr2[2][3];

    printf("Input all the elements of the first matrix\n");
    input(arr1);

    printf("Input all the elements of the second matrix\n");
    input(arr2);

    printf("The sum of the matrices is:\n");
    sum(arr1, arr2);

    return 0;
}

void input(int arr[2][3]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the a%d%d element of matrix: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
}

void sum(int arr1[2][3], int arr2[2][3]) {
    int i, j, sum[2][3];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
