#include <stdio.h>
// Function to perform calculation based on operation
void calculate(float num1, float num2, char operation) {
    switch (operation) {
        case '+':
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f\n", num1 / num2);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }
}

int main() {
    float num1, num2;
    char operation;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Input operation
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform calculation
    calculate(num1, num2, operation);

    return 0;
}



