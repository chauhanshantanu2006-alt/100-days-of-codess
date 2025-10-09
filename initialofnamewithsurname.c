//.Q: Print initials of a name with the surname displayed in full.


#include <stdio.h>
#include <string.h>
int main() {
    char name[1000];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 
    int len = strlen(name);
    if (len > 0 && name[0] != ' ') {
        printf("%c.", name[0]);
    }
    int lastSpaceIndex = -1;
    for (int i = 1; i < len; i++) {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
            lastSpaceIndex = i;
        }
    }
    if (lastSpaceIndex != -1 && lastSpaceIndex + 1 < len) {
        printf(" %s\n", &name[lastSpaceIndex + 1]);
    } else if (lastSpaceIndex == -1) {
        printf("\n");
    }
    return 0;
}