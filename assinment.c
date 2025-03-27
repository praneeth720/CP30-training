#include <stdio.h>
int main() {
    int n, m, a[10][10], i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        a[i][j] = 0;
                    }
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}