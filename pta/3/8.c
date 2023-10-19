#include <stdio.h>
#include <math.h>

typedef long long LL;
LL fact(int n){
    LL r=1;
    for (; n--; ) {
        r *= (n+1);
    }
    return r;
}

int main() {
    int n, i;
    LL s = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        s += fact(i);
    }

    return !printf("%lld\n", s);
}