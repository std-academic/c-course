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
    return !printf("product = %lld\n", fact(n));
}