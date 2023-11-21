
void CountOff(int n, int m, int *out) {
    int nxt[n + 5], cur = 1, pre = n, i, j;

    for (i = 1; i <= n; ++i) nxt[i] = i + 1;
    nxt[n] = 1;

    for (i = 1; i <= n; ++i) {
        for (j = 1; j < m; ++j)
            pre = cur,
            cur = nxt[cur];

        out[cur - 1] = i;
        nxt[pre] = nxt[cur];

        cur = nxt[cur];
    }
}
