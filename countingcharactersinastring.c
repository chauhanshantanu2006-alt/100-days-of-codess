//. Q: Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    char str[1000];
    int count = 0;

    
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    
    printf("%d\n", count);
    return 0;
}