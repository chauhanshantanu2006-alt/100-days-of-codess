//. Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main() {
    int number;
    printf("enter an integer");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }
    return 0;
    }
