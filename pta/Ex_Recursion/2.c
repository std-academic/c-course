#include <stdio.h>

typedef long long LL;

LL x;
int n;

char opt[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void conv(LL x) {
    if (x >= n) conv(x / n);
    printf("%c", opt[x % n]);
}

int main() {
    scanf("%lld%d", &x, &n);
    conv(x);
    return !puts("");
}
