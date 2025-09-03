//. Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        sum = (2*i);
    }
    printf("the sum of first %d odd numbers is %d", n, sum);
    return 0;
}
