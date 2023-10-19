#include <stdio.h>

int main() {
    int n, x, i; scanf("%d", &n);

    int a=0, b=0;
    for (i = 1; i <= n; ++i) {
        scanf("%d", &x);
        if (x >= 85) ++a;
        if (x < 60) ++b;
    }
    printf("%d %d %d\n", a, n-a-b, b);
    return 0;
}