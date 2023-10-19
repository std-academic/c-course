#include <stdio.h>

#define LL long long

int main() {
    int n; scanf("%d", &n);
    while (n--) {
        LL x, y, z;

        scanf("%lld%lld%lld", &x,&y,&z);
        if (x*x + y*y + z*z == x*y*z*3) {
            puts("Yes");
        } else puts ("No");
    }

    return 0;
}