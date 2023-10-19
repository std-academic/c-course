#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    long long s = 1;
    puts("pow(2,0) = 1");
    for (i = 1; i <= n; ++i) {
        s *= 2;
        printf("pow(2,%d) = %lld\n", i, s);
    }

    return 0;
}