#include <stdio.h>
#define LL long long
#define Abs(x) ((x)>0?(x):(-x))

LL x = 0, y = 1;

LL gcd(LL a, LL b) {
    if (b) return gcd(b, a%b);
    return a;
}
void reduce(LL *a, LL *b) {
    LL g = gcd(*a, *b);
    *a /= g; *b /= g;
}
void add(LL a, LL b) {
    reduce(&a, &b);
    LL v = b / gcd(b, y) * y;
    LL u = (v / b) * a + (v / y) * x;

    x = u; y = v;
    reduce(&x, &y);
}

int main() {
    int a, b, n;
    
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a); getchar(); scanf("%d", &b);
        add(a, b);
    }

    if (Abs(x) >= Abs(y) || !x) {
        LL z = x / y;
        x -= z * y;

        if (x) printf("%lld %lld/%lld", z, x, y);
        else printf("%lld", z);
    } else 
        printf("%lld/%lld", x, y);
    return 0;
}