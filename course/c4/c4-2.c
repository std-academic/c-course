#include <stdio.h>

#define T(fn, op) int fn(int a, int b) { return a op b ? a : b; }
T(Max, >); T(Min, <)

int a, b, c;

void trisort() { // descending
    int mx = Max(a, Max(b, c));
    int mn = Min(a, Min(b, c));

    b = a + b + c - mx - mn;
    a = mx, c = mn;
}
int pack(int a, int b, int c) { return a * 100 + b * 10 + c; }
void unpack(int n) { c = n % 10; n /= 10; b = n % 10; n /= 10; a = n; }

int main() {
    int n, i, x, y;
    printf("Enter n: "); scanf("%d", &n);
    for (i=1; n!=495; ++i) {
        unpack(n); trisort();
        x = pack(a, b, c);
        y = pack(c, b, a);
        n = x - y;
        printf("%d: %d-%d=%d\n", i, x, y, n);
    }
    return 0;
}
