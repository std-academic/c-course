
int birthday(char s[]) {
    int d = 0;
    char *p = s + 6;
    for (; p != s + 14; ++p)
        d = d * 10 + *p - '0';
    return d;
}
int cmp(char *s1, char *s2) {
    return birthday(s1) > birthday(s2);
}

char c[1145][24];
char buf[24];

int main() {
    int n, i, j; scanf("%d", &n);
    for (i = 0; i < n; ++i) scanf("%s", c[i]);

    for (i = 0; i < n; ++i)
        for (j = i + 1; j < n; ++j)
            if (cmp(c[i], c[j])) {
                memcpy(buf, c[i], sizeof(buf));
                memcpy(c[i], c[j], sizeof(buf));
                memcpy(c[j], buf, sizeof(buf));
            }
    for (i = 0; i < n; ++i) puts(c[i]);
    return 0;
}
