#include <stdio.h>

int a[11451], c;
int sb(int x) {
    int i, y = 0;
    c = 0;
    for (i = 1; i < x; ++i)
        if (x % i == 0) y += i, a[++c] = i;
    return x == y;
}

int main() {
    int m, n, i, j; scanf("%d%d", &m,&n);

    int cnm = 1;
    for (i = m; i <= n; ++i) {
        if (sb(i)) {
            cnm = 0;
            printf("%d = 1", i);
            for (j = 2; j <= c; ++j) {
                printf(" + %d", a[j]);
            }
            puts("");
        }
    }
    if (cnm) puts("None");
    return 0;
}