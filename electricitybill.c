//. Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("enter the units consumed");
    scanf("%d", &units);
    if (units <= 100)
    {
        bill = units*5.0;
        printf("the bill is %f", bill);
    }
    else if (units <= 200)
    {
        bill = units*6.333;        
        printf("the bill is %f", bill);
    }
    else if (units <=300)
    {
        bill= units*8.8;
        printf("the bill is %f", bill);
    }
return 0;    
}