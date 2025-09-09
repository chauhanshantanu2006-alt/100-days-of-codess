//.Q: Write a program to find the LCM of two numbers using loop without using array and string.

#include <stdio.h>
int main(){
    int num1, num2, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    for (int i = max; ; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}