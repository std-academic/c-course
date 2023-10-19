#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double s = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        s += sqrt(i);
    }

    return !printf("sum = %.2lf\n", s);
}