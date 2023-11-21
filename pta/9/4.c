#include <stdio.h>

int main() {
    int n, m, x, a[1145], i;
    scanf("%d%d", &n, &m); m %= n;
    for (i = 0; i < n; ++i) scanf("%d", &a[i]);
    if (m == 0) {
        for (i = 0; i < n - 1; ++i) printf("%d ", a[i]);
        printf("%d\n", a[n - 1]);
    } else {
        for (i = m; i < n; ++i) printf("%d ", a[i]);
        for (i = 0; i < m - 1; ++i) printf("%d ", a[i]);
        printf("%d\n", a[m - 1]);
    }
    return 0;
}