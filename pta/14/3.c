#include <math.h>
#include <stdio.h>

int ip(int x) {
    int i, y = sqrt(x);
    if (x <= 2) return x == 2;
    for (i = 2; i <= y; ++i) if (x % i == 0) {
        return 0;
    }
    return 1;
}

int main() {
    int i, m, n, s=0, c=0;
    scanf("%d%d", &m,&n);
    for (i=m; i<=n;++i) if (ip(i)) ++c,s+=i;
    printf("%d %d\n", c,s);
    return 0;
}
