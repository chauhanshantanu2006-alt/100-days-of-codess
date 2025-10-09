//.Q: Check if two strings are anagrams of each other.


#include <stdio.h>
#include <string.h>
int main() {
    char str1[1000], str2[1000];
    int freq[26] = {0}; 
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = 0; 
    str2[strcspn(str2, "\n")] = 0; 
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq[str1[i] - 'a']++;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq[str2[i] - 'a']--;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}