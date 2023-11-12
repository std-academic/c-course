#include <stdio.h>
#include <ctype.h>

char enc(char c) {
    if (isupper(c))
        return (c - 'A' + 1) % 26 + 'a';
    if (islower(c))
        return (c - 'a' + 1) % 26 + 'A';

    return c;
}

int main() {
    char *c, s[1145];
    printf("Enter characters: "); gets(s);
    
    for (c = s; *c; ++c) *c = enc(*c);
    return !puts(s);
}
