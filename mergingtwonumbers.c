//.Q: Merge two arrays.

#include <stdio.h>
int main() {
    int n1, n2, i;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Merged array: ");
    for (i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    for (i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}