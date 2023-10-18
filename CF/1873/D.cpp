#include <bits/stdc++.h>

int f[214514], a[214514];
char s[214514];

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n, k; scanf("%d%d", &n, &k);
        scanf("%s", s);
        for (int i=1; i<=n; ++i)
            a[i] = s[i-1] == 'B';
        int c = 0;
        int i = 1;
        for (; i<=n ;) {
            if (a[i]) {
                ++c; i += k;
            } else {
                ++i;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}