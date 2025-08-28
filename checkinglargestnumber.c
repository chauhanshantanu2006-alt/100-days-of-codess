//. Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main() {
    int number1, number2, number3;
    printf("enter three numbers");
    scanf("%d%d%d", &number1, &number2, &number3);
    if (number1 >= number2 && number1 >= number3) {
        printf("largest mumber is %d", number1);
    }
    else if (number2 >= number1 && number2>=number3) {
        printf("largest number is %d", number2);
    }
    else {
        printf("largest number is %d", number3);
    }
    return 0;
    }
    
