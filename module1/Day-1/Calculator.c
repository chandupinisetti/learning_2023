#include <stdio.h>

int main() {
    float operand_1, operand_2, result;
    char operator;

    printf("Enter the input1: ");
    scanf("%f", &operand_1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter the input2: ");
    scanf("%f", &operand_2);

    switch (operator) {
        case '+':
            result = operand_1 + operand_2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand_1 - operand_2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand_1 * operand_2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand_2 != 0) {
                result = operand_1 / operand_2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
         case '^':
            result = pow(operand_1, operand_2);
            printf("\nResult after Power: %.2lf\n", result);
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}