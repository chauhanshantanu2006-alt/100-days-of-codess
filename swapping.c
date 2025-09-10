//. Q: Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() {
    int number, firstDigit, lastDigit, numDigits = 0, temp, multiplier = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;
    lastDigit = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        numDigits++;
        multiplier *= 10;
    }
    firstDigit = temp;
    if (numDigits == 0) {
        printf("Number after swapping: %d\n", number);
        return 0;
    }
    int middlePart = (number % multiplier) / 10;
    int swappedNumber = lastDigit * multiplier + middlePart * 10 + firstDigit;
    printf("Number after swapping: %d\n", swappedNumber);
    return 0;
}

