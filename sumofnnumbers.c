//. Q Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms using loop without using array pr string.

#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4 * i - 1);
    }

    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}