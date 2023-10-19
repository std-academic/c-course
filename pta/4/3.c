#include <stdio.h>

int Max(int a, int b) { return a>b? a : b; }
int Min(int a, int b) { return a<b? a : b; }

int main() {
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);

    int mx = Max(a, Max(b, c));
    int mn = Min(a, Min(b, c));
    printf("%d->%d->%d\n", mn, a+b+c-mn-mx, mx);
    return 0;
}
