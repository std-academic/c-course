#include <bits/stdc++.h>
using namespace std;

int n, m, K;

int fa[1145];
int bottom[1145];

int findfa(int x) {
    if (fa[x] <= 0) return fa[x];
    return findfa(fa[x]);
}

int main() {
    // fa[x] = 0 -> unassigned
    // fa[x] > 0 -> parent = fa[x]
    // fa[x] < 0 -> parent = hanger (-fa[x])

    scanf("%d%d%d", &n, &m, &K);

    while (K--) {
        int op, x, y, t;

        scanf("%d%d", &op, &x);

        int z = -findfa(x); // hanger x at

        if (op == 0) {
            scanf("%d", &y);

            if (z > 0) {
                t = bottom[z];
                bottom[z] = fa[x];
            }

            if (bottom[y] > 0)
                fa[x] = bottom[y];
            else
                fa[x] = -y;

            bottom[y] = (z > 0) ? t : x;
        } else {
            if (z != 0)
                printf("%d\n", z);
            else
                puts("free hanger.");
        }
    }
    return 0;
}
