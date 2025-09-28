//.Q: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int A[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    
    if (n != m) {
        printf("False\n");
        return 0;
    }

    int symmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
