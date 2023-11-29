#include <stdio.h>

int cnt[114], i, j;
char s[114], *ch;

int main() {
    gets(s);
    for (ch = s; *ch; ++ch)
        ++cnt[*ch];

    for (i = 0; i < 256; ++i)
        for (j = 0; j < cnt[i]; ++j)
            putchar(i);
    return 0;
}
