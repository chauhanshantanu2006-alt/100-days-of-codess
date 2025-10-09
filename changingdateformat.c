//.Q: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
    char date[11]; 
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = 0; 
    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format\n");
        return 1;
    }
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';
    if (strcmp(month, "04") != 0) {
        printf("This program only converts dates in April (04)\n");
        return 1;
    }
    printf("%s-Apr-%s\n", day, year);
    return 0;
}