#include <bits/stdc++.h>

typedef long long ll;
ll a[224524];

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n, x; scanf("%d%d",&n,&x);
        for (int i=0; i<n; ++i) scanf("%lld", &a[i]);
        std::sort(a, a+n);
        ll s = 0, h = 0;
        a[n] = 2e9;
        for (int i=0; i<n; ++i) {
            if (a[i] == a[i+1]) continue;
            ll es = 1ll * s + 1ll*(a[i+1] - a[i]) * (i+1);
            if (es >= x) { // we got h!
                h = (x - s) / (i + 1) + a[i];
                break;
            }
            s = es;
        }
        assert(h != 0);
        printf("%d\n", h);
    }
    return 0;
}