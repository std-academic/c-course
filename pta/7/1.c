
void pyramid(int n) {
    int i, j;

    for (i = 1; i <= n; ++i) {
        for (j = 0; j < n - i; ++j) putchar(' ');
        for (j = 1; j <= i; ++j) printf("%d ", i);
        puts(""); // 换行
    }
}
