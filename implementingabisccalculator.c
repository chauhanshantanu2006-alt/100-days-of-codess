//. Q. Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() {
    int num1, num2, result;
    char op;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (op == '+') {
        result = num1 + num2;
        printf("Result: %d\n", result);
    } 
    else if (op == '-') {
        result = num1 - num2;
        printf("Result: %d\n", result);
    } 
    else if (op == '*') {
        result = num1 * num2;
        printf("Result: %d\n", result);
    } 
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %d\n", result);
        } else {
            printf("Error: Division by zero!\n");
        }
    } 
    else if (op == '%') {
        if (num2 != 0) {
            result = num1 % num2;
            printf("Result: %d\n", result);
        } else {
            printf("Error: Modulo by zero!\n");
        }
    } 
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}

