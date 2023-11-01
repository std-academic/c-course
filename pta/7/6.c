
int a[114514], c;

void factorize(int n) { // 因式分解。
    int i;

    a[c = 1] = 1;
    for (i = 2; i <= n; ++i)
        if (n % i == 0)
            a[++c] = i;
}

int factorsum(int n) {
    factorize(n);

    int i, s = 0;
    for (i = 1; i < c; ++i) // 注意，题目所属因子和不包括n本身。
        s += a[i];
    return s;
}

void PrintPN(int m, int n) { // 闭区间
    int i, j, no = 1;
    for (i = m; i <= n; ++i)
        if (factorsum(i) == i) {
            printf("%d = 1", i);
            for (j = 2; j < c; ++j) {
                printf(" + %d", a[j]);
            }
            puts(""); no = 0;
        }
    if (no) puts("No perfect number");
}
