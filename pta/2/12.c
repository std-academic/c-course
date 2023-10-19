#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("f(%.2lf) = ", x);
    if (x>=0) {
        printf("%.2lf", sqrt(x));
    } else {
        printf("%.2lf", (x+1)*(x+1)+2*x+1/x);
    }
    puts("");
    return 0;
}