
char buf[114514], *p = buf;

const char* sp(int x) { // print ' ' x times
    char *q = p;
    while (x--) {
        *p = ' '; ++p;
    }
    *p = 0; ++p;
    return q;
}
void hollowPyramid(int n) {
    int i;
    if (n) printf("%s%d\n", sp(n-1), 1);
    for (i = 2; i < n; ++i) {
        printf("%s%d%s%d\n", sp(n-i), i, sp(i*2-3), i);
    }
    if (n != 1)
        for (i = 1; i < n * 2; ++i) printf("%d", n);
}
