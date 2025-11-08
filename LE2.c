//.Q: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.



#include <stdio.h>
int main() {
    int n, x;
    printf("enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d sorted elements:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the value of x:");
    scanf("%d", &x);
    int start = 0, end = n - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            end = mid - 1; 
        } else {
            start = mid + 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}