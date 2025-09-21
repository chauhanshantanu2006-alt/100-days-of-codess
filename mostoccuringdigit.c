//. Q: Find the digit that occurs the most times in an integer number.


#include <stdio.h>
int main() {
    int number, digit, count[10] = {0}, i, max_count = 0, most_occuring_digit = -1;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    while (number > 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            most_occuring_digit = i;
        }
    }
    if (most_occuring_digit != -1) {
        printf("%d\n", most_occuring_digit);
    } else {
        printf("-1\n");
    }
    return 0;
}