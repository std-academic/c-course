#include <stdio.h>
#include <limits.h>

int m, n, a[114][114];

int A(int x, int y) {
    if (x < 0 || y < 0 || x >= m || y >= n)
        return INT_MIN;
    return a[x][y];
    
}

int main() {
    int i, j, k, t;

    printf("Enter m, n: "); scanf("%d%d", &m,&n);
    printf("Enter an array: \n");
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j) {
            static int d[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

            t = 1;
            for (k = 0; k < 4; ++k)
                if (a[i][j] <= A(i + d[k][0], j + d[k][1])) {
                    t = 0;
                    break;
                }
            
            if (t) printf("%d %d %d\n", a[i][j], i+1, j+1);
        }
    return 0;
}
