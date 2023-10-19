#include <stdio.h>

int main() {
    int n, i;
    double s = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        s += 1. / (i*2-1) * ((i&1)?1:-1);
    }

    return !printf("sum = %.6lf\n", s);
}