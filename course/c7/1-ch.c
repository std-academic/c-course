#include <stdio.h>

#define MAXN 6

int main() {
    int i, j, m, n, sum;
    int a[MAXN][MAXN];

    printf("Enter m, n: ");
    scanf("%d%d", &m, &n);
    printf("Enter an array:\n");
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    
    for (i = 0; i < m; ++i) {
        sum = 0;
        for (j = 0; j < n; ++j)
            sum += a[i][j];
        
        printf("sum of row %d is %d\n", i, sum);
    }
    return 0;
}
