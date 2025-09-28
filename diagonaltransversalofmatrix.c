//.Q: Perform diagonal traversal of a matrix.


#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int A[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    
    for (int d = 0; d <= n + m - 2; d++) {
        if (d % 2 == 0) {
            
            for (int i = (d < n ? d : n - 1); i >= 0; i--) {
                int j = d - i;
                if (j >= 0 && j < m)
                    printf("%d ", A[i][j]);
            }
        } else {
            
            for (int i = 0; i < n; i++) {
                int j = d - i;
                if (j >= 0 && j < m)
                    printf("%d ", A[i][j]);
            }
        }
    }

    printf("\n");
    return 0;
}
