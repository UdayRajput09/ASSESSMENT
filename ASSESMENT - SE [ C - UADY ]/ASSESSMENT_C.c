#include <stdio.h>

// Function prototypes
void menu();
int input();
void addition(int num1, int num2);
void subtraction(int num1, int num2);
void multiplication(int num1, int num2);
void division(int num1, int num2);

int main() {
    int i, num, num1, num2;

    // Loop to display the menu and perform calculations 4 times
    for (i = 0; i < 4; i++) {
        menu(); // Display the menu
        printf("\n");
        num = input(); // Get user input for choice

        // Check if the choice is valid
        if (num >= 1 && num <= 4) {
            printf("Enter First Number : ");
            scanf("%d", &num1);
            printf("Enter Second Number : ");
            scanf("%d", &num2);
            printf("\n");

            // Perform the selected operation based on user choice
            if (num == 1) {
                addition(num1, num2);
            } else if (num == 2) {
                subtraction(num1, num2);
            } else if (num == 3) {
                multiplication(num1, num2);
            } else {
                division(num1, num2);
            }
        } else {
            printf("Invalid Choice !\n");
            break;
        }
    }
    return 0;
}

// Function to display the menu
void menu() {
    printf("\n--------Menu--------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
}

// Function to get user input
int input() {
    int num;
    printf("Enter a choice : ");
    scanf("%d", &num);
    return num; // Return the scanned value
}

// Function to perform addition
void addition(int num1, int num2) {
    int sum = num1 + num2;
    printf("Addition is : %d\n", sum);
}

// Function to perform subtraction
void subtraction(int num1, int num2) {
    int sum = num1 - num2;
    printf("Subtraction is : %d\n", sum);
}

// Function to perform multiplication
void multiplication(int num1, int num2) {
    int sum = num1 * num2;
    printf("Multiplication is : %d\n", sum);
}

// Function to perform division
void division(int num1, int num2) {
    if (num2 != 0) {
        int sum = num1 / num2;
        printf("Division : %d\n", sum);
    } else {
        printf("Division with zero is not possible\n");
    }
}

