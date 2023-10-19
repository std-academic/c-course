#include <stdio.h>

int main() {
    int n, i;
    double s = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        s += 1. / i;
    }

    return !printf("sum = %.6lf\n", s);
}