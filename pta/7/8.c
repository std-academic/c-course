#include <math.h>
#include <string.h>

int prime(int p) {
    if (p <= 1) return 0;

    int i, q;
    q = sqrt(p);

    for (i = 2; i <= q; ++i)
        if (p % i == 0) return 0;
    return 1;    
}

int sieve[114514];
int PrimeSum(int m, int n) {
    // 给出另外一种快速求 1~n 所有素数
    // 的方法：筛法

    memset(sieve, 0, sizeof(sieve));
    
    int i, j;
    int s = 0;
    for (i = 2; i <= n; ++i) {
        if (sieve[i]) continue; // i 非素数

        if (i >= m) // i 为区间内素数，统计
            s += i;

        for (j = i + i; j <= n; j += i) // i 的整数倍均为合数
            sieve[j] = 1;
    }
    return s;
}