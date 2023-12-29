#include <stdio.h>

int main() {
    int n; scanf("%d", &n);

    char buf[50];
    double a, b, c;
    int i;
    for (i = 1; i <= n; ++i) {
        scanf("%s%lf%lf%lf", buf, &a,&b,&c);
        printf("%s %.2f\n", buf, a+b-c);
    }
    return 0;
}
