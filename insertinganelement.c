//. Q: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, i, arr[100], new_element, position;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the new element to insert: ");
    scanf("%d", &new_element);
    position = n; 
    for (i = 0; i < n; i++) {
        if (arr[i] > new_element) {
            position = i;
            break;
        }
    }
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = new_element;
    printf("Updated array: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}