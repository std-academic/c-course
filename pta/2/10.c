#include <stdio.h>
#include <math.h>

int main() {
    double x,r;
    scanf("%lf", &x);
    if (x==0)
            puts("f(0.0) = 0.0");
    else printf("f(%.1lf) = %.1lf\n",x,1./x);
    return 0;
}