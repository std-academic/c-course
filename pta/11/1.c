#include <stdio.h>

int main() {
    char t, s[114], *ch;
    int i = 0, m = -1;

    t = getchar(); getchar(); gets(s);
    for (ch = s; *ch; ++ch) {
        if (*ch == t) m = i;
        ++i;
    }
    if (m != -1) printf("index = %d\n", m);
    else puts("Not Found");
    return 0;
}
