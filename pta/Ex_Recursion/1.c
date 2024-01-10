#include <stdio.h>

int f(int x) {
    if (x <= 2) return 1;
    return f(x-1) + f(x-2);
}

int main() {
    int n; scanf("%d", &n);
    if (n<1 || n>50) puts("Wrong Input!");
    else printf("F(%d)=%d\n", n, f(n));
    return 0;
}
