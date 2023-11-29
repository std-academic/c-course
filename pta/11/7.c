#include <stdio.h>
#include <ctype.h>

int be(char c) {
    static char s[] = "AEIOU";
    int i; for (i = 0; i < 5; ++i)
        if (s[i] == c) return 1;
    return 0;
}

int main() {
    char s[114], *ch;

    int n = 0;
    gets(s);
    for (ch = s; *ch; ++ch)
        if (isupper(*ch) && !be(*ch))
            ++n;
    
    printf("%d\n", n);
    return 0;
}
