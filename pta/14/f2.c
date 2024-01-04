
char *match(char *s, char ch) {
    char *p;
    for (p=s; *p; ++p) if (*p == ch) return p;
}
