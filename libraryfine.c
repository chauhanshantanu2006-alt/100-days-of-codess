//. Q: Write a program to calculate a library fine based on late days.

#include <stdio.h>
int main() {
    int dayslate;
    int fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &dayslate);

    if (dayslate == 0) {
        printf("No fine! Book returned on time.\n");
    } 
    else if (dayslate <= 5) {
        fine = dayslate * 1;
        printf("Total fine: ₹%d\n", fine);
    } 
    else if (dayslate <= 10) {
        fine = dayslate * 4;
        printf("Total fine: ₹%d\n", fine);
    } 
    else if (dayslate <= 20) {
        fine = dayslate * 6;
        printf("Total fine: ₹%d\n", fine);
    } 
    else if (dayslate <= 30) {
        fine = dayslate * 10;
        printf("Total fine: ₹%d\n", fine);
    } 
    else {
        printf("Pay fine ₹300 and your membership is cancelled.\n");
        printf("You are blacklisted for 3 months.\n");
    }

    return 0;
}


