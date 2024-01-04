#include <stdio.h>
#include <math.h>

const double eps = 1e-3;

int main() {
    double x;
    scanf("%lf", &x);
    if (fabs(x) < eps)
        printf("f(0.0) = 0.0\n");
    else
        printf("f(%.1f) = %.1f\n", x, 1/x);
    return 0;
}
