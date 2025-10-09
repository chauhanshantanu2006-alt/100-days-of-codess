//.Q: Check if one string is a rotation of another.


#include <stdio.h>
#include <string.h>
int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = 0; 
    str2[strcspn(str2, "\n")] = 0; 
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }
    strcat(str1, str1); 
    if (strstr(str1, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    return 0;
}