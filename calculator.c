#include <stdio.h>

void calculator() {
    int choice;
    float num1, num2, result;

    printf("Welcome to the Calculator!\n");
    printf("---------------------------\n");
    printf("Select an operation to perform:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");

    do {
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                    break;
                case 2:
                    result = num1 - num2;
                    printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                    break;
                case 3:
                    result = num1 * num2;
                    printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                    break;
                case 4:
                    if (num2 != 0) {
                        result = num1 / num2;
                        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                    } else {
                        printf("Error: Division by zero is not allowed!\n");
                    }
                    break;
            }
        } else if (choice == 5) {
            printf("Exiting the Calculator. Goodbye!\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
}

int main() {
    calculator();
    return 0;
}
