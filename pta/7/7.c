
int f[114514];

int init_fib() {
    int i;
    f[1] = f[2] = 1;
    for (i = 3; i <= 11451; ++i)
        f[i] = f[i - 1] + f[i - 2];
    return 0;
}

int fib(int n) {
    if (!f[1]) init_fib();
    return f[n];
}

void PrintFN(int m, int n) {
    if (!f[1]) init_fib();

    int i, no = 1;
    for (i = 1; i <= 11451; ++i) 
        if (m <= f[i] && f[i] <= n && no)
            printf("%d", f[i]), no = 0;
        else
            printf(" %d", f[i]);
    if (no) puts("No Fibonacci number");
}
