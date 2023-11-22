#include <stdio.h>

int main() {
    int n, a[114][114], i, j, x, y, k, t;

    scanf("%d", &n);

    x = 0, y = 0, k = 1; // 初始位于 1, 1, 但是下面代码 ++xy,故 xy=0
    t = n; // 初始边长为 n

    for (i = 0; i < (n + 1) / 2; ++i) { // 螺旋填入数字，每次填一圈
        // i 是当前圈数，即当前点距离边界距离最小值
        // t 是当前圈对应的边长

        // 上侧 向右填充 t
        ++x, ++y; for (j = 0; j < t; ++j)
            a[x][y] = k++, ++y;
        
        // 右侧 向下填充 t-1
        --y, ++x; for (j = 1; j < t; ++j)
            a[x][y] = k++, ++x;
        
        // 下
        --x, --y; for (j = 1; j < t; ++j)
            a[x][y] = k++, --y;
        
        // 左 向上填充 t-2
        ++y, --x; for (j = 2; j < t; ++j)
            a[x][y] = k++, --x;
        
        t -= 2; // 每一圈边长 - 2
    }

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j)
            printf("%3d", a[i][j]);
        puts("");
    }
    return 0;
}