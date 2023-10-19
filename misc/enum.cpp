#include <bits/stdc++.h>

int frac(int x) {
    int res = 1;
    for (int i = 2; i <= x; ++i)
        res *= i;
    return res;
}

int cnum(int n, int m) {
    // C(n, m) = n! / m! / (n-m)!
    int res = frac(n) / frac(m);
    return res / frac(n-m);
}
