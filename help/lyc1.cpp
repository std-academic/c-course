#include <cstdio>

int n, a[114514];
bool f[114514];

int main() {
    scanf("%d", &n);
    for (int i=1; i<=n; ++i) {
        scanf("%d", &a[i]);
    }

    int cur = 1; // 当前处于第一个人。
    f[1] = true; // 第一个人死。
    for (int loop=1; loop<n; ++loop) { // 死亡循环进行 (n-1) 次。
        int alive = n-loop; // 当前存活人数。
        int iter = a[cur]; // 需要从 cur 往下数的人数。

        // 优化：如果 iter 大于 alive，意味着会重复好几圈，我们只需
        // 取 iter 对 alive 的余数即可。
        iter %= alive;
        if (iter == 0)
            iter = alive;

        for (; iter; --iter) {
            do {
                cur = cur % n + 1; // 数到最后一个人时回到第一个
            } while (f[cur]); // 向下数，直到不是死人
        } // 数 iter 个

        f[cur] = true;
    }
    printf("%d\n", cur);
    return 0;
}