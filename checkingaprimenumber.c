//. Q: Write a program to check if a number is prime.

#include <stdio.h>
#include <math.h>
int main() {
    int n, i, isprime=1;
    printf("enter a number:");
    scanf("%d",&n);
    if (n<1) {
        isprime=0;
    } else {
        for (i=2; i<=sqrt(n); i++) {
            if (n%i==0) {
                isprime=0;    
            }
            if (isprime) {
                printf("%d is a prime number.\n", n );
            }else {
                printf("%d is not a prime number.\n", n);
            }
            }
        }
    return 0;
    }
    
    
