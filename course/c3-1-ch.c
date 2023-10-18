#include <stdio.h>

double fact(int);

int main() {
    int m, n;
    double p;

    printf("Enter m, n:\n");
    scanf("%d%d", &m,&n);

    p = fact(n) / fact(n-m);
    printf("result=%.0f\n", p);

    return 0;
}

double fact(int n) {
    int i;
    double product;

    product = 1;
    for (i=1; i<=n; ++i) {
        product = product * i;
    }

    return product;
}
