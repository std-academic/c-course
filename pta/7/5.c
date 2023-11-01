
int narcissistic(int n) {
    int m = n, d = 0, i;
    long long s, q;

    while (m) {
        m /= 10;
        ++d;
    }
    if (d < 3) return 0;
    
    m = n; s = 0;
    while (m) {
        q = 1;
        for (i = 1; i <= d; ++i) q *= (m % 10);
        m /= 10;
        s += q;
    }
    return s == n;
}

void PrintN(int m, int n) { // !: 开区间, sb题目。
    int i;
    for (i = m+1; i < n; ++i)
        if (narcissistic(i))
            printf("%d\n", i);
}
