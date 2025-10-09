//.Q: Reverse each word in a sentence without changing the word order.


#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    int start = 0, end = 0;
    while (str[end] != '\0') {
        if (str[end] == ' ') {
            for (int i = end - 1; i >= start; i--) {
                putchar(str[i]);
            }
            putchar(' ');
            start = end + 1;
        }
        end++;
    }
    for (int i = end - 1; i >= start; i--) {
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}