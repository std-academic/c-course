#include <stdio.h>

int main() {
    int n, x, i; scanf("%d", &n);

    printf("sign(%d) = %d\n", n, n>0?1:(n<0?-1:0));
    return 0;
}