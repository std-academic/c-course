#include <stdio.h>
#include <math.h>

const double eps = 0.05;
double _(double x) {
    if (fabs(x) < eps) return 0.;
    return x;
}

int main() {
    double a,b,c,d;
    scanf("%lf%lf%lf%lf", &a,&b,&c,&d);
    return !printf("(%.1f, %.1f)\n", _(a+c), _(b+d));
}
