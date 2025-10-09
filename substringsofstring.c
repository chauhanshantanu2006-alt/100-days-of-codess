//.Q: Print all sub-strings of a string.


#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            if (i != len - 1 || j != len - 1) {
                putchar(',');
            }
        }
    }
    putchar('\n');
    return 0;
}