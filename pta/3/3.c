#include <stdio.h>

int main() {
    int n, i;
    double s = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        s += 1. / (i*3-2) * ((i&1)?1:-1);
    }

    return !printf("sum = %.3lf\n", s);
}