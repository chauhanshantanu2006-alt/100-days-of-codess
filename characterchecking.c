//. Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main() {
    char character;
    printf("enter a character");
    scanf(" %c", &character);
    if (character >= 'A' && character <= 'Z') {
        printf("upper case alphabet");
    } else if (character >= 'a' && character <= 'z') {
        printf("lower case alphabet");
    } else if (character >= '0' && character <= '9') {
        printf("digit");
    }else {
        printf("special character");
    } 
    return 0;   
    }
    
    
