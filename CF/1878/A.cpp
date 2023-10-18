#include <bits/stdc++.h>

int a[1145], c[1145];

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n, k; scanf("%d%d", &n,&k);
        bool ans = false;
        for (int i=1; i<=n; ++i) {
            scanf("%d", &a[i]);
            if (a[i] == k) ans = true;
        }
        puts(ans ? "YES" : "NO");
    }
    return 0;
}