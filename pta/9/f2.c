
void ArrayShift(int *a, int n, int m) {
    int i;
    int b[n + m];
    m %= n;
    for (i = 0; i < n - m; ++i)
        b[i + m] = a[i];
    for (i = n - m; i < n; ++i)
        b[i + m - n] = a[i];
    for (i = 0; i < n; ++i)
        a[i] = b[i];
}
