#include <bits/stdc++.h>

typedef long long ll;

int a[114];

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        ll mul = 1;
        int mn = 9;
        for (int i=0; i<n; ++i) {
            scanf("%d", &a[i]);
            mn = std::min(mn, a[i]);
        }
        
        for (int i=0; i<n; ++i) {
            if (a[i] == mn) {
                ++a[i]; mn=114514;
            }
            mul *= a[i];
        }
        printf("%lld\n", mul);
    }
    return 0;
}
