//. Q27: Write a program to print the sum of the first n odd numbers without using array or string.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("enter the value of n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        sum = (2*i-1);
    }
    printf("the sum of first %d odd numbers is %d", n, sum);
    return 0;
}

