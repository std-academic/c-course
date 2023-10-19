#include <stdio.h>
#include <math.h>
int main() {
    double m,y,r;
    scanf("%lf%lf%lf",&m,&y,&r);
    double a=
        m*(pow(1+r, y)-1);
    printf("interest = %.2lf\n", a);
    return 0;
}