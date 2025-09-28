//.Q: Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>
int main() {
    int i, j, rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int rowSums[rows];

    
    for (i = 0; i < rows; i++) {
        rowSums[i] = 0;
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    return 0;
}