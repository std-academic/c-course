#include <stdio.h>
#include <assert.h>

char* match(char *s, char ch1, char ch2) {
    char *c, *t = s;
    for (c = s; *c; ++c)
        if (*c == ch2) t = c;
    assert(*t == ch2);

    for (c = s; *c; ++c)
        if (*c == ch1) break;
    assert(*c == ch1);

    *(++t) = 0;
    return c;
}

int main() {
    char s[114], c1[5], c2[5];
    scanf("%s%s%s", s, c1, c2);
    printf("%s\n", match(s, c1[0], c2[0]));
    return 0;
}