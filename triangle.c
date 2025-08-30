//. Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
    int a, b, c;
    printf("enter the sides of triangle");
    scanf("%d%d%d", &a,&b,&c);
    if(a==b && b==c) 
    {
        printf("equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("isoceles triangle");
   }
    else
    {
        printf("scalene triangle");
    }
    return 0;
    }

