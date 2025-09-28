//.Q: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int A[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    if (n != m) {
        printf("Matrix is not square\n");
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
