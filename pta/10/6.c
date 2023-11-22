#include <stdio.h>

int map[1145][1145];

int main() {
    int n, m, i, j, k, x, y, t, p, q;
    char buf[1145];

    scanf("%d%d", &n, &m);
    for (i = 0; i < n; ++i) {
        scanf("%s", buf);
        for (j = 0; j < m; ++j) if (buf[j] == '#') {
            map[i][j] = 2;
        }
    }

    scanf("%d", &k);
    while (k--) {
        static const int 
            dx[] = {-1, 1, 0, 0},
            dy[] = {0, 0, -1, 1};

        scanf("%d%d", &x, &y);

        t = 0;
        if (map[x][y]) ++t, map[x][y] = 0;

        for (i = 0; i < 4; ++i) { // 通过位移数组 dx, dy 计算相邻位置
            p = x + dx[i], q = y + dy[i];

            if (p >= 0 && q >= 0 && p < n && q < m && map[p][q]) {
                map[p][q] -= 1;
                if (!map[p][q]) ++t;
            }
        }
        printf("%d\n", t);
    }
}