#include <stdio.h>

int main() {
    int m, n, i;
    double s = 0;

    scanf("%d%d", &m, &n);

    for (i = m; i <= n; ++i) {
        s += 1. / i + 1. * i * i;
    }

    return !printf("sum = %.6lf\n", s);
}