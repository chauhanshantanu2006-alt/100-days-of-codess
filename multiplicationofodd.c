//.Q: Write a program to find the product of odd digits of a number using loop without using array or string.

#include <stdio.h>
int main() {
    int number, product = 1, digit, hasodd = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasodd = 1;
        }
        number /= 10;
    }
    if (hasodd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found!\n");

    return 0;
}
