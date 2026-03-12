#include <stdio.h>

void showMenu() {
    printf("\n");
    printf("=====================================\n");
    printf("        ARITHMETIC CALCULATOR        \n");
    printf("=====================================\n");
    printf("  1. Addition\n");
    printf("  2. Subtraction\n");
    printf("  3. Multiplication\n");
    printf("  4. Division\n");
    printf("  5. Modulus\n");
    printf("  6. Exit\n");
    printf("=====================================\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2;

    do {
        showMenu();
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        switch (choice) {

            case 1:
                printf("Result: %.2lf\n", num1 + num2);
                break;

            case 2:
                printf("Result: %.2lf\n", num1 - num2);
                break;

            case 3:
                printf("Result: %.2lf\n", num1 * num2);
                break;

            case 4:
                if (num2 != 0)
                    printf("Result: %.2lf\n", num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;

            case 5:
                if ((int)num2 != 0)
                    printf("Result: %d\n", (int)num1 % (int)num2);
                else
                    printf("Error: Modulus by zero!\n");
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}