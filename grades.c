//. Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>
int main() {
    int percentage;
    printf("enter the percentage");
    scanf("%d", &percentage);
    if (percentage>=90 && percentage<=100) {
        printf("grade A");
    }
    else if (percentage>=80 && percentage<90) {
        printf("grade B");
    }
    else if (percentage>=70 && percentage<80) {
        printf("grade C");
    }
    else if(percentage>=60 && percentage<70) {
        printf("grade D");
    }
    else if(percentage>50 && percentage<60) {
        printf("grade E");
    }
    else {
        if(percentage>=0 && percentage<=50) {
            printf("grade F");
        }
        else {
            printf("invalid percentage");
        }
        }
    return 0;
}
    