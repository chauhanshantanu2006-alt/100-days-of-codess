//. Q: Search in a sorted array using binary search.
#include <stdio.h>
int main () {
    int n, i, arr[100], target, left, right, mid, found_index = -1;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter the sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target value to search: ");
    scanf("%d", &target);
    
    left = 0;
    right = n - 1;
    
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            found_index = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}