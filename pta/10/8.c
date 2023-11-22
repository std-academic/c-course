#include <stdio.h>

int n, m, q;
int mp[1919810];

// with this Marco we can use
// Mp(x, y) like a two-dim array
#define Mp(i, j) mp[i * m + j]

int main() {
    int i, j, t, c;

    scanf("%d%d%d", &n, &m, &q);
    while (q--) {
        scanf("%d%d", &t, &c);
        if (t) {
            for (i = 1; i <= n; ++i)
                Mp(i, c) = 1;
        } else {
            for (i = 1; i <= m; ++i)
                Mp(c, i) = 1;
        }
    }
    t = 0;
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= m; ++j)
            t += !Mp(i, j);
    
    printf("%d\n", t);
    return 0;
}
