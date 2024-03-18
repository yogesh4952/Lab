
/*Electricity Bill: Write a program to calculate the electricity bill of a customer based on their
usage and tariff rates.*/
/*Name:Yogesh Shah
  Sem:1st
  Roll No:19*/

#include <stdio.h>

int main() {
    // Declare variables
    float usage, bill;
    int choice;

    // Prompt user for input
    printf("Enter the electricity usage in kilowatt-hours: ");
    scanf("%f", &usage);

    // Prompt user for tariff type
    printf("Select the tariff type:\n");
    printf("1. Residential\n2. Commercial\n");
    scanf("%d", &choice);

    // Calculate bill based on tariff type
    switch(choice) {
        case 1: // Residential
            if (usage <= 100)
                bill = usage * 0.10;
            else if (usage <= 200)
                bill = 100 * 0.10 + (usage - 100) * 0.15;
            else
                bill = 100 * 0.10 + 100 * 0.15 + (usage - 200) * 0.20;
            break;
        case 2: // Commercial
            if (usage <= 100)
                bill = usage * 0.15;
            else if (usage <= 200)
                bill = 100 * 0.15 + (usage - 100) * 0.20;
            else
                bill = 100 * 0.15 + 100 * 0.20 + (usage - 200) * 0.25;
            break;
        default:
            printf("Invalid choice. Please select 1 or 2.\n");
            return 1; // Exit program with error code
    }

    // Display the calculated bill
    printf("Electricity Bill: $%.2f\n", bill);

    return 0; // Exit program successfully
}


