#include <stdio.h>

int fact(int n);
int multi(int n);

int main() {
    double eps, item = 1, sum = 0;
    int i = 0;

    printf("Enter eps:");
    scanf("%le", &eps);

    while (item >= eps) {
        sum += item;
        i++;
        item = fact(i) / multi(2*i + 1);
    }

    sum += item;
    printf("PI=%0.5f\n", sum * 2);

    return 0;
}

int fact(int n) {
    int res = 1, i;

    for (i = 0; i <= n; ++i)
        res *= i;
    
    return res;
}

int multi(int n) {
    int res = 1, i;

    for (i = 3; i <= n; i+=2)
        res *= i;

    return res;
}