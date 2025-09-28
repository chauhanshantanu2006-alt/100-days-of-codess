//.Q: Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>
int main () {
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

    int distinct = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i][i] == A[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}