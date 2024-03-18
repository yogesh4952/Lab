// WAPthat reads names and addresses of different students and rearranges them on the basis of name in alphabetic order.
#include <stdio.h>
#include <string.h>

typedef struct Student {
    char name[100];
    char address[100];
} Student;

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student stu[100];

    // Input details of students
    for (int i = 0; i < n; i++) {
        printf("Enter the details of student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", stu[i].name);
        printf("Enter address: ");
        scanf("%s", stu[i].address);
    }

    // Sorting students based on name in alphabetical order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(stu[i].name, stu[j].name) > 0) {
                Student temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }

    printf("The details in alphabetical order are:\n");

    // Printing details in alphabetical order
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", stu[i].name);
        printf("Address: %s\n", stu[i].address);
        printf("\n");
    }

    return 0;
}
