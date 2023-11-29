#include <stdio.h>
#include <ctype.h>

int main() {
    char s[114], *ch;
    int n;
    
    gets(s);
    scanf("%d", &n);
    for (ch = s; *ch; ++ch)
        if (islower(*ch))
            putchar(((*ch - 'a' + n) % 26 + 26) % 26 + 'a');
        else if (isupper(*ch))
            putchar(((*ch - 'A' + n) % 26 + 26) % 26 + 'A');
        else
            putchar(*ch);
    return 0;
}
