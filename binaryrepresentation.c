//. Q: Write a program to take a number as input and print its equivalent binary representation. 

#include <stdio.h>
#include <math.h>
int main() {
    int n, binary = 0, remainder, base = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 2;              
        binary += remainder * base;     
        n = n / 2;                     
        base = base * 10;              
    }

    printf("Binary representation = %d\n", binary);

    return 0;
}

