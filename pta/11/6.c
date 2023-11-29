#include <stdio.h>
#include <ctype.h>

char s[114], *ch;
int t = 1;

int main() {
    gets(s);
    for (ch = s; *ch; ++ch) if (isdigit(*ch)) {
        if (t && *ch != '0')
            t = 0, putchar(*ch);
        else if (!t)
            putchar(*ch);
    }
    if (t) putchar('0');
    return 0;
}
